#include<iostream>
using namespace std;
#include<string>


void test01()
{
	string str1 = "���";
	string str2 = "�Ÿ�";
	if (str1.compare(str2) == 0)
	{
		cout << "str1 = str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 > str2" << endl;
	}
	else
	{
		cout << "str1 < str2" << endl;
	}
}
int main()
{
	test01();
	return 0;
}