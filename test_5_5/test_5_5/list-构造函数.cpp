#include<iostream>
using namespace std;
#include<list>


//list容器构造函数
void printlist(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	list<int>LI;

	//添加数据
	LI.push_back(10);
	LI.push_back(20);
	LI.push_back(30);
	LI.push_back(40);

	//遍历容器
	printlist(LI);

	//区间方式构造
	list<int>L2(LI.begin(), LI.end());
	printlist(L2);

	//拷贝构造
	list<int>L3(L2);
	printlist(L3);

	//n个elem
	list<int>L4(10, 1000);
	printlist(L4);

}
int main()
{
	test01();
	return 0;
}
