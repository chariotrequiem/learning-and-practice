#include<iostream>
using namespace std;
#include"SpeechManager.h"
#include<string>
#include<ctime>


int main()
{
	//�������������
	speech_manager sm;
	int choice = 0;

	//����
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

		cout << "���������ѡ��" << endl;
		cin >> choice;
		srand((unsigned int)time(NULL));

		switch (choice)
		{
		case 0:
			sm.exit_system();
			break;
		case 1://��ʼ����
			sm.startspeech();
			break;
		case 2://�鿴���������¼
			break;
		case 3://��ձ�����¼
			break;
		default:
			system("cls");//����
			cout << "����������������룺" << endl;
			break;

		}
	}

	return 0;
}