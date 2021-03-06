#pragma once
#include"identity.h"
#include"computerroom.h"
#include<vector>
#include"globalFile.h"
#include<fstream>
#include"OrderFIle.h"

class Student :public Identity
{
public:
	//默认构造
	Student();

	//有参构造
	Student(int id, string name,string pwd);

	//菜单界面(重写父类中纯虚函数)
	virtual void operMenu();

	//申请预约
	void ApplyOrder();

	//查看自身预约
	void ShowMyOrder();

	//查看所有预约
	void ShowAllOrder();

	//取消预约
	void CancelOrder();

	//学生学号
	int m_Id;

	//机房容器
	vector<ComputerRoom>vc;

	//初始化机房容器
	void initVC();

};