#include<iostream>
using namespace std;
#include<list>


//list�������캯��
void printlist(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	list<int>LI;

	//�������
	LI.push_back(10);
	LI.push_back(20);
	LI.push_back(30);
	LI.push_back(40);

	//��������
	printlist(LI);

	//���䷽ʽ����
	list<int>L2(LI.begin(), LI.end());
	printlist(L2);

	//��������
	list<int>L3(L2);
	printlist(L3);

	//n��elem
	list<int>L4(10, 1000);
	printlist(L4);

}
int main()
{
	test01();
	return 0;
}
