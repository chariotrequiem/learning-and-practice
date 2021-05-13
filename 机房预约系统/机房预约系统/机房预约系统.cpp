#include<iostream>
using namespace std;
#include"globalFile.h"
#include<fstream>
#include<string>
#include"identity.h"
#include"student.h"
#include"manager.h"
#include"teacher.h"


//�������Ա�Ӳ˵�
void managerMenu(Identity * &manager)//�ø���ָ�����
{
	while (true)
	{
		//���ù���Ա�˵�
		manager->operMenu();
		//������ָ��ǿת��Ϊ����ָ�룬���������������ӿ�
		Manager* man = (Manager*)manager;

		int select = 0;
		cin >> select;
		
		switch (select)
		{
		case 1://����˺�
			//cout << "����˺�" << endl;
			man->AddAccount();
			break;
		case 2://�鿴�˺� 
			//cout << "�鿴�˺� " << endl;
			man->ShowAccount();
			break;
		case 3://�鿴����
			//cout << "�鿴����" << endl;
			man->ShowComputer();
			break;
		case 4://���ԤԼ
			//cout << "���ԤԼ" << endl;
			man->ClearFile();
			break;
		case 0://ע����¼
			delete manager;//���ٶ�������
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
			break;
		default:
			cout << "��������������ѡ��! " << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}


//����ѧ���Ӳ˵�
void studentMenu(Identity * &student)
{
	while (true)
	{
		//����ѧ���˵�
		student->operMenu();
		//������ָ��ǿת��Ϊ����ָ�룬���������������ӿ�
		Student* stu = (Student*)student;

		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1://����ԤԼ
			//cout << "����ԤԼ" << endl;
			stu->ApplyOrder();
			break;
		case 2://�鿴ԤԼ 
			//cout << "�鿴ԤԼ " << endl;
			stu->ShowMyOrder();
			break;
		case 3://�鿴����ԤԼ
			//cout << "�鿴����ԤԼ" << endl;
			stu->ShowAllOrder();
			break;
		case 4://ȡ��ԤԼ
			//cout << "ȡ��ԤԼ" << endl;
			stu->CancelOrder();
			break;
		case 0://ע����¼
			delete student;//���ٶ�������
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
			break;
		default:
			cout << "��������������ѡ��! " << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}


//������ʦ�Ӳ˵�
void teacherMenu(Identity * &teacher)
{
	while (true)
	{
		//���ù���Ա�˵�
		teacher->operMenu();
		//������ָ��ǿת��Ϊ����ָ�룬���������������ӿ�
		Teacher* tea = (Teacher*)teacher;

		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1://�鿴����ԤԼ
			//cout << "�鿴����ԤԼ" << endl;
			tea->ShowAllOrder();
			break;
		case 2://���ԤԼ
			//cout << "���ԤԼ " << endl;
			tea->ValidOrder();
			break;
		case 0://ע����¼
			delete teacher;//���ٶ�������
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
			break;
		default:
			cout << "��������������ѡ��! " << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}


//��¼����   ����1  �����ļ�����  ����2  �����������
void LoginIn(string fileName, int type)
{
	Identity * person = NULL;

	ifstream ifs;
	ifs.open(fileName, ios::in);

	//�ļ�������
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	int id = 0;
	string name;
	string pwd;

	if (type == 1)//ѧ����¼
	{
		cout << "������ѧ��" << endl;
		cin >> id;
	}
	else if (type == 2)//��ʦ��¼
	{
		cout << "�������ְ�����" << endl;
		cin >> id;
	}
	cout << "�������û���" << endl;
	cin >> name;
	cout << "����������" << endl;
	cin >> pwd;

	if (type == 1)
	{
		//ѧ����¼��֤
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "ѧ����֤��½�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				//����ѧ������Ӳ˵�
				studentMenu(person);
				return;
			}
		}	
	}
	else if (type == 2)
	{
		//��ʦ��¼��֤
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "��ʦ��֤��½�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				//�����ʦ����Ӳ˵�
				teacherMenu(person);
				return;
			}
		}
	}
	else if (type == 3)
	{
		//����Ա��½��֤
		string fName;
		string fPwd;

		while (ifs >> fName && ifs >> fPwd)
		{
			if (fName == name && fPwd == pwd)
			{
				cout << "����Ա��֤��½�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);
				//�������Ա����Ӳ˵�
				managerMenu(person);
				return;
			}
		}
	}
	cout << "��֤��½ʧ��" << endl;
	system("pause");
	system("cls");
	return;
}


int main()
{
	int select = 0;//���ڽ����û���ѡ��
	while (true)
	{
		cout << "***************************��ӭ�������ԤԼϵͳ***************************" << endl;
		cout << endl;
		cout << endl << "������������: " << endl;
		cout << "\t\t----------------------------------\n";
		cout << "\t\t|                                |\n";
		cout << "\t\t|          1.ѧ������            |\n";
		cout << "\t\t|                                |\n";
		cout << "\t\t|          2.��    ʦ            |\n";
		cout << "\t\t|                                |\n";
		cout << "\t\t|          3.�� �� Ա            |\n";
		cout << "\t\t|                                |\n";
		cout << "\t\t|          0.�˳�                |\n";
		cout << "\t\t|                                |\n";
		cout << "\t\t----------------------------------\n";
		cout << "���������ѡ��: " << endl;
		cin >> select;
		switch (select)//�����û�ѡ��ʵ�ֲ�ͬ�ӿ�
		{
		case 1://ѧ��
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2://��ʦ
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3://����Ա
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0://�˳�
			cout << "��ӭ�´�ʹ��" << endl;
			//system("pause");
			return 0;
			break;
		default:
			cout << "��������������ѡ��! " << endl;
			system("pause");
			system("cls");
			break;


		}
	}

	return 0;
}