#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//数组参数、指针参数
//对一维数组进行传参时，以下三种方法都可
//void test(int arr[]){}
//void test(int arr[10]){}
//void test(int *arr){}
//对指针数组进行传参，以下方法都可
//void test2(int *arr2[20]) {}//数组大小可省略
//void test2(int **arr2){}

//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}
//对二维数组进行传参
//void test(int arr[3][5])//行可以省略,列不可以省略
//{}
//void test(int (*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//二维数组传参
//	return 0;
//}

//一级指针传参
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
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}

//二级指针传参
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

//函数指针 - 是指向函数的指针 - 存放函数地址的一个指针
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
//	//&函数名 和 函数名 都是函数的地址
//	printf("%p\n", &ADD);
//	printf("%p\n", ADD);
//	int(*pa)(int, int) = ADD;//函数指针
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

//signal是一个函数声明，signal函数的参数有两个，第一个是int类型，第二个是函数指针，该函数指针指向函数的参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void
//(*(void(*)()0))()//实质为一次函数调用
//(   void(*)()   )0//把0强制类型转换为： void(*)() 函数指针类型 - 0就是一个函数的地址

//void(*signal (int, void(*)(int)))(int)
//              整型  函数指针类型
//简化：
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
//	//*是一个摆设，加不加都可以，如果要加，需要用()括起来
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
	//指针数组
	double* arr[5];
	//需要一个数组，这个数组可以存放四个函数的地址 - 函数指针的数组
	//int(*pa) (int, int) = Add;//Sub/Mul/Div
	double(*parr[4]) (double, double) = {Add,Sub,Mul,Div};//函数指针的数组
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%lf\n", parr[i](2,3));
	}
	return 0;
}