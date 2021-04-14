#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ���е�Ԫ����Ϣ
};




//��������
//��ʼ��ͨѶ¼�ĺ���
void InitContact(struct Contact* ps);

//����һ����Ϣ
void AddContact(struct Contact* ps);

//��ʾͨѶ¼�е���Ϣ
void ShowContact(const struct Contact* ps);

//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);

//����ָ��������Ϣ
void SearchContact(const struct Contact* ps);

//�޸�ָ����ϵ��
void ModifyContact(struct Contact* ps);

//����ͨѶ¼����
void Sortcontact(struct Contact* ps);




