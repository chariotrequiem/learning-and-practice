#include"student.h"



//默认构造
Student::Student()
{

}

//有参构造
Student::Student(int id, string name, string pwd)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;
}

//菜单界面
void Student::operMenu()
{
	cout << "欢迎登录";
	cout << "1.申请预约";
	cout << "2.查看自身预约";
	cout << "3.查看所有预约";
	cout << "4.取消预约";
	cout << "0.注销";
}

//申请预约
void Student::ApplyOrder()
{

}

//查看自身预约
void Student::ShowMyOrder()
{

}

//查看所有预约
void Student::ShowAllOrder()
{

}

//取消预约
void Student::CancelOrder()
{

}

//注销登录
void Student::Exit()
{

}