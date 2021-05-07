#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>


class Greater5
{
public:
	bool operator()(int val)
	{
		return val >= 5;
	}
};
void Myprint(int val)
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
	cout << "替换前:" << endl;
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;
	//将大于等于5的替换为100
	replace_if(v.begin(), v.end(), Greater5(), 100);

	cout << "替换后:" << endl;
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;
}
int main()
{
	test01();
	return 0;
}