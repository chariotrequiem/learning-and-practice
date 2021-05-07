#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<functional>

//常用排序算法
void Myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//利用sort进行升序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;

	//改编为降序
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;
}
int main()
{
	test01();
	return 0;
}