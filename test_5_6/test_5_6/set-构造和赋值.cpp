#include<iostream>
using namespace std;
#include<set>

//set�����Ĺ���͸�ֵ
void printSet(const set<int>&s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int>s1;

	//��������ʱ��ֻ��insert��ʽ
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);

	//��������
	//set�����ص㣺����Ԫ���ڲ���ʱ�Զ�������
	//set��������������ظ�ֵ
	printSet(s1);

	//��������
	set<int>s2(s1);
	printSet(s1);

	//��ֵ
	set<int>s3;
	s3 = s2;
	printSet(s1);
}
int main()
{
	test01();
	return 0;
}