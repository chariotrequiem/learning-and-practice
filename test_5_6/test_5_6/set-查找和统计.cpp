#include<iostream>
using namespace std;
#include<set>

//set - 查找和统计
void test01()
{
	set<int>s;
	//插入
	s.insert(10);
	s.insert(30);
	s.insert(20); 
	s.insert(40);

	//查找
	set<int>::iterator pos = s.find(40);
	if (pos != s.end())
	{
		cout << "找到元素：" << *pos << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
}

void test02()
{
	//查找
	set<int>s1;

	//插入数据
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	//统计30的个数
	int num = s1.count(30);
	//对于set而言，统计的结果要么是0，要么是1（set不允许查重复数）
	cout << "num = " << num << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}