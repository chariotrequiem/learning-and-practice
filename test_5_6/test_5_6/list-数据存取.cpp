#include<iostream>
using namespace std;
#include<list>

//list ���ݴ�ȡ

void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//L1[0]; ��������[]����list�����е�Ԫ��

	//L1.at(2); ��������at��ʽ����list�����е�Ԫ��
	//ԭ��list���������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧���������

	cout << "��һ��Ԫ��Ϊ��" << L1.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << L1.back() << endl;

	//��֤��������֧���������
	list<int>::iterator it = L1.begin();
	it++;//֧��˫��
	it--;
	//it = it + 1;//��֧���������
}
int main()
{
	test01();
	return 0;
}