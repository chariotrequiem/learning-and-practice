#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>


//�����㷨 - binary_search
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//�����������Ƿ��� 5 
	//�����������������У�������������У����δ֪
	bool ret = binary_search(v.begin(), v.end(), 5);
	if (ret)
	{
		cout << "�ҵ���" << endl;
	}
	else
	{
		cout << "�Ҳ���" << endl;
	}
}
int main()
{
	test01();
	return 0;
}