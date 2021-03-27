#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct stu 
{
	char name[50];
	int age;
	char sex[5];
	char ID[20];
};
int main()
{
	struct stu s = {"李荣铎", 22, "男", "230521199811290017"};
	strcpy(s.name, "李白");//strcpy - string copy - 字符串拷贝 - 库函数 - string.h
	printf("名字：%s\n年龄：%d\n性别：%s\n身份证号：%s\n", s.name, s.age, s.sex, s.ID);
	struct stu *ps = &s;
	printf("名字：%s\n年龄：%d\n性别：%s\n身份证号：%s\n", ps->name, ps->age, ps->sex, ps->ID);
	return 0;
}
//struct Book
//{
//	char name[50];
//	short price;
//};
//int main()
//{ 
//	//利用结构体类型-创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计", 55 };
//	struct Book* pb = &b1;
//	//利用pb打印出书名和价格
//	//.操作符     结构体变量.成员
//	//->操作符    结构体指针->成员
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*/
//
//	/*printf("书名： %s\n", b1.name);
//	printf("原价： %d元\n", b1.price);
//	b1.price = 15;
//	printf("打折价： %d元\n", b1.price);*/
//	return 0;
//	//double d = 3.14;
//	//double* pd = &d;//32-4 64-8
//	//printf("%d\n", sizeof(pd));
//	/*double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);*/
//	//int a = 10;//申请了四个字节空间
//	//int* p = &a;//p - 是一个变量 - 指针变量
//	////printf("%p\n", p);
//	//*p = 20;//* - 解引用操作符/间接访问操作符
//	//printf("a = %d\n", a);
//
//	
//}