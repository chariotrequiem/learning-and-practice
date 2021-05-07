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
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	cout << "反转前:" << endl;
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;

	cout << "反转后:" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;

}
int main()
{
	test01();
	return 0;
}