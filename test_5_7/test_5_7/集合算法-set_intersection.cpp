#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>


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
	//��������� ����������С����  ���ٿռ�  ȡС������size����
	vTarget.resize(min(v1.size(), v2.size()));

	//��ȡ����
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());


	for_each(vTarget.begin(), itEnd, Myprint);
	//for_each(vTarget.begin(), vTarget.end(), Myprint);
	//������2ΪvTarget.end()����jieguowei5 6 7 8 9 0 0 0 0 
	cout << endl;

}
int main()
{
	test01();
	return 0;
}