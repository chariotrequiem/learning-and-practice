#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<functional>

//���������㷨
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

	//����sort��������
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;

	//�ı�Ϊ����
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;
}
int main()
{
	test01();
	return 0;
}