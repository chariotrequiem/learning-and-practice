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

	ofstream ofs;//�ļ���������

	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//���ѧ���˺�
		filename = STUDENT_FILE;
		tip = "������ѧ�ţ�";
	}
	else if (select == 2)
	{
		//�����ʦ�˺�
		filename = TEACHER_FILE;
		tip = "�������ְ����ţ�";
	}

	ofs.open(filename, ios::out | ios::app);//����׷�ӷ�ʽд�ļ�

	int id;//ѧ�Ż�ְ����
	string name;
	string pwd;

	cout << tip << endl;
	cin >> id;
	cout << "������������" << endl;
	cin >> name;
	cout << "���������룺" << endl;
	cin >> pwd;

	//��ʼ���ļ����������
	ofs << id << " " << name << " " << pwd << " " << endl;
	cout << "��ӳɹ�" << endl;

	system("pause");
	system("cls");

	ofs.close();


}

//�鿴�˺�
void Manager::ShowAccount()
{

}

//�鿴����
void Manager::ShowComputer()
{

}

//���ԤԼ
void Manager::ClearFile()
{

}