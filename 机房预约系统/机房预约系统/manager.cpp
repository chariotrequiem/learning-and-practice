#include"manager.h"


//Ĭ�Ϲ���
Manager::Manager()
{

}

//�вι���
Manager::Manager(string name, string pwd)
{
	//��ʼ������Ա��Ϣ
	this->m_Name = name;
	this->m_Pwd = pwd;

	//��ʼ������
	this->initVector();

	//��ʼ����������
	this->initVC();
}

//ѡ��˵�(��д�����д��麯��)
void Manager::operMenu()
{
	cout << "��ӭ����Ա"<<this->m_Name<<"�������Ա�˵�!" << endl;
	cout << "������������������������" << endl;
	cout << "|      1.����˺�      |" << endl;
	cout << "|      2.�鿴�˺�      |" << endl;
	cout << "|      3.�鿴����      |" << endl;
	cout << "|      4.���ԤԼ      |" << endl;
	cout << "|      0.ע����¼      |" << endl;
	cout << "������������������������" << endl;
	cout << endl << "���������ѡ��" << endl;

}

//����˺�
void Manager::AddAccount()
{
	cout << "������Ҫ��ӵ��˺�����" << endl;
	cout << "1.���ѧ��" << endl;
	cout << "2.�����ʦ" << endl;

	string filename;//�����ļ���
	string tip;//��ʾID��
	string errorTip;//�ظ�������ʾ

	ofstream ofs;//�ļ���������

	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//���ѧ���˺�
		filename = STUDENT_FILE;
		tip = "������ѧ�ţ�";
		errorTip = "ѧ���ظ�������������";
	}
	else if (select == 2)
	{
		//�����ʦ�˺�
		filename = TEACHER_FILE;
		tip = "�������ְ����ţ�";
		errorTip = "ְ������ظ�������������";
	}

	ofs.open(filename, ios::out | ios::app);//����׷�ӷ�ʽд�ļ�

	int id;//ѧ�Ż�ְ����
	string name;
	string pwd;

	cout << tip << endl;
	while (true)
	{
		cin >> id;
		bool ret = checkRepeat(id, select);
		if (ret)//���ظ�
		{
			cout << errorTip << endl;
		}
		else
		{
			break;
		}
	}



	cout << "������������" << endl;
	cin >> name;
	cout << "���������룺" << endl;
	cin >> pwd;

	//��ʼ���ļ����������
	ofs << id << " " << name << " " << pwd << " " << endl;
	cout << "��ӳɹ�" << endl;


	this->initVector();

	system("pause");
	system("cls");

	ofs.close();


}


//��ʼ������
void Manager::initVector()
{
	//��ȡѧ���ļ�����Ϣ
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ȡʧ��" << endl;
		return;
	}

	vStu.clear();
	vTea.clear();

	Student s;
	while (ifs >> s.m_Id && ifs >> s.m_Name && ifs >> s.m_Pwd)
	{
		vStu.push_back(s);
	}
	//cout << "��ǰѧ������Ϊ��" << vStu.size() << endl;
	ifs.close();//ѧ����ʼ��

	//��ȡ��ʦ�ļ���Ϣ
	ifs.open(TEACHER_FILE, ios::in);
	
	Teacher t;
	while (ifs >> t.m_EmpId && ifs >> t.m_Name && ifs >> t.m_Pwd)
	{
		vTea.push_back(t);
	}
	//cout << "��ǰ��ʦ����Ϊ��" << vTea.size() << endl;
	ifs.close();//��ʦ��ʼ��

}


////�鿴ѧ���˺�
//void showStu(vector<Student>&v)
//{
//	cout << "��ǰѧ������Ϊ��" << v.size() << endl;
//	for(vector<Student>::iterator it = v.begin(); it !=v.end(); it++)
//	{
//		cout << "ѧ�ţ�" << it->m_Id 
//			 << "\t������" << it->m_Name 
//			 << "\t����" << it->m_Pwd << endl;
//	}
//}
////�鿴��ʦ�˺�
//void showStu(vector<Teacher>&v)
//{
//	for (vector<Teacher>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "��ְ����ţ�" << it->m_EmpId
//			<< "\t������" << it->m_Name
//			<< "\t����" << it->m_Pwd << endl;
//	}
//}

void printStudent(Student &s)
{
	cout << "ѧ�ţ�" << s.m_Id << "\t������" << s.m_Name << "\t����: " << s.m_Pwd << endl;
}

void printTeacher(Teacher &t)
{
	cout << "ְ���ţ�" << t.m_EmpId << "\t������" << t.m_Name << "\t����: " << t.m_Pwd << endl;
}

//�鿴�˺�
void Manager::ShowAccount()
{

	cout << "��ѡ��Ҫ�鿴���˺�����" << endl;
	cout << "1.ѧ��" << endl;
	cout << "2.��ʦ" << endl;
	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//�鿴ѧ���˺�
		cout << "��ǰϵͳ�й���ѧ��" << vStu.size() << "��,��Ϣ���£�" << endl;
		for_each(vStu.begin(), vStu.end(), printStudent);
	}
	else if (select == 2)
	{
		//�鿴��ʦ�˺�
		cout << "��ǰϵͳ�й�����ʦ" << vTea.size() << "��,��Ϣ���£�" << endl;
		for_each(vTea.begin(), vTea.end(), printTeacher);
	}
	else
	{
		cout << "�����������������" << endl;
		system("pause");
		system("cls");
		return;
	}
	system("pause");
	system("cls");
}


//���ԤԼ
void Manager::ClearFile()
{
	int select = 0;
	cout << "�Ƿ����ԤԼ" << endl;
	cout << "1.��" << endl;
	cout << "2.��" << endl;
	cin >> select;
	if (select == 1)
	{
		//
		ofstream ofs(ORDER_FILE, ios::trunc);
		ofs.close();
		cout << "ԤԼ�����" << endl;
	}
	else if (select == 2)
	{

		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "�����������������" << endl;
		system("pause");
		system("cls");
		return;
	}
	system("pause");
	system("cls");
}


//����ظ�  ����1  ���ѧ��/ְ����  ����2  �������
bool  Manager::checkRepeat(int id, int type)
{
	if (type == 1)
	{
		//���ѧ��
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
		//�����ʦ
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


//��ʼ����������
void Manager::initVC()
{
	//��ȡ�����ļ�����Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ȡʧ��" << endl;
		return;
	}

	vc.clear();

	ComputerRoom c;
	while (ifs >> c.m_Id && ifs >> c.m_MaxNum && ifs )
	{
		vc.push_back(c);
	}
	ifs.close();
	//cout << "��������Ϊ��" << vc.size() << endl;
}


//�鿴����
void Manager::ShowComputer()
{
	cout << "������Ϣ���£�" << endl;
	for (vector<ComputerRoom>::iterator it = vc.begin(); it != vc.end(); it++)
	{
		cout << "������ţ�" << it->m_Id 
			 << "\t���������" << it->m_MaxNum << endl;
	}
	system("pause");
	system("cls");
}