#include<iostream>
using namespace std;
#include<map>

//map-���Һ�ͳ��
void test01()
{
	//����
	map<int, int>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));

	map<int,int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "���ҵ��� key = " << pos->first << "\tvalue = " << pos->second << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
	//ͳ��
	//map����������ظ�key��countͳ�ƶ��Խ��Ҫô��0Ҫô��1
	//multimap��countͳ�ƿ��ܴ���1
	int num = m.count(3);
	cout << "num = " << num << endl;
}
int main()
{
	test01();
	return 0;
}