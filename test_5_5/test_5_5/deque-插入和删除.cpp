#include<iostream>
using namespace std;
#include<deque>

void printdeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//deque容器 插入和删除

//两端操作
void test01()
{
	deque<int>d1;

	//尾插
	d1.push_back(10);
	d1.push_back(20);

	//头插
	d1.push_front(100);
	d1.push_front(200);
	
	printdeque(d1);

	//尾删
	d1.pop_back();
	printdeque(d1);

	//头删
	d1.pop_front();
	printdeque(d1);
}

//指定位置操作
void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	//200 100 10 20
	printdeque(d1);

	//insert插入
	d1.insert(d1.begin(), 1000);
	printdeque(d1);

	d1.insert(d1.begin(), 2, 10000);
	//10000 10000 1000 200 100 10 20
	printdeque(d1);

	//按区间进行插入
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	d1.insert(d1.begin(), d2.begin(), d2.end());
	//1 2 3 10000 10000 1000 200 100 10 20
	printdeque(d1);
}

//删除
void test03()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	//删除
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	//200 10 20
	printdeque(d1);

	//按区间方式删除
	//d1.erase(d1.begin(), d1.end());

	//清空
	d1.clear();
	printdeque(d1);
}
int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}