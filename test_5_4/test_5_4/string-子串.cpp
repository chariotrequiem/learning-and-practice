#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string str = "abcdef";
	string substr = str.substr(1, 3);
	cout << "substr = " << substr << endl;
}

//使用操作
void test02()
{
	string email = "zhangsan@sina.com";

	//从邮件地址中 获取到 用户名信息
	int pos = email.find("@");//8
	string username = email.substr(0, pos);
	cout << username << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}