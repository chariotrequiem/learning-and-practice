#include<iostream>
using namespace std;
#include<set>

//set容器 - 大小和交换

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

	//插入数据
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(40);

	//打印容器
	printSet(s);

	//判断是否为空
	if (s.empty())
	{
		cout << "s为空" << endl;
	}
	else
	{
		cout << "s不为空" << endl;
		cout << "s的大小为：" << s.size() << endl;
	}
}
//交换
void test02()
{
	set<int>s1;

	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int>s2;
	s2.insert(100);
	s2.insert(200);
	s2.insert(300);
	s2.insert(400);

	cout << "交换前" << endl;
	printSet(s1);
	printSet(s2);

	cout << "交换后" << endl;
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