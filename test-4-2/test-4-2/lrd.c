#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���������ָ�����
//��һά������д���ʱ���������ַ�������
//void test(int arr[]){}
//void test(int arr[10]){}
//void test(int *arr){}
//��ָ��������д��Σ����·�������
//void test2(int *arr2[20]) {}//�����С��ʡ��
//void test2(int **arr2){}

//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}
//�Զ�ά������д���
//void test(int arr[3][5])//�п���ʡ��,�в�����ʡ��
//{}
//void test(int (*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//��ά���鴫��
//	return 0;
//}

//һ��ָ�봫��
//void print(int *p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}

//����ָ�봫��
//void test(int** ptr)
//{
//	printf("%d ", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int **pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//����ָ�� - ��ָ������ָ�� - ��ź�����ַ��һ��ָ��
//int ADD(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int arr[10] = { 0 };
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	printf("%p\n", &ADD);
//	printf("%p\n", ADD);
//	int(*pa)(int, int) = ADD;//����ָ��
//	printf("%d\n", (*pa)(2, 3));
//
//	return 0;
//}

//void print(char*str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p) (char*)= print;
//	(*p)("hello world");
//	return 0;
//}

//signal��һ������������signal�����Ĳ�������������һ����int���ͣ��ڶ����Ǻ���ָ�룬�ú���ָ��ָ�����Ĳ�����int������������void
//signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//(*(void(*)()0))()//ʵ��Ϊһ�κ�������
//(   void(*)()   )0//��0ǿ������ת��Ϊ�� void(*)() ����ָ������ - 0����һ�������ĵ�ַ

//void(*signal (int, void(*)(int)))(int)
//              ����  ����ָ������
//�򻯣�
//typedef void(* pfun_t)(int);
//pfun_t signal(int, pfun_t);

//int ADD(int x, int y)
//{
//	int z;
//	return z = x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa) (int, int) = ADD;
//	printf("%d\n", pa(2, 3));//5
//	//*��һ�����裬�Ӳ��Ӷ����ԣ����Ҫ�ӣ���Ҫ��()������
//	printf("%d\n", (*pa)(2, 3));//5
//	return 0;
//}

double Add(double x, double y)
{
	return x + y;
}
double Sub(double x, double y)
{
	return x - y;
}
double Mul(double x, double y)
{
	return x * y;
}
double Div(double x, double y)
{
	return x / y;
}
int main()
{
	//ָ������
	double* arr[5];
	//��Ҫһ�����飬���������Դ���ĸ������ĵ�ַ - ����ָ�������
	//int(*pa) (int, int) = Add;//Sub/Mul/Div
	double(*parr[4]) (double, double) = {Add,Sub,Mul,Div};//����ָ�������
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%lf\n", parr[i](2,3));
	}
	return 0;
}