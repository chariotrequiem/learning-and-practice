#pragma once
#include<fstream>
#include"identity.h"
#include"globalFile.h"
#include<vector>
#include<map>
#include"student.h"
#include"teacher.h"
#include<algorithm>
#include"computerroom.h"


class Manager :public Identity
{
public:
	//默认构造
	Manager();

	//有参构造
	Manager(string name, string pwd);

	//选择菜单(重写父类中纯虚函数)
	virtual void operMenu();

	//添加账号
	void AddAccount();

	//查看账号
	void ShowAccount();

	//查看机房
	void ShowComputer();

	//清空预约
	void ClearFile();

	//初始化容器
	void initVector();

	//学生容器
	vector<Student>vStu;

	//教师容器
	vector<Teacher>vTea;

	//初始化机房容器
	void initVC();

	//检测重复  参数1  检测学号/职工号  参数2  检测类型
	bool checkRepeat(int id, int type);

	//机房信息容器
	vector<ComputerRoom>vc;
};
