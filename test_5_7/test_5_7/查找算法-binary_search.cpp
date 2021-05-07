#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>


//查找算法 - binary_search
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找容器中是否有 5 
	//容器必须是有序序列，如果是无序序列，结果未知
	bool ret = binary_search(v.begin(), v.end(), 5);
	if (ret)
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "找不到" << endl;
	}
}
int main()
{
	test01();
	return 0;
}