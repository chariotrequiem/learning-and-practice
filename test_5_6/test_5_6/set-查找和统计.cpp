#include<iostream>
using namespace std;
#include<set>

//set - ���Һ�ͳ��
void test01()
{
	set<int>s;
	//����
	s.insert(10);
	s.insert(30);
	s.insert(20); 
	s.insert(40);

	//����
	set<int>::iterator pos = s.find(40);
	if (pos != s.end())
	{
		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}

void test02()
{
	//����
	set<int>s1;

	//��������
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	//ͳ��30�ĸ���
	int num = s1.count(30);
	//����set���ԣ�ͳ�ƵĽ��Ҫô��0��Ҫô��1��set��������ظ�����
	cout << "num = " << num << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}