#pragma once
#include<iostream>
using namespace std;
#include<map>
#include"globalFile.h"
#include<fstream>
#include<string>

class OrderFile
{
public:
	//构造函数
	OrderFile();

	//更新预约记录
	void updateOrder();

	//预约条数
	int m_Size;

	//记录所有预约讯息容器  key记录条数  value记录具体的键值对信息
	map<int, map<string, string>>m_orderData;

};


