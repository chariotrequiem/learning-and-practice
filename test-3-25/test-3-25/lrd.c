#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//struct -- �ṹ��ؼ���     stu -- �ṹ���ǩ      struct stu -- �ṹ������
//struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//�˴���s1��s2��s3������ȫ�ֵĽṹ�����
//typedef struct stu 
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//�˴���stu��ʹ��typedef���������õ��Ľṹ������
//int main()
//{
//	struct stu s1;//�˴���s1�������s2�������ɽṹ�崴���ľֲ�����
//	stu s2;
//	return 0;
//}
//�ṹ������Ķ������ʼ��
//struct point
//{
//	int x;
//	int y;
//}p1;//�������͵�ͬʱ�������p1
//struct point p2;//����ṹ�����p2
//struct point p3 = { x,y };//��ʼ��������1������ͬʱ����ֵ
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
//�������ε�ʱ�򣬲�������Ҫѹջ�ġ��������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�������½�
//���ۣ��ṹ�崫�Σ�Ҫ���ṹ��ĵ�ַ
//ջ���Ƚ����������ȳ�
//����һ��Ԫ�أ�ѹջ��ɾ��һ��Ԫ�أ���ջ
//void Print2(stu* ps)//�Ϻ�
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//
//}
//int main()
//{
//	stu s = { "����", 24,"15229236216","��" };
//	Print(s);
//	Print2(&s);
//	return 0;
//}
