#include<iostream>
using namespace std;
#include<string>

//�������󣨷º�����
/*
����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
�������󳬳���ͨ���������������������Լ���״̬
�������������Ϊ��������
*/


class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};
//1.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
void test01()
{
	MyAdd myadd;
	cout << myadd(10, 10) << endl;
}

//2.�������󳬳���ͨ���������������������Լ���״̬
class Myprint
{
public:
	Myprint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}
	int count;//�ڲ��Լ�״̬
};
void test02()
{
	Myprint myprint;

	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");

	cout << "myprint���ô���Ϊ��" << myprint.count << endl;
}

//3.�������������Ϊ��������

void doPrint(Myprint &mp, string test)
{
	mp(test);
}
void test03()
{
	Myprint myPrint;
	doPrint(myPrint, "hello C++");
}
int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}