#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include"speaker.h"
#include<fstream>

//����ݽ�������
class speech_manager
{
public:
	//���캯��
	speech_manager();

	//�˵�����
	void show_menu();

	//�˳�ϵͳ
	void exit_system();

	//��������
	~speech_manager();

	//��ʼ�����������Բ���
	void initspeech();

	//��ʼ������12��ѡ��
	void createSpeaker();

	//��ʼ����
	void startspeech();

	//��ǩ
	void speechdraw();

	//����
	void speechContest();

	//��ʾ�������
	void showscore();

	//�������
	void saverecord();

	//��ȡ��¼
	void loadRecord();

	//��ʾ�����¼
	void showRecord();

	//����ļ�
	void clearRecord();

	//�ж��ļ��Ƿ�Ϊ��
	bool FileIsEmpty;

	//��������¼����
	map<int, vector<string>>m_Record;

	//��Ա����
	//�����һ�ֱ���ѡ�ֱ������  12��
	vector<int>v1;

	//��һ�ֽ�����Աѡ�ֱ������  6��
	vector<int>v2;

	//ʤ��ǰ�����������  3��
	vector<int>v3;

	//��ű���Լ����Ӧ��ѡ������
	map<int, Speaker>m;

	//��������
	int m_index;



};
