#include<iostream>
using namespace std;
#include<set>
#include<string>
//pair���鴴��
void test01()
{
	//��һ��
	pair<string, int>p("Tom", 20);
	cout << "name : " << p.first << "\tage : " << p.second << endl;

	//�ڶ���
	pair<string, int>p2 = make_pair("Jerry", 30);
	cout << "name : " << p2.first << "\tage : " << p2.second << endl;
}
int main()
{
	test01();
	return 0;
}