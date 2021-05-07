#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

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
		v2.push_back(i + 100);
	}

	cout << "交换前：" << endl;
	for_each(v1.begin(), v1.end(), Myprint);
	cout << endl;
	for_each(v2.begin(), v2.end(), Myprint);
	cout << endl;

	swap(v1, v2);
	cout << "交换后：" << endl;
	for_each(v1.begin(), v1.end(), Myprint);
	cout << endl;
	for_each(v2.begin(), v2.end(), Myprint);
	cout << endl;
}
int main()
{
	test01();
	return 0;
}