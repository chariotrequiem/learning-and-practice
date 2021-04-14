#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//初始化函数
void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;

}

//add函数
void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//增容
		struct PeoInfo *ptr =  realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}

void AddContact(struct Contact* ps)
{
	//检测当前通讯录的容量
	//1.如果满了，就增加空间
	//2.如果不满，什么都不干
	CheckCapacity(ps);
	//增加数据
	printf("请输入名字：>");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄：>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别：>");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话号码：>");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址：>");
	scanf("%s", ps->data[ps->size].addr);

	ps->size++;
	printf("添加成功\n");
	/*if (ps->size == MAX)
	{
		printf("通讯录已满，无法增加\n");
	}
	else
	{
		printf("请输入名字：>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄：>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别：>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话号码：>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址：>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
	}*/
}

//show函数
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		//标题
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		//数据
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

//查找函数
static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i<ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;//找不到的情况
}

//delete函数
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除的人的名字：");
	scanf("%s", name);
	//1.查找要删除的人在什么位置
	//找到了返回名字所在元素的下标
	//找不到返回 -1
	int pos = FindByName(ps, name);
	//2.删除
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除数据
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

//search函数
void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字: ");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

//modify函数
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改人的名字： ");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要修改人的信息不存在\n");
	}
	else
	{
		printf("请输入名字：>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄：>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别：>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话号码：>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址：>");
		scanf("%s", ps->data[pos].addr);

		printf("修改完成\n");
	}
}

//sort函数
void Sortcontact(struct Contact* ps)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	struct PeoInfo temp;
	for (int i = 0; i<ps->size - 1; i++)
	{
		for (int j = 0; j<ps->size - 1 - i; j++)
		{
			if (strcmp(ps->data[j].name, ps->data[j + 1].name)>0)
			{
				flag = 1;
				temp = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = temp;
			}
		}
		if (flag == 0)
			break;
	}
}


void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}


