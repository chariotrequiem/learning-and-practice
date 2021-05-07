#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>

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
	v.resize(10);
	for_each(v.begin(), v.end(), Myprint());
	cout << endl;

	//后期重新填充
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), Myprint());
	cout << endl;
}
int main()
{
	test01();
	return 0;
}