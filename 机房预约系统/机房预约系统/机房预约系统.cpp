#include<iostream>
using namespace std;
#include"globalFile.h"
#include<fstream>
#include<string>
#include"identity.h"
#include"student.h"
#include"manager.h"
#include"teacher.h"


//进入管理员子菜单
void managerMenu(Identity * &manager)//用父类指针接受
{
	while (true)
	{
		//调用管理员菜单
		manager->operMenu();
		//将父类指针强转换为子类指针，调用子类里其他接口
		Manager* man = (Manager*)manager;

		int select = 0;
		cin >> select;
		
		switch (select)
		{
		case 1://添加账号
			//cout << "添加账号" << endl;
			man->AddAccount();
			break;
		case 2://查看账号 
			//cout << "查看账号 " << endl;
			man->ShowAccount();
			break;
		case 3://查看机房
			//cout << "查看机房" << endl;
			man->ShowComputer();
			break;
		case 4://清空预约
			//cout << "清空预约" << endl;
			man->ClearFile();
			break;
		case 0://注销登录
			delete manager;//销毁堆区对象
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
			break;
		default:
			cout << "输入有误，请重新选择! " << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}


//进入学生子菜单
void studentMenu(Identity * &student)
{
	while (true)
	{
		//调用学生菜单
		student->operMenu();
		//将父类指针强转换为子类指针，调用子类里其他接口
		Student* stu = (Student*)student;

		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1://申请预约
			//cout << "申请预约" << endl;
			stu->ApplyOrder();
			break;
		case 2://查看预约 
			//cout << "查看预约 " << endl;
			stu->ShowMyOrder();
			break;
		case 3://查看所有预约
			//cout << "查看所有预约" << endl;
			stu->ShowAllOrder();
			break;
		case 4://取消预约
			//cout << "取消预约" << endl;
			stu->CancelOrder();
			break;
		case 0://注销登录
			delete student;//销毁堆区对象
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
			break;
		default:
			cout << "输入有误，请重新选择! " << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}


//进入老师子菜单
void teacherMenu(Identity * &teacher)
{
	while (true)
	{
		//调用管理员菜单
		teacher->operMenu();
		//将父类指针强转换为子类指针，调用子类里其他接口
		Teacher* tea = (Teacher*)teacher;

		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1://查看所有预约
			//cout << "查看所有预约" << endl;
			tea->ShowAllOrder();
			break;
		case 2://审核预约
			//cout << "审核预约 " << endl;
			tea->ValidOrder();
			break;
		case 0://注销登录
			delete teacher;//销毁堆区对象
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
			break;
		default:
			cout << "输入有误，请重新选择! " << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}


//登录功能   参数1  操作文件名称  参数2  操作身份类型
void LoginIn(string fileName, int type)
{
	Identity * person = NULL;

	ifstream ifs;
	ifs.open(fileName, ios::in);

	//文件不存在
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	int id = 0;
	string name;
	string pwd;

	if (type == 1)//学生登录
	{
		cout << "请输入学号" << endl;
		cin >> id;
	}
	else if (type == 2)//教师登录
	{
		cout << "请输入教职工编号" << endl;
		cin >> id;
	}
	cout << "请输入用户名" << endl;
	cin >> name;
	cout << "请输入密码" << endl;
	cin >> pwd;

	if (type == 1)
	{
		//学生登录验证
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "学生验证登陆成功" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				//进入学生身份子菜单
				studentMenu(person);
				return;
			}
		}	
	}
	else if (type == 2)
	{
		//教师登录验证
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "老师验证登陆成功" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				//进入教师身份子菜单
				teacherMenu(person);
				return;
			}
		}
	}
	else if (type == 3)
	{
		//管理员登陆验证
		string fName;
		string fPwd;

		while (ifs >> fName && ifs >> fPwd)
		{
			if (fName == name && fPwd == pwd)
			{
				cout << "管理员验证登陆成功" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);
				//进入管理员身份子菜单
				managerMenu(person);
				return;
			}
		}
	}
	cout << "验证登陆失败" << endl;
	system("pause");
	system("cls");
	return;
}


int main()
{
	int select = 0;//用于接受用户的选择
	while (true)
	{
		cout << "***************************欢迎进入机房预约系统***************************" << endl;
		cout << endl;
		cout << endl << "请输入你的身份: " << endl;
		cout << "\t\t----------------------------------\n";
		cout << "\t\t|                                |\n";
		cout << "\t\t|          1.学生代表            |\n";
		cout << "\t\t|                                |\n";
		cout << "\t\t|          2.老    师            |\n";
		cout << "\t\t|                                |\n";
		cout << "\t\t|          3.管 理 员            |\n";
		cout << "\t\t|                                |\n";
		cout << "\t\t|          0.退出                |\n";
		cout << "\t\t|                                |\n";
		cout << "\t\t----------------------------------\n";
		cout << "请输入你的选择: " << endl;
		cin >> select;
		switch (select)//根据用户选择实现不同接口
		{
		case 1://学生
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2://老师
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3://管理员
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0://退出
			cout << "欢迎下次使用" << endl;
			//system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，请重新选择! " << endl;
			system("pause");
			system("cls");
			break;


		}
	}

	return 0;
}