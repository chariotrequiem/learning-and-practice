#include"student.h"



//Ĭ�Ϲ���
Student::Student()
{

}

//�вι���
Student::Student(int id, string name, string pwd)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;
}

//�˵�����
void Student::operMenu()
{
	cout << "��ӭ��¼";
	cout << "1.����ԤԼ";
	cout << "2.�鿴����ԤԼ";
	cout << "3.�鿴����ԤԼ";
	cout << "4.ȡ��ԤԼ";
	cout << "0.ע��";
}

//����ԤԼ
void Student::ApplyOrder()
{

}

//�鿴����ԤԼ
void Student::ShowMyOrder()
{

}

//�鿴����ԤԼ
void Student::ShowAllOrder()
{

}

//ȡ��ԤԼ
void Student::CancelOrder()
{

}

//ע����¼
void Student::Exit()
{

}