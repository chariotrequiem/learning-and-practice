#include<iostream>
using namespace std;
#include<stack>

//ջ����
void test01()
{
	//�ص㣺�����Ƚ���������ݽṹ
	stack<int>s;

	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	//ֻҪջ��Ϊ�գ��Ͳ鿴ջ����ִ�г�ջ����
	while (!s.empty())
	{
		//�鿴ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ:" << s.top() <<  "\tջ�Ĵ�С:" << s.size() << endl;

		//��ջ
		s.pop();
	}
	cout << "ջ�Ĵ�С" << s.size() << endl;
}
int main()
{
	test01();
	return 0;
}