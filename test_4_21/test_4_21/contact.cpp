#include"contact.h"
//�˵����溯��
void Menu()
{
	cout << "*******************************" << endl;
	cout << "********    ͨѶ¼     ********" << endl;
	cout << "******** 1�������ϵ�� ********" << endl;
	cout << "******** 2����ʾ��ϵ�� ********" << endl;
	cout << "******** 3��ɾ����ϵ�� ********" << endl;
	cout << "******** 4��������ϵ�� ********" << endl;
	cout << "******** 5���޸���ϵ�� ********" << endl;
	cout << "******** 6�������ϵ�� ********" << endl;
	cout << "******** 0���˳�ͨѶ¼ ********" << endl;
	cout << "*******************************" << endl;
}
//�����ϵ�˺���
void Addcontact(struct contact * ps)
{
	if (ps->m_size == MAX)
	{
		cout << "ͨѶ¼����,�޷����" << endl;
		return;
	}
	else
	{
		FLAG:
		cout << "��������ϵ��������" << endl;
		cin >> ps->p[ps->m_size].m_Name;
		cout << "��������ϵ���Ա�" << endl;
		cin >> ps->p[ps->m_size].m_Sex;		
		cout << "��������ϵ�����䣺" << endl;
		cin >> ps->p[ps->m_size].m_Age;
		cout << "��������ϵ�˵绰��" << endl;
		cin >> ps->p[ps->m_size].m_Tele;
		cout << "��������ϵ��סַ��" << endl;
		cin >> ps->p[ps->m_size].m_Address;
		//����ͨѶ¼����
		ps->m_size++;
		cout << "��ӳɹ�" << endl;
		cout << "�Ƿ������ӣ�" << endl<<"1 - ��" <<endl<< "0 - ��" << endl;
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
//��ʾ��ϵ�˺���
void Showcontact(struct contact * ps)
{
	if (ps->m_size == 0)
	{
		cout << "ͨѶ¼������ϵ��" << endl;
	}
	else
	{
		cout << "����" << "\t" << "�Ա�" << "\t" << "����" << "\t" << "�绰" << "\t\t" << "סַ" << "\t" << endl;
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
//�����ϵ���Ƿ����
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
//ɾ����ϵ�˺���
void Delcontact(struct contact * ps)
{
	string name;
	cout << "��������ϵ������" << endl;
	cin >> name;
	int ret = isExist(ps, name);
	if (ret == -1)
	{
		cout << "�����ڸ���ϵ��" << endl;
	}
	else
	{
		for (int j = ret; j < ps->m_size - 1; j++)
		{
			ps->p[j] = ps->p[j + 1];
		}
		ps->m_size--;
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");
	system("cls");
}
//������ϵ�˺���
void Searchcontact(struct contact * ps)
{
	string name;
	cout << "��������ϵ������" << endl;
	cin >> name;
	int ret = isExist(ps, name);
	if (ret != -1)
	{
		cout << "����" << "\t" << "�Ա�" << "\t" << "����" << "\t" << "�绰" << "\t\t" << "סַ" << "\t" << endl;
		cout << ps->p[ret].m_Name << "\t"
			<< ps->p[ret].m_Sex << "\t"
			<< ps->p[ret].m_Age << "\t"
			<< ps->p[ret].m_Tele << "\t"
			<< ps->p[ret].m_Address << "\t" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//�޸���ϵ�˺���
void modifycontact(struct contact * ps)
{
	cout << "����Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(ps, name);
	if (ret == -1)
	{
		cout << "�����ڸ���ϵ��" << endl;
	}
	else
	{
		cout << "��������ϵ��������" << endl;
		cin >> ps->p[ret].m_Name;
		cout << "��������ϵ���Ա�" << endl;
		cin >> ps->p[ret].m_Sex;
		cout << "��������ϵ�����䣺" << endl;
		cin >> ps->p[ret].m_Age;
		cout << "��������ϵ�˵绰��" << endl;
		cin >> ps->p[ret].m_Tele;
		cout << "��������ϵ��סַ��" << endl;
		cin >> ps->p[ret].m_Address;
	}
	system("pause");
	system("cls");
}
//�����ϵ�˺���
void destorycontact(struct contact * ps)
{
	int i = 0;
	cout<<"�Ƿ�ȷ�������ϵ��"<< endl << "1 - ��" << endl << "0 - ��" << endl;
	cin >> i;
	if (i == 0)
	{
		system("cls");
	}
	else
	{
		ps->m_size = 0;//����ǰ��¼��ϵ��������Ϊ0�����߼���ղ���
		cout << "ͨѶ¼�����" << endl;
		system("pause");
		system("cls");
	}
}

//��ϵ��������
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