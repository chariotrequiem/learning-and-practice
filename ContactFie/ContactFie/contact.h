#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

//#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#define DEFAULT_SZ 3

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
	struct PeoInfo *data;//存放一个信息
	int size;//记录当前已有的元素信息
	int capacity;//当前通讯录的最大容量
};




//声明函数
//初始化通讯录的函数
void InitContact(struct Contact* ps);

//增加一个信息
void AddContact(struct Contact* ps);

//显示通讯录中的信息
void ShowContact(const struct Contact* ps);

//删除指定的联系人
void DelContact(struct Contact* ps);

//查找指定的人信息
void SearchContact(const struct Contact* ps);

//修改指定联系人
void ModifyContact(struct Contact* ps);

//排序通讯录内容
void Sortcontact(struct Contact* ps);

//销毁动态内存
void DestroyContact(struct Contact* ps);

//保存通讯录
void SaveContact(struct Contact* ps);

//加载文件中的信息到通讯录
LoadContact(struct Contact* ps);







