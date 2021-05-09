#include"SpeechManager.h"


//���캯��
speech_manager::speech_manager()
{
	//��ʼ������������
	this->initspeech();

	//����12��ѡ��
	this->createSpeaker();

	//���������¼
	this->loadRecord();
}


//�˵�����
void speech_manager:: show_menu()
{
	cout << "******************************" << endl;
	cout << "*******��ӭ�μ��ݽ�����*******" << endl;
	cout << "********1.��ʼ�ݽ�����********" << endl;
	cout << "********2.�鿴�����¼********" << endl;
	cout << "********3.��ձ�����¼********" << endl;
	cout << "********0.�˳���������********" << endl;
	cout << "******************************" << endl;
}


//�˳�ϵͳ
void speech_manager::exit_system()
{
	cout << "��ӭ�´�ʹ��" << endl;
	exit(0);
}

//��ʼ������
void speech_manager::initspeech()
{
	//�������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->v3.clear();
	this->m.clear();

	//������1
	this->m_index = 1;

	//��ʼ����¼����
	this->m_Record.clear();
}


//��ʼ������12��ѡ��
void speech_manager::createSpeaker()
{
	string nameseed  = "ABCDEFGHIJKL";
	for (int i = 0; i < nameseed.size(); i++)
	{
		string name = "ѡ��";
		name += nameseed[i];

		Speaker sp;
		sp.m_Name = name;

		for (int i = 0; i < 2; i++)
		{
			sp.m_score[i] = 0;
		}

		//ѡ�ֱ��
		this->v1.push_back(i + 1001);

		//ѡ�ֱ�� �Լ���Ӧ��ѡ�� ��ŵ�map������
		this->m.insert(make_pair(i + 1001, sp));
	}
}


//��ʼ����
void speech_manager::startspeech()
{
	//��һ�ֱ���
	//1.��ǩ
	this->speechdraw();

	//����
	this->speechContest();

	//��ʾ�������
	this->showscore();

	//�ڶ��ֱ���
	this->m_index++;
	//1.��ǩ
	this->speechdraw();
	//2.����
	this->speechContest();
	//3.��ʾ���ս��
	this->showscore();
	//4.�������
	this->saverecord();

	//���ñ�������ȡ��¼
	//��ʼ������������
	this->initspeech();

	//����12��ѡ��
	this->createSpeaker();

	//���������¼
	this->loadRecord();


	cout << "����������!" << endl;
	system("pause");
	system("cls");
}


//��ǩ����
void speech_manager::speechdraw()
{
	cout << "��<<" << this->m_index << ">>�ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "������������������������������������������������" << endl;
	cout << "��ǩ���ݽ�˳�����£�" << endl;
	if (this->m_index == 1)
	{
		//��һ�ֱ���
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
	cout<<"������������������������������������������������" << endl;
	system("pause");
}


//����
void speech_manager::speechContest()
{
	cout << "������������������" << this->m_index << "�ֱ�����ʽ��ʼ:����������������" << endl;

	//׼����ʱ����  ���С��ɼ�
	multimap<double, int, greater<double>>groupscore;

	int num = 0;//��¼��Ա���� 6��1��

	vector<int>v_src;//������Ա����
	if (this->m_index == 1)
	{
		v_src = v1;
	}
	else
	{
		v_src = v2;
	}

	//��������ѡ�ֽ��б���
	for (vector<int>::iterator it = v_src.begin(); it != v_src.end(); it++)
	{
		num++;
		//��ί���
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			//cout << score << " ";
			d.push_back(score);
		}
		//cout << endl;

		sort(d.begin(), d.end(), greater<double>());//����
		d.pop_front();//ȥ����߷�
		d.pop_back();//ȥ����ͷ�

		//��ƽ����
		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();

		//��ӡƽ����
		//cout << "��ţ�" << *it << "  ������" << this->m[*it].m_Name << "  ƽ���֣�" << avg << endl;

		//��ƽ���ַŵ�map������
		this->m[*it].m_score[this->m_index - 1] = avg;

		//��������ݷŵ���ʱС��������
		groupscore.insert(make_pair(avg, *it));//key�ǵ÷֣�value�Ǿ���ѡ�ֱ��
		//ÿ6��ȡ��ǰ����
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "С��������Σ�" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupscore.begin(); it != groupscore.end();it++)
			{
				cout << "��ţ�" << it->second
					 << "  ������" << this->m[it->second].m_Name
					 << "  �ɼ���" << this->m[it->second].m_score[this->m_index-1] << endl;
			}

			//ȡ��ǰ����
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
	cout << "������������������" << this->m_index << "�ֱ�����ϡ���������������" << endl;
	system("pause");

}


//��ʾ�������
void speech_manager::showscore()
{
	cout << "������������������" << this->m_index << "�ֽ���ѡ�����£�����������������" << endl;
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
		cout << "��ţ�" << *it
			 << "  ������" << this->m[*it].m_Name
			 << "  �ɼ���" << this->m[*it].m_score[this->m_index-1]<< endl;
	}
	cout << endl;

	system("pause");
	system("cls");
	this->show_menu();
}


//4.�������
void speech_manager::saverecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//��׷�ӵķ�ʽ�����ļ�

	//��ÿ��ѡ������д���ļ���
	for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++)
	{
		ofs << *it << "," << this->m[*it].m_score[1] << ",";
	}
	ofs << endl;

	//�ر��ļ�
	ofs.close();
	cout << "��¼�ѱ���" << endl;

	//�����ļ���Ϊ��״̬
	this->FileIsEmpty = false;
}


//��ȡ��¼
void speech_manager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);//���ļ�

	if (!ifs.is_open())
	{
		this->FileIsEmpty = true;
		//cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	//�ļ�������
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ��" << endl;
		this->FileIsEmpty = true;
		ifs.close();
		return;
	}

	//�ļ���Ϊ��
	this->FileIsEmpty = false;

	ifs.putback(ch);//�������ȡ�ĵ����ַ��ٷŻ���

	string data;
	int index = 0;

	while (ifs >> data)
	{

		vector<string>v;//���6��string�ַ���
		int pos = -1;//�鵽","λ�õı���
		int start = 0;

		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				//û���ҵ�
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

	//����
	//for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
	//{
	//	cout << it->first << "�ھ���" << it->second[0] << "������" << it->second[1] << endl;
	//}
}

//��ʾ�����¼
void speech_manager::showRecord()
{
	if (this->FileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ��ļ�������" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "��" << i + 1 << "��"
				<< "�ھ���ţ�" << this->m_Record[i][0] << "\t�÷֣�" << this->m_Record[i][1] << " "
				<< "\t�Ǿ���ţ�" << this->m_Record[i][2] << "\t�÷֣�" << this->m_Record[i][3] << " "
				<< "\t������ţ�" << this->m_Record[i][4] << "\t�÷֣�" << this->m_Record[i][5] << endl;
		}
	}


	system("pause");
	system("cls");
}


//����ļ�
void speech_manager::clearRecord()
{
	cout << "�Ƿ�ȷ������ļ���" << endl;
	cout << "1.��" << endl;
	cout << "2.��" << endl;

	int select = 0;

	cin >> select;
	if (select == 1)
	{
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		//��ʼ������������
		this->initspeech();

		//����12��ѡ��
		this->createSpeaker();

		//���������¼
		this->loadRecord();

		cout << "��ճɹ�" << endl;
	}

	system("pause");
	system("cls");
}

//��������
speech_manager::~speech_manager()
{

}

