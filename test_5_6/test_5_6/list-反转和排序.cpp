#include<iostream>
using namespace std;
#include<list>
#include<algorithm>
//list-��ת������
void printList(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//��ת
void test01()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_back(50);

	cout << "��תǰ" << endl;
	printList(L1);

	//��ת��
	cout << "��ת��" << endl;
	L1.reverse();
	printList(L1);
}

bool myCompare(int v1, int v2)
{
	//���� ���õ�һ�������ڵڶ�����
	return v1 > v2;
}
//����
void test02()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_back(50);

	//����
	cout << "����ǰ" << endl;
	printList(L1);

	//���в�֧��������������ʵ��������������ñ�׼�㷨
	//��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
	//sort(L1.begin(), L1.end());
	//cout << "�����" << endl;
	//printList(L1);

	L1.sort();//Ĭ���������  ��С����  ����
	cout << "�����" << endl;
	printList(L1);

	//���� ����
	L1.sort(myCompare);
	printList(L1);
}
int main()
{
	//test01();
	test02();
	return 0;
}