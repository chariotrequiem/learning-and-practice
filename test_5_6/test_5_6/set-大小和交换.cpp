#include<iostream>
using namespace std;
#include<set>

//set���� - ��С�ͽ���

void printSet(const set<int> &s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int>s;

	//��������
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(40);

	//��ӡ����
	printSet(s);

	//�ж��Ƿ�Ϊ��
	if (s.empty())
	{
		cout << "sΪ��" << endl;
	}
	else
	{
		cout << "s��Ϊ��" << endl;
		cout << "s�Ĵ�СΪ��" << s.size() << endl;
	}
}
//����
void test02()
{
	set<int>s1;

	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int>s2;
	s2.insert(100);
	s2.insert(200);
	s2.insert(300);
	s2.insert(400);

	cout << "����ǰ" << endl;
	printSet(s1);
	printSet(s2);

	cout << "������" << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
}
int main()
{
	//test01();
	test02();
	return 0;
}