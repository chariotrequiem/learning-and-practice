#pragma once
#include<fstream>
#include"identity.h"
#include"globalFile.h"


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
	
};
