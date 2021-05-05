#include<iostream>
using namespace std;
#include<vector>

void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//vector容器的容量和大小
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty())  //为真 代表容器为空
	{
		cout << "v1 为空" << endl;
	}
	else
	{
		cout<< "v1 不为空" << endl;
		cout << "v1 的容量为：" << v1.capacity() << endl;
		cout << "v1的大小为：" << v1.size() << endl;
	}

	//重新制定大小
	//v1.resize(15);//如果重新指定的比原来长了，默认用0填充新的位置
	//printVector(v1);
	v1.resize(15, 100);//利用重载版本，可以指定值（参数2）填充
	printVector(v1);

	v1.resize(5);//如果重新制定比原来短，超出部分会删除掉
	printVector(v1);
}
int main()
{
	test01();
	return 0;
}