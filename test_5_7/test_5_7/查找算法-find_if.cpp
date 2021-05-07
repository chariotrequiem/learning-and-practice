#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<string>

//查找算法 - find_if

//1.内置数据类型
class GresterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GresterFive());
	if (it == v.end())
	{
		cout << "没找到" << endl;
	}
	else
	{
		cout << "找到了：" << *it << endl;
	}
}

//2.查找自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;
};

class Greater20
{
public:
	bool operator()(Person &p)
	{
		return p.m_Age > 20;
	}
};
void test02()
{
	vector<Person>v;

	//创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//找年龄大于20的人
	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());

	if (it == v.end())
	{
		cout << "没找到" << endl;
	}
	else
	{
		cout << "找到了" << it->m_Name << " " << it->m_Age << endl;
	}
}
int main()
{
	//test01();
	test02();
	return 0;
}