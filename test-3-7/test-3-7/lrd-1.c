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
	struct stu s = {"������", 22, "��", "230521199811290017"};
	strcpy(s.name, "���");//strcpy - string copy - �ַ������� - �⺯�� - string.h
	printf("���֣�%s\n���䣺%d\n�Ա�%s\n���֤�ţ�%s\n", s.name, s.age, s.sex, s.ID);
	struct stu *ps = &s;
	printf("���֣�%s\n���䣺%d\n�Ա�%s\n���֤�ţ�%s\n", ps->name, ps->age, ps->sex, ps->ID);
	return 0;
}
//struct Book
//{
//	char name[50];
//	short price;
//};
//int main()
//{ 
//	//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������", 55 };
//	struct Book* pb = &b1;
//	//����pb��ӡ�������ͼ۸�
//	//.������     �ṹ�����.��Ա
//	//->������    �ṹ��ָ��->��Ա
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*/
//
//	/*printf("������ %s\n", b1.name);
//	printf("ԭ�ۣ� %dԪ\n", b1.price);
//	b1.price = 15;
//	printf("���ۼۣ� %dԪ\n", b1.price);*/
//	return 0;
//	//double d = 3.14;
//	//double* pd = &d;//32-4 64-8
//	//printf("%d\n", sizeof(pd));
//	/*double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);*/
//	//int a = 10;//�������ĸ��ֽڿռ�
//	//int* p = &a;//p - ��һ������ - ָ�����
//	////printf("%p\n", p);
//	//*p = 20;//* - �����ò�����/��ӷ��ʲ�����
//	//printf("a = %d\n", a);
//
//	
//}