#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string str = "abcdef";
	string substr = str.substr(1, 3);
	cout << "substr = " << substr << endl;
}

//ʹ�ò���
void test02()
{
	string email = "zhangsan@sina.com";

	//���ʼ���ַ�� ��ȡ�� �û�����Ϣ
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