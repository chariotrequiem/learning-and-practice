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
	cout << "�滻ǰ:" << endl;
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;
	//�����ڵ���5���滻Ϊ100
	replace_if(v.begin(), v.end(), Greater5(), 100);

	cout << "�滻��:" << endl;
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;
}
int main()
{
	test01();
	return 0;
}