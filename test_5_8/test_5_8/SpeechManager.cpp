#include"SpeechManager.h"


//构造函数
speech_manager::speech_manager()
{
	//初始化容器和属性
	this->initspeech();

	//创建12名选手
	this->createSpeaker();

	//加载往届记录
	this->loadRecord();
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

	//初始化记录容器
	this->m_Record.clear();
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
	this->speechdraw();
	//2.比赛
	this->speechContest();
	//3.显示最终结果
	this->showscore();
	//4.保存分数
	this->saverecord();

	//重置比赛，获取记录
	//初始化容器和属性
	this->initspeech();

	//创建12名选手
	this->createSpeaker();

	//加载往届记录
	this->loadRecord();


	cout << "本届比赛完毕!" << endl;
	system("pause");
	system("cls");
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
	this->show_menu();
}


//4.保存分数
void speech_manager::saverecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//用追加的方式创建文件

	//将每个选手数据写入文件中
	for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++)
	{
		ofs << *it << "," << this->m[*it].m_score[1] << ",";
	}
	ofs << endl;

	//关闭文件
	ofs.close();
	cout << "记录已保存" << endl;

	//更改文件不为空状态
	this->FileIsEmpty = false;
}


//读取记录
void speech_manager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);//读文件

	if (!ifs.is_open())
	{
		this->FileIsEmpty = true;
		//cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	//文件清空情况
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件为空" << endl;
		this->FileIsEmpty = true;
		ifs.close();
		return;
	}

	//文件不为空
	this->FileIsEmpty = false;

	ifs.putback(ch);//将上面读取的单个字符再放回来

	string data;
	int index = 0;

	while (ifs >> data)
	{

		vector<string>v;//存放6个string字符串
		int pos = -1;//查到","位置的变量
		int start = 0;

		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				//没有找到
				break;
			}
			string temp = data.substr(start, pos - start);
			//cout << temp << endl;
			v.push_back(temp);
			start = pos + 1;
		}

		this->m_Record.insert(make_pair(index, v));
		index++;
	}

	ifs.close();

	//测试
	//for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
	//{
	//	cout << it->first << "冠军：" << it->second[0] << "分数：" << it->second[1] << endl;
	//}
}

//显示往届记录
void speech_manager::showRecord()
{
	if (this->FileIsEmpty)
	{
		cout << "文件为空或文件不存在" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "第" << i + 1 << "届"
				<< "冠军编号：" << this->m_Record[i][0] << "\t得分：" << this->m_Record[i][1] << " "
				<< "\t亚军编号：" << this->m_Record[i][2] << "\t得分：" << this->m_Record[i][3] << " "
				<< "\t季军编号：" << this->m_Record[i][4] << "\t得分：" << this->m_Record[i][5] << endl;
		}
	}


	system("pause");
	system("cls");
}


//清空文件
void speech_manager::clearRecord()
{
	cout << "是否确认清空文件？" << endl;
	cout << "1.是" << endl;
	cout << "2.否" << endl;

	int select = 0;

	cin >> select;
	if (select == 1)
	{
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		//初始化容器和属性
		this->initspeech();

		//创建12名选手
		this->createSpeaker();

		//加载往届记录
		this->loadRecord();

		cout << "清空成功" << endl;
	}

	system("pause");
	system("cls");
}

//析构函数
speech_manager::~speech_manager()
{

}

