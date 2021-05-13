#pragma once
#include"identity.h"
#include<fstream>
#include"OrderFIle.h"
#include<vector>

class Teacher :public Identity
{
public:

	//默认构造函数
	Teacher();

	//有参构造函数
	Teacher(int empid, string name, string pwd);

	//菜单界面(重写父类中纯虚函数)
	virtual void operMenu();

	//查看所有预约
	void ShowAllOrder();

	//审核预约
	void ValidOrder();

	//教职工编号
	int m_EmpId;
};
