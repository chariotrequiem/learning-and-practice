#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<algorithm>
#include<string>
#include<ctime>

//ѡ����
class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;//����
	int m_Score;//����
};

void createPerson(vector<Person>&v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameseed[i];

		int score = 0;
		Person p(name, score);
		//��������person���� ���뵽������
		v.push_back(p);
	}
}

//���
void setScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�����ŵ�deque������
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//60-100
			d.push_back(score);
		}
		//cout << it->m_Name << " ";
		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		//{
		//	cout << *dit << " ";
		//}
		//cout << endl;

		//����
		sort(d.begin(), d.end());
		//ȥ����߷ֺ���ͷ�
		d.pop_back();
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			//�ۼ�ÿ����ί����
			sum += *dit;
		}

		int avg = sum / d.size();

		//��ƽ���ָ�ֵ��ѡ��
		it->m_Score = avg;
	}
}

//��ʾ����
void showScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << (*it).m_Name << "\t������" << (*it).m_Score << endl;
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));
	//1.����5��ѡ��
	vector<Person>v;//���ѡ�ֵ�����
	createPerson(v);
	//����
	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "������" << (*it).m_Name << "\t������" << (*it).m_Score << endl;
	//}
	//2.��5��ѡ�ִ��
	setScore(v);

	//3.��ʾ���÷�
	showScore(v);
	return 0;
}