#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

//���ò����㷨
//find

//���� ������������
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//�����������Ƿ��� 5 ���Ԫ��
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "û���ҵ���" << endl;
	}
	else
	{
		cout << "�ҵ���" << endl;
	}
}

//����  �Զ�����������
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	//����== �õײ�find֪����ζԱ�Person��������
	bool operator==(const Person &p)
	{
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_Name;
	int m_Age;
};
void test02()
{
	vector<Person>v;
	//��������
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	//�ŵ�������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person pp("bbb", 20);

	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
	if (it == v.end())
	{
		cout << "û���ҵ���" << endl;
	}
	else
	{
		cout << "�ҵ���" << endl;
		cout << "������" << it->m_Name << "���䣺" << it->m_Age << endl;
	}
}

int main()
{
	//test01();
	test02();
	return 0;
}