#pragma once//防止头文件重复包含
#include<iostream>//包含输入输出流头文件
using namespace std;
#include<fstream>
#define FILENAME "empFile.txt"
#include"worker.h"
#include"Boss.h"
#include"employee.h"
#include"manager.h"

class WorkManager
{
public:
	//构造函数
	WorkManager();

	//展示菜单
	void show_Menu();

	//退出功能
	void exitsystem();

	//记录文件中的人数
	int m_ElemNum;
	//员工数组的指针
	Worker **m_EleArr;

	//增加职工
	void Add_Emp();

	//保存文件
	void save();

	//判断文件是否为空 标志
	bool m_FileIsEmpty;

	//统计文件中人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//显示员工函数
	void show_Emp();

	//删除员工函数
	void Del_Emp();

	//判断职工是否存在,如存在返回职工所在数组中的位置，不存在返回-1
	int IsExist(int id);


	//修改员工函数
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序函数
	void Sort_Emp();

	//清空文件
	void Clean_File();

	//析构函数
	~WorkManager();





};
