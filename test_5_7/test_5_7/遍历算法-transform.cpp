#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>

//���ñ����㷨  transform

class Transform
{
public:
	int operator()(int val)
	{
		return val + 100;
	}
};

class Print
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
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>vTarget;//Ŀ������
	vTarget.resize(v.size());//Ŀ������  ��Ҫ��ǰ���ٿռ�

	transform(v.begin(), v.end(), vTarget.begin(), Transform());

	for_each(vTarget.begin(), vTarget.end(), Print());
	cout << endl;
}
int main()
{
	test01();
	return 0;
}