#include<iostream>
using namespace std;
#include<string>


//int main()
//{
//	//int i = 0;
//	//int arr[5];
//	//for (i = 0; i < 5; i++)
//	//{
//	//	arr[i] = i;
//	//}
//	//int arr[5] = { 10,20,30,40,50 };
//	int arr[] = { 1,2};
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	cout << "��������ռ���ڴ�ռ�Ϊ��"<<sizeof(arr) << endl;
//	cout << "ÿ��Ԫ��ռ�ÿռ�Ϊ��"<<sizeof(arr[0]) << endl;
//	cout <<"������Ԫ�ظ���Ϊ��"<< sizeof(arr)  / sizeof(arr[0])<< endl;
//	cout << "�����ַΪ��" << arr << endl;
//	cout << "�����е�һ��Ԫ�ص�ַΪ��" << &arr[0] << endl;
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 300,350,200,400,250 };
//	int max = arr[0];
//	for (int i = 1; i < 5; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	cout <<"���ص�С������Ϊ��" <<max << endl;
//	return 0;
//}
//void Reverse(int arr[], int sz)
//{
//	int start = 0;
//	int end = sz - 1;
//	while (start < end)
//	{		
//		arr[start] += arr[end];
//		arr[end] = arr[start] - arr[end];
//		arr[start] -= arr[end];
//		start++;
//		end--;
//	}
//}
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		cout <<arr[i]<<endl;
//	}
//}
//int main()
//{
//	int arr[5] = { 1,3,2,5,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);	
//	//���ú���
//	Reverse(arr, sz);
//	//��ӡ����
//	Print(arr, sz);
//	return 0;
//}
//void Bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//ÿһ��ð������
//			if (arr[j] > arr[j + 1])
//			{
//				arr[j] += arr[j+1];
//				arr[j + 1] = arr[j]- arr[j+1];
//				arr[j] -= arr[j+1];
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i] <<" ";
//	}
//	return 0;
//}
//int main()
//{
//	//int arr[2][3];
//	int arr2[2][2] = { {1, 2}, {2 ,3} };
//	int arr3[2][2] = { 1,2,3,4 };
//	int arr4[][2] = { 1,2,3,4 };
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			cout << arr2[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[2][3] = 
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//	cout << "��ά������ռ�ռ��СΪ�� " << sizeof(arr) << endl;
//	cout << "��ά�����һ��ռ���ڴ�Ϊ�� " << sizeof(arr[0]) << endl;
//	cout << "��ά�����һ��Ԫ��ռ���ڴ�Ϊ�� " << sizeof(arr[0][0]) << endl;
//	cout << "��λ��������Ϊ�� " << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "��λ��������Ϊ�� " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//	cout << "��ά����Ԫ�ظ���Ϊ�� " << sizeof(arr) / sizeof(arr[0][0]) << endl;
//	cout << "��ά�����׵�ַΪ�� " << arr << endl;
//	cout << "��ά�����һ���׵�ַΪ�� " << arr[0] << endl;
//	cout << "��λ����ڶ����׵�ַΪ�� " << arr[1] << endl;
//	cout << "��ά�����һ��Ԫ�ص�ַ " << &arr[0][0] << endl;
//	return 0;
//}
//int main()
//{
//	int scores[3][3] = 
//	{
//		{100,100,100},
//		{90,50,100},
//		{60,70,80}
//	};
//	string names[3] = { "����","����","����" };
//	for (int i = 0; i < 3; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < 3; j++)
//		{
//			sum += scores[i][j];
//		}
//		cout << names[i]<< "���ܷ�Ϊ " << sum << endl;
//	}
//	return 0;
//}
//һ���򵥵ļӷ�����
//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int sum = Add(10, 20);
//	cout << sum << endl;
//	return 0;
//}
//double Del(double num1, double num2)
//{
//	return num1 - num2;
//}
//int main()
//{
//	double a, b;
//	cout << "��ֱ�����������" << endl;
//	cin >>  a;
//	cin >>  b;
//	double ret = Del(a, b);
//	cout << ret << endl;
//	return 0;
//}
//����һ���������ֽ��н����ĺ���
//void swap(int num1, int num2)
//{
//	cout << "����ǰ�� " << "num1 = " << num1 <<" "<< "num2 = " << num2 << endl;
//	num1 += num2;
//	num2 = num1 - num2;
//	num1 -= num2;
//	cout << "������ " << "num1 = " << num1 << " " << "num2 = " << num2 << endl;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	cout << "����ǰ�� " << "num1 = " << num1 << " " << "num2 = " << num2 << endl;
//	swap(num1, num2);
//	cout << "����ǰ�� " << "num1 = " << num1 << " " << "num2 = " << num2 << endl;
//	return 0;
//}
////1.�޲��޷�
//void test1()
//{
//	cout << "this is test 1" << endl;
//}
////2.�в��޷�
//void test2(int a)
//{
//	cout << "this is test 2 a = " << a<<endl;
//}
////3.�޲��з�
//int test3()
//{
//	cout << "this is test 3" << endl;
//	return 100;
//}
////4.�в��з�
//int test4(int a)
//{
//	cout<< "this is test 4 a = " << a<<endl;
//	return a;
//}
//int main()
//{
//	test1();
//	test2(100);
//	int num1 = test3();
//	cout << "num1 = " << num1 << endl;
//	int num2 = test4(1000);
//	cout << "num2 = " << num2 << endl;
//	return 0;
//}
//��������
//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ
//��ǰ���߱����������Ĵ��ڣ��������ú���������
//int max(int a, int b);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << max(a, b) << endl;
//	return 0;
//}
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//�������ļ���д
//ʵ���������ֽ���
//#include "swap.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	cout << "a�ĵ�ַΪ�� " << &a << endl;
//	cout << "ָ��pΪ��" << p << endl;
//	//����ͨ����������ʹ��ָ��
//	*p = 1000;
//	cout << "a = " << a << endl;
//	cout << "*p = " << *p << endl;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	cout << "sizeof(int*) = " << sizeof(p) << endl;
//	cout << "sizeof(int*) = " << sizeof(int *) << endl;
//	cout << "sizeof(float*) = " << sizeof(float*) << endl;
//	cout << "sizeof(double*) = " << sizeof(double*) << endl;
//	cout << "sizeof(char*) = " << sizeof(char*) << endl;
//	return 0;
//}
//int main()
//{
//	//��ָ�����ڸ�ָ�������ʼ��
//	int * p = NULL;
//	//0~255֮����ڴ�����ϵͳռ�õģ���˲��ɷ���
//	*p = 100;//err
//	return 0;
//}
//int mian()
//{
//	//Ұָ��
//	//�ڳ�����һ��Ҫ�����������Ұָ��
//	//ָ�����ָ���ڴ��ַ���Ϊ0x1100�Ŀռ�
//	int * p = (int *)0x1100;
//	//����Ұָ�뱨��  err
//	cout << *p << endl;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	//����ָ�롪��ָ��ֻ������޸ģ�����ָ��ָ���ֵ�������޸�
//	const int * p = &a;
//	//*p = 20;//err����ָ��ָ�򲻿��Ը�
//	//p = &b;//��ȷ����ָ��ָ����Ը�
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	//ָ�볣������ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
//	int* const p = &a;
//	//*p = 20��//��ȷ����ָ���ֵ���Ը�
//	//p = &b;//err����ָ��ָ�򲻿��Ը�
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	//const����ָ��Ҳ���γ�������ָ���ָ���ָ��ָ���ֵ�������Ը�
//	const int* const p = &a;
//	//*p = 20��//err����ָ���ֵ�����Ը�
//	//p = &b;//err����ָ��ָ�򲻿��Ը�
//	return 0;
//}
//int main()
//{
//	//����ָ����������е�Ԫ��
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int * p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		//��ӡ����Ԫ��
//		cout << *(p + i) << " ";
//	}
//	return 0;
//}
//void swap(int *a,int *b)
//{
//	*a += *b;
//	*b = *a - *b;
//	*a -= *b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	cout << a << endl;
//	cout << b << endl;
//	return 0;
//}

////ð��������
//void Bubble_sort(int *arr, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//���������Ѿ���ȫ����
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				arr[j] += arr[j + 1];
//				arr[j + 1] = arr[j] - arr[j + 1];
//				arr[j] -= arr[j + 1];
//				flag = 0;//���黹δ��ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
////��ӡ����
//void Print(int *arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//int main()
//{
//	//��������
//	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
//struct stu
//{
//	string name;
//	int age;
//	double score;
//}s3;
//int main()
//{
//	//�����ṹ�����
//	//1.struct �ṹ���� ������
//	//struct�ؼ��ֿ�ʡ��
//	struct stu s1;
//	s1.name = "����";
//	s1.age = 20;
//	s1.score = 98.5;
//	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;
//	//2.struct �ṹ���� ������ = {��Ա1ֵ�� ��Ա2ֵ....}
//	struct stu s2 = { "����", 22, 95 };
//	cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;
//	//3.����ṹ��ʱ˳�㴴������
//	s3.name = "����";
//	s3.age = 25;
//	s3.score = 66.6;
//	cout << "������" << s3.name << " ���䣺" << s3.age << " ������" << s3.score << endl;
//	return 0;
//}
//struct stu
//{
//	string name;
//	int age;
//	double score;
//};
//int main()
//{
//	struct stu s[] = { {"����", 20, 65.5}, {"����", 25, 66.6}, {"����", 26, 66.8} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		cout << " ������" << s[i].name 
//			 << " ���䣺" << s[i].age 
//			 << " ������" << s[i].score << endl;
//	}
//	return 0;
//}

//����ѧ���ṹ��
//struct stu
//{
//	string name;
//	int age;
//	double score;
//};
//int main()
//{
//	//����ѧ���ṹ�����
//	struct stu s = {"����", 20, 66.5};
//	struct stu * p = &s;
//	cout <<"������"<< p->name<<" ���䣺"<<p->age<<" ������"<<p->score << endl;
//	return 0;
//}
//struct stu
//{
//	string name;
//	int age;
//	int score;
//};
//struct teacher
//{
//	string name;
//	int id;
//	int age;
//	struct stu s;
//};
//int main()
//{
//	struct teacher t = { "��÷", 25, 20, {"����", 10, 99} };
//	cout << "��ʦ������"  << t.name
//		 << " ��ʦID��"   << t.id
//		 << " ��ʦ���䣺" << t.age << endl;
//	cout << "ѧ��������"  << t.s.name 
//		 << " ѧ�����䣺" << t.s.age 
//		 << " ѧ��������" << t.s.score << endl;
//	return 0;
//}
//struct stu
//{
//	string name;
//	int age;
//	int score;
//};
////1.ֵ����
//void Print(struct stu s)
//{
//	cout << "������ " << s.name << " ���䣺 " << s.age  << " ������ " << s.score << endl;
//}
////2.ַ����
//void Print2(struct stu *p)
//{
//	cout << "������ " << p->name<< " ���䣺 " << p->age<< " ������ " << p->score << endl;
//}
//int main()
//{
//	//�ṹ������������
//	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ���Ϣ
//
//	//�����ṹ�����
//	struct stu s = { "����", 20, 66 };
//	Print(s);
//	Print2(&s);
//	return 0;
//}

//struct stu
//{
//	string name;
//	int age;
//	int score;
//};
//void print(const struct stu *s)//��const��ֹ�������е������
//{
//	//s->age = 100;//err������Ϊ����const����
//	cout << s->age << s->name << s->score << endl;
//}
//int main()
//{
//	struct stu s = { "����", 20, 99 };
//	print(&s);
//	cout << s.age << s.name << s.score;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//#include<ctime>
//struct stu
//{
//	string name;
//	int score;
//};
//struct teacher
//{
//	string name;
//	struct stu s[5];
//};
//void allocateSpace(struct teacher t[], int sz)
//{
//	string nameseed = "ABCDE";
//	for (int i = 0; i < sz; i++)
//	{
//		t[i].name = "Teacher_";
//		t[i].name += nameseed[i];		
//		for (int j = 0; j < 5; j++)
//		{
//			t[i].s[j].name = "Student_";
//			t[i].s[j].name += nameseed[j];
//			int random = rand() % 41+60;//(0~40)+60
//			t[i].s[j].score = random;
//		}
//	}
//}
//void PrintInfo(struct teacher t[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		cout << "��ʦ������" << t[i].name << endl;
//			for (int j = 0; j < 5; j++)
//			{
//				cout << "\tѧ��������" << t[i].s[j].name << " ������" << t[i].s[j].score << endl;
//			}
//	}
//}
//int main()
//{
//	//���������
//	srand((unsigned int)time(NULL));
//	struct teacher t[3] ;
//	int sz = sizeof(t) / sizeof(t[0]);
//	allocateSpace(t, sz);
//	PrintInfo(t, sz);
//	return 0;
//}
//struct hero
//{
//	string name;
//	int age;
//	string sex;
//};
//void Bubble_sort(struct hero *h,int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (h[j].age > h[j + 1].age)
//			{
//				struct hero temp = h[j] ;
//				h[j] = h[j + 1];
//				h[j + 1] = temp;
//			}
//		}
//	}
//}
//void Print(struct hero h[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		cout << "������" << h[i].name << " ���䣺" << h[i].age << " �Ա�" << h[i].sex << endl;
//	}
//}
//int main()
//{
//	struct hero h[5] = 
//	{ 
//		{ "����",23,"��" } ,
//		{ "����",22,"��" } ,
//		{ "�ŷ�",20,"��" } ,
//		{ "����",21,"��" } ,
//		{ "����",19,"Ů" }
//	};
//	int sz = sizeof(h) / sizeof(h[0]);
//	Bubble_sort(h,sz);
//	Print(h,sz);
//	return 0;
//}
//void unionL(List *La, list Lb)
//{
//	int La_len, Lb_len, i;
//	ElemType e;
//	La_len = ListLength(*La);
//	Lb_len = ListLengyh(Lb);
//	for (i = 1; i <= Lb_len; i++)
//	{
//		GetElem(Lb, i, &e);
//		if (!LocateElem(*La, e))
//		{
//			ListInsert(La, ++a_len, e);
//		}
//	}
//}
//#define MAXSIZE 20
//typedef int ElemType;
//typedef struct
//{
//	ElemType data[MAXSIZE];
//	int length;//���Ա�ǰ����
//}SqList;

