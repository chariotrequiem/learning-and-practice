#include"SpeechManager.h"


//构造函数
speech_manager::speech_manager()
{
	this->initspeech();
	this->createSpeaker();
}


//菜单函数
void speech_manager:: show_menu()
{
	cout << "******************************" << endl;
	cout << "*******欢迎参加演讲比赛*******" << endl;
	cout << "********1.开始演讲比赛********" << endl;
	cout << "********2.查看往届记录********" << endl;
	cout << "********3.清空比赛记录********" << endl;
	cout << "********0.退出比赛程序********" << endl;
	cout << "******************************" << endl;
}


//退出系统
void speech_manager::exit_system()
{
	cout << "欢迎下次使用" << endl;
	exit(0);
}

//初始化函数
void speech_manager::initspeech()
{
	//容器都置空
	this->v1.clear();
	this->v2.clear();
	this->v3.clear();
	this->m.clear();

	//轮数置1
	this->m_index = 1;
}


//初始化创建12名选手
void speech_manager::createSpeaker()
{
	string nameseed  = "ABCDEFGHIJKL";
	for (int i = 0; i < nameseed.size(); i++)
	{
		string name = "选手";
		name += nameseed[i];

		Speaker sp;
		sp.m_Name = name;

		for (int i = 0; i < 2; i++)
		{
			sp.m_score[i] = 0;
		}

		//选手编号
		this->v1.push_back(i + 1001);

		//选手编号 以及对应的选手 存放到map容器中
		this->m.insert(make_pair(i + 1001, sp));
	}
}


//开始比赛
void speech_manager::startspeech()
{
	//第一轮比赛
	//1.抽签
	this->speechdraw();

	//比赛
	this->speechContest();

	//显示晋级结果
	this->showscore();

	//第二轮比赛
	this->m_index++;
	//1.抽签
	speechdraw();
	//2.比赛
	speechContest();
	//3.显示最终结果
	showscore();
	//4.保存分数
}


//抽签功能
void speech_manager::speechdraw()
{
	cout << "第<<" << this->m_index << ">>轮比赛选手正在抽签" << endl;
	cout << "————————————————————————" << endl;
	cout << "抽签后演讲顺序如下：" << endl;
	if (this->m_index == 1)
	{
		//第一轮比赛
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;

	}
	cout<<"————————————————————————" << endl;
	system("pause");
}


//比赛
void speech_manager::speechContest()
{
	cout << "————————第" << this->m_index << "轮比赛正式开始:————————" << endl;

	//准备临时容器  存放小组成绩
	multimap<double, int, greater<double>>groupscore;

	int num = 0;//记录人员个数 6人1组

	vector<int>v_src;//比赛人员容器
	if (this->m_index == 1)
	{
		v_src = v1;
	}
	else
	{
		v_src = v2;
	}

	//遍历所有选手进行比赛
	for (vector<int>::iterator it = v_src.begin(); it != v_src.end(); it++)
	{
		num++;
		//评委打分
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			//cout << score << " ";
			d.push_back(score);
		}
		//cout << endl;

		sort(d.begin(), d.end(), greater<double>());//排序
		d.pop_front();//去除最高分
		d.pop_back();//去除最低分

		//求平均分
		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();

		//打印平均分
		//cout << "编号：" << *it << "  姓名：" << this->m[*it].m_Name << "  平均分：" << avg << endl;

		//将平均分放到map容器中
		this->m[*it].m_score[this->m_index - 1] = avg;

		//将打分数据放到临时小组容器中
		groupscore.insert(make_pair(avg, *it));//key是得分，value是具体选手编号
		//每6人取出前三名
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "小组比赛名次：" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupscore.begin(); it != groupscore.end();it++)
			{
				cout << "编号：" << it->second
					 << "  姓名：" << this->m[it->second].m_Name
					 << "  成绩：" << this->m[it->second].m_score[this->m_index-1] << endl;
			}

			//取走前三名
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupscore.begin(); it != groupscore.end() && count<3; it++,count++)
			{
				if (this->m_index == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					v3.push_back((*it).second);
				}
			}

			groupscore.clear();
			cout << endl;
		}
	}
	cout << "————————第" << this->m_index << "轮比赛完毕————————" << endl;
	system("pause");

}


//显示比赛结果
void speech_manager::showscore()
{
	cout << "————————第" << this->m_index << "轮晋级选手如下：————————" << endl;
	vector<int>v;
	if (this->m_index == 1)
	{
		v = v2;
	}
	else
	{
		v = v3;
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "编号：" << *it
			 << "  姓名：" << this->m[*it].m_Name
			 << "  成绩：" << this->m[*it].m_score[this->m_index-1]<< endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	
}



//析构函数
speech_manager::~speech_manager()
{

}

