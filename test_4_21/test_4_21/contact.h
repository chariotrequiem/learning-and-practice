#include<iostream>
using namespace std;
#include<string>



#define MAX 1000//�������
struct People
{
	string m_Name;
	string m_Sex;
	int m_Age;
	string m_Tele;
	string m_Address;
};
struct contact
{
	struct People p[MAX];
	int m_size;//ͨѶ¼�е�ǰ��¼��ϵ�˸���
};





void Menu();
void Addcontact(struct contact * ps);
void Showcontact(struct contact * ps);
int isExist(const struct contact* ps, string name);
void Delcontact(struct contact * ps);
void Searchcontact(struct contact * ps);
void modifycontact(struct contact * ps);
void destorycontact(struct contact * ps);
void Bubble_contact(struct contact *ps, int sz);




