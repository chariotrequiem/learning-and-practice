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
	//w = new Employee(1, "����", 1);
	//w->showInfo();
	//delete w;
	//Manager *m = NULL;
	//m = new Manager(2, "����", 2);
	//m->showInfo();
	//delete m;
	//Boss *b = NULL;
	//b = new Boss(3, "����", 3);
	//b->showInfo();
	//delete b;


	//ʵ����һ�������߶���
	WorkManager wm;
	int choice = 0;
	while (true)
	{
		//���ó�Ա���� - չʾ�˵�
		wm.show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://�˳�ϵͳ
			wm.exitsystem();
			break;
		case 1://���ְ��
			wm.Add_Emp();
			break;
		case 2://��ʾְ��
			wm.show_Emp();
			break;
		case 3://ɾ��ְ��
			wm.Del_Emp();
			break;
		case 4://�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5://����ְ��
			wm.Find_Emp();
			break;
		case 6://����ְ��
			wm.Sort_Emp();
			break;
		case 7://����ļ�
			wm.Clean_File();
			break;
		default:
			system("cls");//����
			break;
		}
	}



	return 0;
}