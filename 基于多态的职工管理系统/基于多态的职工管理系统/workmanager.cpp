#include"workmanager.h"

//构造函数
WorkManager::WorkManager()
{
	//1.文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//读文件
	if (!ifs.is_open())
	{
		//cout << "文件不存在" << endl;
		//初始化属性
		this->m_ElemNum = 0;
		//初始化数组指针
		this->m_EleArr = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//2.文件存在且数据为空
	char ch;
	ifs >> ch;//>>读右面一个字符
	if (ifs.eof())//eof文件末尾
	{
		//文件为空
		//cout << "文件为空" << endl;
		//初始化属性
		this->m_ElemNum = 0;
		//初始化数组指针
		this->m_EleArr = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//3.文件存在且存有数据
	int num = this->get_EmpNum();
	//cout << "职工人数为： " << num << endl;
	this->m_ElemNum = num;

	//开辟空间
	this->m_EleArr = new Worker*[this->m_ElemNum];
	//将文件中的数据存到数组中
	this->init_Emp();
	//测试代码
	//for (int i = 0; i < this->m_ElemNum; i++)
	//{
	//	cout <<"职工编号： "<<this->m_EleArr[i]->m_Id
	//		 <<" 姓名： " <<this->m_EleArr[i]->m_Name
	//		 <<" 部门编号： "<<this->m_EleArr[i]->m_DeptId << endl;
	//}

}
//展示菜单
void WorkManager::show_Menu()
{
	cout << "******************************************" << endl;
	cout << "********** 欢迎使用职工管理系统 **********" << endl;
	cout << "**********   0.退出管理系统   ************" << endl;
	cout << "**********   1.增加职工信息   ************" << endl;
	cout << "**********   2.显示职工信息   ************" << endl;
	cout << "**********   3.删除职工信息   ************" << endl;
	cout << "**********   4.修改职工信息   ************" << endl;
	cout << "**********   5.查找职工信息   ************" << endl;
	cout << "**********   6.按照编号排序   ************" << endl;
	cout << "**********   7.清空所有信息   ************" << endl;
	cout << "******************************************" << endl;
	cout << endl;
}

//退出系统功能
void WorkManager::exitsystem()
{
	cout << "欢迎下次使用" << endl;
	exit(0);//退出
}

//增加职工功能
void WorkManager::Add_Emp()
{
	cout << "请输入要增加的员工人数: " << endl;
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//添加
		//计算添加的新的空间大小
		int newsize = this->m_ElemNum + addNum;//新空间人数 = 原来记录人数 + 新增人数
		//开辟新空间
		Worker **newspace = new Worker*[newsize];
		//将原来空间下的数据拷贝进新空间
		if (this->m_EleArr != NULL)
		{
			for (int i = 0; i < this->m_ElemNum; i++)
			{
				newspace[i] = this->m_EleArr[i];
			}
		}
		//批量添加新数据
		for (int i = 0; i < addNum; i++)
		{
			int id;//职工编号
			string name;//职工姓名
			int dSelect;//部门选择
			cout << "请输入第" << i + 1 << "个新职工的编号： " << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个新职工姓名： " << endl;
			cin >> name;
			cout << "请选择该职工岗位" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dSelect;

			Worker *w = NULL;
			switch (dSelect)
			{
			case 1:
				w = new Employee(id, name, 1);
				break;
			case 2:
				w = new Manager(id, name, 2);
				break;
			case 3:
				w = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			//将创建的职工指针保存到数组中
			newspace[this->m_ElemNum + i] = w;
		}
		//释放原有空间
		delete[] this->m_EleArr;

		//更改新空间指向
		this->m_EleArr = newspace;

		//更新新的职工人数
		this->m_ElemNum = newsize;

		//成功添加后，保存数据到文件中
		this->save();

		//更新员工不为空标志
		this->m_FileIsEmpty = false;

		//提示添加成功
		cout << "成功添加" << addNum << "名新员工" << endl;
	}
	else
	{
		cout << "输入有误" << endl;

	}
	//按任意键清屏回到上级目录
	system("pause");
	system("cls");
}

//保存文件
void WorkManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//用输出方式来打开文件（写文件）
	//将每个人数据写到文件中
	for (int i = 0; i < this->m_ElemNum; i++)
	{
		ofs << this->m_EleArr[i]->m_Id << " "
			<< this->m_EleArr[i]->m_Name << " "
			<< this->m_EleArr[i]->m_DeptId << endl;
	}
	//关闭文件
	ofs.close();
}

//统计文件中人数
int WorkManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//打开文件 读

	int id;
	string name;
	int dId;
	int num = 0;
	while (ifs >> id &&ifs >> name && ifs >> dId)
	{
		//统计人数变量
		num++;
	}
	return num;
}

//初始化员工
void WorkManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker *w = NULL;

		if (dId == 1)//普通职工
		{
			w = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			w = new Manager(id, name, dId);
		}
		else
		{
			w = new Boss(id, name, dId);
		}
		this->m_EleArr[index] = w;
		index++;
	}

	//关闭文件
	ifs.close();
}

//显示员工函数
void WorkManager::show_Emp()
{
	//判断文件是否为空
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < m_ElemNum; i++)
		{
			//利用多态调用程序接口
			this->m_EleArr[i]->showInfo();
		}
	}
	//按任意键清屏
	system("pause");
	system("cls");
}

//删除员工函数
void WorkManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		//按照职工编号删除
		cout << "请输入想要删除的职工编号" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);
		if (index != -1)//说明职工存在且要删除掉index位置的职工
		{
			//数组里删除一个数据本质就是数据前移
			for (int i = index; i < this->m_ElemNum - 1; i++)
			{
				//数据前移
				this->m_EleArr[i] = this->m_EleArr[i + 1];
			}

			
			///更新数组中记录的人员个数
			this->m_ElemNum--;
			if (this->m_ElemNum == 0)
				this->m_FileIsEmpty = true;
			//同步更新到文件中
			this->save();
			cout << "删除成功" << endl;
		}
		else
		{
			cout << "删除失败，未找到该职工" << endl;
		}
	}

	system("pause");
	system("cls");
}

//判断职工是否存在,如存在返回职工所在数组中的位置，不存在返回-1
int WorkManager::IsExist(int id)
{
	int index = -1;
	
	for (int i = 0; i < this->m_ElemNum; i++)
	{
		if (this->m_EleArr[i]->m_Id == id)
		{
			//找到职工
			index = i;
			break;
		}
	}
	return index;
}


//修改员工函数
void WorkManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空!" << endl;
	}
	else
	{
		cout << "请输入要修改的职工编号：" << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//查找到编号的职工
			delete this->m_EleArr[ret];
			int newid = 0;
			string newname = "";
			int dSelect = 0;
			cout << "查到了" << id << "号职工，请输入新职工号： " << endl;
			cin >> newid;
			cout << "请输入新姓名" << endl;
			cin >> newname;

			cout << "请输入岗位：" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;

			cin >> dSelect;
			Worker * w = NULL;
			switch (dSelect)
			{
			case 1:
				w = new Employee(newid, newname, dSelect);
				break;
			case 2:
				w = new Manager(newid, newname, dSelect);
				break;
			case 3:
				w = new Boss(newid, newname, dSelect);
				break;
			default:
				break;
			}

			//更新数据
			this->m_EleArr[ret] = w;
			cout << "修改成功" << endl;

			//保存到文件中
			this->save();
		}
		else
		{
			cout << "修改失败，未查找到该职工" << endl;
		}
	}
	system("pause");
	system("cls");
}

//查找职工
void WorkManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;
	}
	else
	{
		cout << "请输入查找的方式：" << endl;
		cout << "1.按职工编号查找" << endl;
		cout << "2.按职工姓名查找" << endl;

		int select = 0;
		cin >> select;
		if (select == 1)
		{
			//按编号查
			int id;
			cout << "请输入查找的职工编号：" << endl;
			cin >> id;
			int ret = IsExist(id);
			if (ret != -1)
			{
				//找到职工
				cout << "该职工信息如下：" << endl;
				this->m_EleArr[ret]->showInfo();
			}
			else
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
		else if (select == 2)
		{
			//按姓名查
			string name;
			cout << "请输入查找的职工姓名：" << endl;
			cin >> name;

			//加入一个判断是否查到的标志
			bool flag = false;//默认未找到职工
			for (int i = 0; i < m_ElemNum; i++)
			{
				if (this->m_EleArr[i]->m_Name == name)
				{
					cout << "查找成功，职工编号为："
						<< this->m_EleArr[i]->m_Id
						<< "号职工，信息如下" << endl;
					flag = true;
					this->m_EleArr[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
		else
		{
			cout << "输入姓名有误" << endl;
		}
	}
	//按任意键清屏
	system("pause");
	system("cls");
}


//排序函数
void WorkManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择排序方式" << endl;
		cout << "1.按职工号升序排列" << endl;
		cout << "2.按职工号降序排列" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < m_ElemNum; i++)
		{
			int MinOrMax = i;//声明最小值 或 最大值下标
			for (int j = i + 1; j < this->m_ElemNum; j++)
			{
				if (select == 1)//升序
				{
					if (this->m_EleArr[MinOrMax]->m_Id > this->m_EleArr[j]->m_Id)
					{
						MinOrMax = j;
					}
				}
				else//降序
				{
					if (this->m_EleArr[MinOrMax]->m_Id < this->m_EleArr[j]->m_Id)
					{
						MinOrMax = j;
					}
				}

				//判断一开始认定的最小值或最大值是不是计算的最小值或最大值，如果不是，交换数据
				if (i != MinOrMax)
				{
					Worker *temp = this->m_EleArr[i];
					this->m_EleArr[i] = this->m_EleArr[MinOrMax];
					this->m_EleArr[MinOrMax] = temp;
				}
			}
		}

		cout << " 排序成功，排序后的结果为："<< endl;//
		this->save();//排序后的结果保存到文件中
		this->show_Emp();//展示所有员工
	}
}

//清空文件
void WorkManager::Clean_File()
{
	cout << "确认删除？" << endl;
	cout << "1.确认" << endl;
	cout << "2.返回" << endl;

	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//清空文件
		ofstream ofs(FILENAME, ios::trunc);//删除文件后重新创建
		ofs.close();

		if (this->m_EleArr != NULL)
		{
			//删除堆区的每个职工对象
			for (int i = 0; i < m_ElemNum; i++)
			{
				delete this->m_EleArr[i];
				this->m_EleArr[i] = NULL;
			}

			//删除堆区数组指针
			delete[] this->m_EleArr;
			this->m_EleArr = NULL;
			this->m_ElemNum = 0;
			this->m_FileIsEmpty = true;
		}

		cout << "清空成功" << endl;
	}
	system("pause");
	system("cls");
}

//析构函数
WorkManager::~WorkManager()
{
	if (this->m_EleArr != NULL)
	{
		for (int i = 0; i < this->m_ElemNum; i++)
		{
			if (this->m_EleArr[i] != NULL)
			{
				delete this->m_EleArr[i];
			}
		}
		delete[] this->m_EleArr;
		this->m_EleArr = NULL;
	}
}


