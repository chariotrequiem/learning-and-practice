#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//结构是一些值的集合，这些值称为成员变量，结构的每个成员可以是不同类型的变量
//struct -- 结构体关键字     stu -- 结构体标签      struct stu -- 结构体类型
//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//此处的s1，s2，s3是三个全局的结构体变量
//typedef struct stu 
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//此处的stu是使用typedef重新命名得到的结构体类型
//int main()
//{
//	struct stu s1;//此处的s1与下面的s2是两个由结构体创建的局部变量
//	stu s2;
//	return 0;
//}
//结构体变量的定义与初始化
//struct point
//{
//	int x;
//	int y;
//}p1;//声明类型的同时定义变量p1
//struct point p2;//定义结构体变量p2
//struct point p3 = { x,y };//初始化：定义1变量的同时赋初值
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//int main()
//{
//	char arr[] = "hi";
//	struct T t = { "hehe",{100,'W',"hello world",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%c\n", t.s.c);
//	printf("%lf\n", t.s.d);
//	return 0;
//}
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//void Print(stu s)
//{
//	printf("name: %s\n", s.name);
//	printf("age: %d\n", s.age);
//	printf("tel: %s\n", s.tele);
//	printf("sex: %s\n", s.sex);
//}
//函数传参的时候，参数是需要压栈的。如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能下降
//结论：结构体传参，要传结构体的地址
//栈：先进后出；后进先出
//插入一个元素：压栈；删除一个元素：出栈
//void Print2(stu* ps)//较好
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//
//}
//int main()
//{
//	stu s = { "李四", 24,"15229236216","男" };
//	Print(s);
//	Print2(&s);
//	return 0;
//}
