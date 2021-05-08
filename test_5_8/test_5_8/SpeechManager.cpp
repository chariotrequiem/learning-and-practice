#include"SpeechManager.h"


//���캯��
speech_manager::speech_manager()
{
	this->initspeech();
	this->createSpeaker();
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
	speechdraw();
	//2.����
	speechContest();
	//3.��ʾ���ս��
	showscore();
	//4.�������
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
	
}



//��������
speech_manager::~speech_manager()
{

}

