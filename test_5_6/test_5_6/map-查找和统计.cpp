#include<iostream>
using namespace std;
#include<map>

//map-查找和统计
void test01()
{
	//查找
	map<int, int>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));

	map<int,int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "查找到了 key = " << pos->first << "\tvalue = " << pos->second << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
	//统计
	//map不允许插入重复key，count统计而言结果要么是0要么是1
	//multimap的count统计可能大于1
	int num = m.count(3);
	cout << "num = " << num << endl;
}
int main()
{
	test01();
	return 0;
}