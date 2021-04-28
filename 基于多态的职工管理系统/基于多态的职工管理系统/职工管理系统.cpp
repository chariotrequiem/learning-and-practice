#include<iostream>
using namespace std;
#include"workmanager.h"
#include"worker.h"
#include"employee.h"
#include"Boss.h"
#include"manager.h"


int main()
{
	//Worker *w = NULL;
	//w = new Employee(1, "张三", 1);
	//w->showInfo();
	//delete w;
	//Manager *m = NULL;
	//m = new Manager(2, "李四", 2);
	//m->showInfo();
	//delete m;
	//Boss *b = NULL;
	//b = new Boss(3, "王五", 3);
	//b->showInfo();
	//delete b;


	//实例化一个管理者对象
	WorkManager wm;
	int choice = 0;
	while (true)
	{
		//调用成员函数 - 展示菜单
		wm.show_Menu();
		cout << "请输入您的选择" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://退出系统
			wm.exitsystem();
			break;
		case 1://添加职工
			wm.Add_Emp();
			break;
		case 2://显示职工
			wm.show_Emp();
			break;
		case 3://删除职工
			wm.Del_Emp();
			break;
		case 4://修改职工
			wm.Mod_Emp();
			break;
		case 5://查找职工
			wm.Find_Emp();
			break;
		case 6://排序职工
			wm.Sort_Emp();
			break;
		case 7://清空文件
			wm.Clean_File();
			break;
		default:
			system("cls");//清屏
			break;
		}
	}



	return 0;
}