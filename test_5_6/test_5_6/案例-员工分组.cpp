#include<iostream>
#include<vector>
#include<map>
using namespace std;
#include<ctime>
#include<string>

/*��˾��Ƹ10��Ա����ABCDEFGHIJ����10��Ա�����빫˾����Ҫָ��Ա�����ĸ����Ź���
Ա����Ϣ�У����� ������� �������У��߻����������з�
�����10��Ա�����䲿�ź͹���
ͨ��multimap������Ϣ���룬key�����ű�ţ���value��Ա����
�ֲ�����ʾԱ����Ϣ*/

#define CEHUA 0
#define MEISHU 1
#define �з� 2
class worker
{
public:
	string m_Name;
	int m_Salary;
};

void createworker(vector<worker>&v)
{
	string nameseed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		worker w;
		w.m_Name = "Ա��";
		w.m_Name += nameseed[i];

		w.m_Salary = rand() % 10000 + 10000;//10000~19999

		//��Ա���Ž���������
		v.push_back(w);
	}
}

//Ա������
void setgroup(vector<worker>&v,multimap<int,worker>&m)
{
	for (vector<worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int deptId = rand() % 3;//0 1 2

		//��Ա�����뵽������
		//key ���ű��  value  ����Ա��
		m.insert(make_pair(deptId, *it));
	}
}

void ShowWoekerByGroup(multimap<int,worker>&m)
{
	cout << "�߻����ţ�" << endl;
	multimap<int, worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);//ͳ�Ʋ߻����ž�������
	int index = 0;
	for (; pos != m.end() && index < count ; pos++,index++)
	{
		cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
	}
	cout << "��������������������������������������������" << endl;
	cout << "�������ţ�" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);//ͳ�Ʋ߻����ž�������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
	}

	cout << "��������������������������������������������" << endl;
	cout << "�з����ţ�" << endl;
	pos = m.find(�з�);
	count = m.count(�з�);//ͳ�Ʋ߻����ž�������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
	}
}
int main()
{

	srand((unsigned int)time(NULL));
	//1.����Ա��
	vector<worker>Vworker;
	createworker(Vworker);

	//2.Ա������
	multimap<int, worker>mworker;
	setgroup(Vworker, mworker);

	//3.������ʾԱ��
	ShowWoekerByGroup(mworker);
	//����
	//for (vector<worker>::iterator it = Vworker.begin(); it != Vworker.end(); it++)
	//{
	//	cout << "������" << it->m_Name << "\t���ʣ�" << it->m_Salary << endl;
	//}
	return 0;
}
