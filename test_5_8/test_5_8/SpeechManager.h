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

//设计演讲管理类
class speech_manager
{
public:
	//构造函数
	speech_manager();

	//菜单界面
	void show_menu();

	//退出系统
	void exit_system();

	//析构函数
	~speech_manager();

	//初始化容器和属性操作
	void initspeech();

	//初始化创建12名选手
	void createSpeaker();

	//开始比赛
	void startspeech();

	//抽签
	void speechdraw();

	//比赛
	void speechContest();

	//显示比赛结果
	void showscore();

	//保存分数
	void saverecord();

	//读取记录
	void loadRecord();

	//显示往届记录
	void showRecord();

	//清空文件
	void clearRecord();

	//判断文件是否为空
	bool FileIsEmpty;

	//存放往届记录容器
	map<int, vector<string>>m_Record;

	//成员属性
	//保存第一轮比赛选手编号容器  12人
	vector<int>v1;

	//第一轮晋级成员选手编号容器  6人
	vector<int>v2;

	//胜出前三名编号容器  3人
	vector<int>v3;

	//存放编号以及相对应的选手容器
	map<int, Speaker>m;

	//比赛轮数
	int m_index;



};
