#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//���ü����㷨 - set_difference
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
		v2.push_back(i + 5);
	}
	vector<int>vTarget;
	//Ŀ��������Ҫ��ǰ���ٿռ�
	//��������� ��������û�н�����ȡ���������д��size��ΪĿ���������ٿռ�
	vTarget.resize(max(v1.size() ,v2.size()));

	//��ȡ�
	//v1��v2�Ĳ
	cout << "v1��v2�Ĳ��" << endl;
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, Myprint);
	cout << endl;

	//v2��v1�Ĳ
	cout << "v2��v1�Ĳ��" << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, Myprint);
	cout << endl;
}
int main()
{
	test01();
	return 0;
}