#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>


class Myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test01()
{
	vector<int>v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(10);
	v.push_back(20);

	cout << "Ìæ»»Ç°" << endl;
	for_each(v.begin(), v.end(), Myprint());
	cout << endl;

	replace(v.begin(), v.end(), 20, 2000);
	cout << "Ìæ»»ºó" << endl;
	for_each(v.begin(), v.end(), Myprint());
	cout << endl;
}
int main()
{
	test01();
	return 0;
}