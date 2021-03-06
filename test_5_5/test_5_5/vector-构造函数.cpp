#include<iostream>
using namespace std;
#include<vector>

void PrintVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//vector容器构造
void test01()
{
	vector<int>v1;//默认构造  无参构造

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	PrintVector(v1);

	//通过区间方式进行构造
	vector<int>v2(v1.begin(), v1.end());
	PrintVector(v2);

	//n个elem方式构造
	vector<int>v3(10, 100);
	PrintVector(v3);

	//拷贝构造
	vector<int>v4(v3);
	PrintVector(v4);
}
int main()
{
	test01();
	return 0;
}