#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string str = "hello";

	//����
	str.insert(1, "000");
	cout << "str = " << str << endl;

	//ɾ��
	str.erase(1, 3);
	cout << "str = " << str << endl;
}
int main()
{
	test01();
	return 0;
}