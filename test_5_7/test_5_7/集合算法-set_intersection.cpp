#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>


void Myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int>vTarget;
	//目标容器需要提前开辟空间
	//最特殊情况 大容器包含小容器  开辟空间  取小容器的size即可
	vTarget.resize(min(v1.size(), v2.size()));

	//获取交集
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());


	for_each(vTarget.begin(), itEnd, Myprint);
	//for_each(vTarget.begin(), vTarget.end(), Myprint);
	//若参数2为vTarget.end()，则jieguowei5 6 7 8 9 0 0 0 0 
	cout << endl;

}
int main()
{
	test01();
	return 0;
}