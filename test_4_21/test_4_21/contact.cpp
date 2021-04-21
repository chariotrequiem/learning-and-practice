#include"contact.h"
//菜单界面函数
void Menu()
{
	cout << "*******************************" << endl;
	cout << "********    通讯录     ********" << endl;
	cout << "******** 1、添加联系人 ********" << endl;
	cout << "******** 2、显示联系人 ********" << endl;
	cout << "******** 3、删除联系人 ********" << endl;
	cout << "******** 4、查找联系人 ********" << endl;
	cout << "******** 5、修改联系人 ********" << endl;
	cout << "******** 6、清空联系人 ********" << endl;
	cout << "******** 0、退出通讯录 ********" << endl;
	cout << "*******************************" << endl;
}
//添加联系人函数
void Addcontact(struct contact * ps)
{
	if (ps->m_size == MAX)
	{
		cout << "通讯录已满,无法添加" << endl;
		return;
	}
	else
	{
		FLAG:
		cout << "请输入联系人姓名：" << endl;
		cin >> ps->p[ps->m_size].m_Name;
		cout << "请输入联系人性别：" << endl;
		cin >> ps->p[ps->m_size].m_Sex;		
		cout << "请输入联系人年龄：" << endl;
		cin >> ps->p[ps->m_size].m_Age;
		cout << "请输入联系人电话：" << endl;
		cin >> ps->p[ps->m_size].m_Tele;
		cout << "请输入联系人住址：" << endl;
		cin >> ps->p[ps->m_size].m_Address;
		//更新通讯录人数
		ps->m_size++;
		cout << "添加成功" << endl;
		cout << "是否继续添加？" << endl<<"1 - 是" <<endl<< "0 - 否" << endl;
		int i = 0;
		cin >> i;
		if (i == 1)
		{
			goto FLAG;
		}
		else
		{
			system("pause");
			system("cls");
		}
	}
}
//显示联系人函数
void Showcontact(struct contact * ps)
{
	if (ps->m_size == 0)
	{
		cout << "通讯录内无联系人" << endl;
	}
	else
	{
		cout << "姓名" << "\t" << "性别" << "\t" << "年龄" << "\t" << "电话" << "\t\t" << "住址" << "\t" << endl;
		for (int i = 0; i < ps->m_size; i++)
		{
			cout << ps->p[i].m_Name << "\t"
				<< ps->p[i].m_Sex << "\t"
				<< ps->p[i].m_Age << "\t"
				<< ps->p[i].m_Tele << "\t"
				<< ps->p[i].m_Address << "\t" << endl;
		}
	}
	system("pause");
	system("cls");
}
//检测联系人是否存在
int isExist(const contact* ps, string name)
{
	for (int i = 0; i< ps->m_size;i++)
	{
		if (ps->p[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}
//删除联系人函数
void Delcontact(struct contact * ps)
{
	string name;
	cout << "请输入联系人姓名" << endl;
	cin >> name;
	int ret = isExist(ps, name);
	if (ret == -1)
	{
		cout << "不存在该联系人" << endl;
	}
	else
	{
		for (int j = ret; j < ps->m_size - 1; j++)
		{
			ps->p[j] = ps->p[j + 1];
		}
		ps->m_size--;
		cout << "删除成功" << endl;
	}
	system("pause");
	system("cls");
}
//查找联系人函数
void Searchcontact(struct contact * ps)
{
	string name;
	cout << "请输入联系人姓名" << endl;
	cin >> name;
	int ret = isExist(ps, name);
	if (ret != -1)
	{
		cout << "姓名" << "\t" << "性别" << "\t" << "年龄" << "\t" << "电话" << "\t\t" << "住址" << "\t" << endl;
		cout << ps->p[ret].m_Name << "\t"
			<< ps->p[ret].m_Sex << "\t"
			<< ps->p[ret].m_Age << "\t"
			<< ps->p[ret].m_Tele << "\t"
			<< ps->p[ret].m_Address << "\t" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//修改联系人函数
void modifycontact(struct contact * ps)
{
	cout << "输入要修改的联系人" << endl;
	string name;
	cin >> name;
	int ret = isExist(ps, name);
	if (ret == -1)
	{
		cout << "不存在该联系人" << endl;
	}
	else
	{
		cout << "请输入联系人姓名：" << endl;
		cin >> ps->p[ret].m_Name;
		cout << "请输入联系人性别：" << endl;
		cin >> ps->p[ret].m_Sex;
		cout << "请输入联系人年龄：" << endl;
		cin >> ps->p[ret].m_Age;
		cout << "请输入联系人电话：" << endl;
		cin >> ps->p[ret].m_Tele;
		cout << "请输入联系人住址：" << endl;
		cin >> ps->p[ret].m_Address;
	}
	system("pause");
	system("cls");
}
//清空联系人函数
void destorycontact(struct contact * ps)
{
	int i = 0;
	cout<<"是否确认清空联系人"<< endl << "1 - 是" << endl << "0 - 否" << endl;
	cin >> i;
	if (i == 0)
	{
		system("cls");
	}
	else
	{
		ps->m_size = 0;//将当前记录联系人数量置为0，做逻辑清空操作
		cout << "通讯录已清空" << endl;
		system("pause");
		system("cls");
	}
}

//联系人排序函数
void Bubble_contact(struct contact *ps,int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (ps->p[j].m_Name > ps->p[j + 1].m_Name)
			{
				struct People temp = ps->p[j];
				ps->p[j] = ps->p[j + 1];
				ps->p[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}