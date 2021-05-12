#pragma once
#include<iostream>
using namespace std;
#include<string>
//身份抽象基类
class Identity
{
public:
	//操作菜单  纯虚函数
	//含有纯虚函数的类属于抽象类，抽象类不可以实例化对象
	virtual void operMenu() = 0;
	//
	string m_Name;//用户名
	string m_Pwd;//密码
};
