#include<iostream>
using namespace std;
#include<stack>

//栈容器
void test01()
{
	//特点：符合先进后出的数据结构
	stack<int>s;

	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	//只要栈不为空，就查看栈顶并执行出栈操作
	while (!s.empty())
	{
		//查看栈顶元素
		cout << "栈顶元素为:" << s.top() <<  "\t栈的大小:" << s.size() << endl;

		//出栈
		s.pop();
	}
	cout << "栈的大小" << s.size() << endl;
}
int main()
{
	test01();
	return 0;
}