#include"manager.h"


//默认构造
Manager::Manager()
{

}

//有参构造
Manager::Manager(string name, string pwd)
{
	//初始化管理员信息
	this->m_Name = name;
	this->m_Pwd = pwd;

	//初始化容器
	this->initVector();

	//初始化机房容器
	this->initVC();
}

//选择菜单(重写父类中纯虚函数)
void Manager::operMenu()
{
	cout << "欢迎管理员"<<this->m_Name<<"进入管理员菜单!" << endl;
	cout << "————————————" << endl;
	cout << "|      1.添加账号      |" << endl;
	cout << "|      2.查看账号      |" << endl;
	cout << "|      3.查看机房      |" << endl;
	cout << "|      4.清空预约      |" << endl;
	cout << "|      0.注销登录      |" << endl;
	cout << "————————————" << endl;
	cout << endl << "请输入你的选择：" << endl;

}

//添加账号
void Manager::AddAccount()
{
	cout << "请输入要添加的账号类型" << endl;
	cout << "1.添加学生" << endl;
	cout << "2.添加老师" << endl;

	string filename;//操作文件名
	string tip;//提示ID号
	string errorTip;//重复错误提示

	ofstream ofs;//文件操作对象

	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//添加学生账号
		filename = STUDENT_FILE;
		tip = "请输入学号：";
		errorTip = "学号重复，请重新输入";
	}
	else if (select == 2)
	{
		//添加老师账号
		filename = TEACHER_FILE;
		tip = "请输入教职工编号：";
		errorTip = "职工编号重复，请重新输入";
	}

	ofs.open(filename, ios::out | ios::app);//利用追加方式写文件

	int id;//学号或职工号
	string name;
	string pwd;

	cout << tip << endl;
	while (true)
	{
		cin >> id;
		bool ret = checkRepeat(id, select);
		if (ret)//有重复
		{
			cout << errorTip << endl;
		}
		else
		{
			break;
		}
	}



	cout << "请输入姓名：" << endl;
	cin >> name;
	cout << "请输入密码：" << endl;
	cin >> pwd;

	//开始向文件中添加数据
	ofs << id << " " << name << " " << pwd << " " << endl;
	cout << "添加成功" << endl;


	this->initVector();

	system("pause");
	system("cls");

	ofs.close();


}


//初始化容器
void Manager::initVector()
{
	//读取学生文件中信息
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件读取失败" << endl;
		return;
	}

	vStu.clear();
	vTea.clear();

	Student s;
	while (ifs >> s.m_Id && ifs >> s.m_Name && ifs >> s.m_Pwd)
	{
		vStu.push_back(s);
	}
	//cout << "当前学生数量为：" << vStu.size() << endl;
	ifs.close();//学生初始化

	//读取老师文件信息
	ifs.open(TEACHER_FILE, ios::in);
	
	Teacher t;
	while (ifs >> t.m_EmpId && ifs >> t.m_Name && ifs >> t.m_Pwd)
	{
		vTea.push_back(t);
	}
	//cout << "当前教师数量为：" << vTea.size() << endl;
	ifs.close();//老师初始化

}


////查看学生账号
//void showStu(vector<Student>&v)
//{
//	cout << "当前学生数量为：" << v.size() << endl;
//	for(vector<Student>::iterator it = v.begin(); it !=v.end(); it++)
//	{
//		cout << "学号：" << it->m_Id 
//			 << "\t姓名：" << it->m_Name 
//			 << "\t密码" << it->m_Pwd << endl;
//	}
//}
////查看老师账号
//void showStu(vector<Teacher>&v)
//{
//	for (vector<Teacher>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "教职工编号：" << it->m_EmpId
//			<< "\t姓名：" << it->m_Name
//			<< "\t密码" << it->m_Pwd << endl;
//	}
//}

void printStudent(Student &s)
{
	cout << "学号：" << s.m_Id << "\t姓名：" << s.m_Name << "\t密码: " << s.m_Pwd << endl;
}

void printTeacher(Teacher &t)
{
	cout << "职工号：" << t.m_EmpId << "\t姓名：" << t.m_Name << "\t密码: " << t.m_Pwd << endl;
}

//查看账号
void Manager::ShowAccount()
{

	cout << "请选择要查看的账号类型" << endl;
	cout << "1.学生" << endl;
	cout << "2.老师" << endl;
	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//查看学生账号
		cout << "当前系统中共有学生" << vStu.size() << "人,信息如下：" << endl;
		for_each(vStu.begin(), vStu.end(), printStudent);
	}
	else if (select == 2)
	{
		//查看老师账号
		cout << "当前系统中共有老师" << vTea.size() << "人,信息如下：" << endl;
		for_each(vTea.begin(), vTea.end(), printTeacher);
	}
	else
	{
		cout << "输入错误，请重新输入" << endl;
		system("pause");
		system("cls");
		return;
	}
	system("pause");
	system("cls");
}


//清空预约
void Manager::ClearFile()
{
	int select = 0;
	cout << "是否清空预约" << endl;
	cout << "1.是" << endl;
	cout << "2.否" << endl;
	cin >> select;
	if (select == 1)
	{
		//
		ofstream ofs(ORDER_FILE, ios::trunc);
		ofs.close();
		cout << "预约已清空" << endl;
	}
	else if (select == 2)
	{

		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "输入错误，请重新输入" << endl;
		system("pause");
		system("cls");
		return;
	}
	system("pause");
	system("cls");
}


//检测重复  参数1  检测学号/职工号  参数2  检测类型
bool  Manager::checkRepeat(int id, int type)
{
	if (type == 1)
	{
		//检测学生
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++)
		{
			if (id == it->m_Id)
			{
				return true;
			}
		}
	}
	else
	{
		//检测老师
		for (vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++)
		{
			if (id == it->m_EmpId)
			{
				return true;
			}
		}
	}
	return false;
}


//初始化机房容器
void Manager::initVC()
{
	//读取机房文件中信息
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件读取失败" << endl;
		return;
	}

	vc.clear();

	ComputerRoom c;
	while (ifs >> c.m_Id && ifs >> c.m_MaxNum && ifs )
	{
		vc.push_back(c);
	}
	ifs.close();
	//cout << "机房数量为：" << vc.size() << endl;
}


//查看机房
void Manager::ShowComputer()
{
	cout << "机房信息如下：" << endl;
	for (vector<ComputerRoom>::iterator it = vc.begin(); it != vc.end(); it++)
	{
		cout << "机房编号：" << it->m_Id 
			 << "\t最大容量：" << it->m_MaxNum << endl;
	}
	system("pause");
	system("cls");
}