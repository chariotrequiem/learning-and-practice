#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//char* my_strcpy(char* dest, const char* src)
//{
//
//}
////1.写一个函数指针pf，能够指向my_strcpy
////
////2.写一个函数指针数组pfArr，能够存放四个my_strcpy函数的地址
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pfArr[4])(char*, const char*) = my_strcpy;
//	return 0;
//}
//void menu()
//{
//	printf("***************************************\n");
//	printf("**********1. add*******2. sub**********\n");
//	printf("**********3. mul*******4. div**********\n");
//	printf("***             0. exit             ***\n");
//	printf("***************************************\n");
//}
//double Add(double x, double y)
//{
//	return x + y;
//}
//double Sub(double x, double y)
//{
//	return x - y;
//}
//double Mul(double x, double y)
//{
//	return x * y;
//}
//double Div(double x, double y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	double x, y;
//	//pfArr 是一个函数指针数组 - 转移表4
//	double(*pfArr[5])(double, double) = { 0,Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("请选择： ");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数： ");
//			scanf("%lf%lf", &x, &y);
//			double ret = pfArr[input](x, y);
//			printf("%lf\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}

//回调函数
//回调函数就是一个通过函数指针调用的函数。如果把函数的指针（地址）作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数时
//我们说这就是回调函数。回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进行相应
//void calc(double(*pf)(double, double))
//{
//	double x, y;
//	printf("请输入两个操作数： ");
//	scanf("%lf%lf", &x, &y);
//	printf("%lf", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择： ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	double x, y;
//	do
//	{
//		menu();
//		printf("请选择： ");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数： ");
//			scanf("%lf%lf", &x, &y);
//		}
//		switch (input)
//		{
//		case 1 :
//			printf("%lf\n", Add(x, y));
//			break;
//		case 2:
//			printf("%lf\n", Sub(x, y));
//			break; 
//		case 3:
//			printf("%lf\n", Mul(x, y));
//			break;
//		case 4:
//			printf("%lf\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//	int(*pf)(int, int);//函数指针
//	int(*pfArr[4])(int, int);//pfArr是一个数组 - 函数指针的数组
//	//指向函数指针数组的指针，指针指向一个数组，数组的元素都是函数指针
//	//ppfArr是一个指向[函数指针数组]的指针
//	int (*(*ppfArr)[4])(int,int) = &pfArr;
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//指向数组的每个元素类型是一个函数指针int(*)(int,int)
//	return 0;
//}

//void print(char* str)
//{
//	printf("hehe: %s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	
//	test(print);
//	return 0;
//}

//void Bubblesort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j <sz - i -1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}			
//		}
//	}
//}
//struct stu
//{
//	char name[20];
//	int age;
//};

//int main()
//{
//	//冒泡排序函数
//	//冒泡排序函数只能排序整型数组
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct stu s[] = { {"zhangszn", 20},{"lisi", 25},{"wangwu", 52} };
//	float f[] = { 5.6,6.5,23.5,3.2,5.4 };
//	qsort(arr, sz, sizeof(arr[0]),  );
//	/*Bubblesort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	return 0; 
//}
//qsort - 可以排序任意类型的数据 - 库函数 - 排序
//quick sort
//void qsort(void *base,//目标数组起始位置 - 数组名
//           size_t num,//有几个元素 - sz
//		   size_t width,//元素大小（字节） - sizeof(arr[0])
//		   int(*cmp)(const void *e1, const void *e2)//比较函数
//			);
//void*类型的指针 可以接收任意类型的地址
//void*类型的指针 不能进行解引用操作
//void*类型的指针 不能进行+-整数的操作


struct stu 
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//比较名字就是比较字符串，字符串比较不能直接用><=来比较
	//应该用strcmp函数
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test2()
{
	struct stu s[3] = { {"zhangsan", 50}, {"lisi", 80}, {"wangwu", 30} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}
int main()
{
	//test();
	test2();
	return 0;
}