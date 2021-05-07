#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<ctime>


void myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//利用算法  打乱排序
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myprint);
}
int main()
{
	srand((unsigned int)time(NULL));
	test01();
	return 0;
}