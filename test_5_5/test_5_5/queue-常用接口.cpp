#include<iostream>
using namespace std;
#include<queue>
#include<string>

//queue����
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;
};
void test01()
{
	//����queue��������
	queue<Person>q;

	//׼������
	Person p1("��ɮ", 30);
	Person p2("�����", 1000);
	Person p3("��˽�", 900);
	Person p4("ɳɮ", 800);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//�ж�ֻҪ���в�Ϊ�գ��鿴��ͷ���鿴��β������
	while (!q.empty())
	{
		cout << "���д�СΪ��" << q.size() << endl;
		//�鿴��ͷ
		cout << "��ͷԪ�ء���������" << q.front().m_Name << "\t���䣺" << q.front().m_Age << endl;

		//�鿴��β
		cout << "��ͷԪ�ء���������" << q.back().m_Name << "\t���䣺" << q.back().m_Age << endl;

		//����
		q.pop();
	}
	cout << "���д�СΪ��" << q.size() << endl;

}
int main()
{
	test01();
	return 0;
}