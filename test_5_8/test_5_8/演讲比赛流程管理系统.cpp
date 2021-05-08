#include<iostream>
using namespace std;
#include"SpeechManager.h"
#include<string>
#include<ctime>


int main()
{
	//创建管理类对象
	speech_manager sm;
	int choice = 0;

	//测试
	//for (map<int, Speaker>::iterator it = sm.m.begin(); it != sm.m.end(); it++)
	//{
	//	cout << "ID:" << it->first
	//		 <<"\tname:"<< it->second.m_Name
	//		 <<"\tscore:"<<it->second.m_score[0]
	//		 << endl;
	//}

	while (true)
	{

		sm.show_menu();

		cout << "请输入你的选择：" << endl;
		cin >> choice;
		srand((unsigned int)time(NULL));

		switch (choice)
		{
		case 0:
			sm.exit_system();
			break;
		case 1://开始比赛
			sm.startspeech();
			break;
		case 2://查看往届比赛记录
			break;
		case 3://清空比赛记录
			break;
		default:
			system("cls");//清屏
			cout << "输入错误，请重新输入：" << endl;
			break;

		}
	}

	return 0;
}