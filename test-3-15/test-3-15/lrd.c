#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数的调用
//传值调用：函数的形参和实参分别占有不同的内存块，对形参的修改不会影响实参
//传址调用：1.传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
//这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量
//形参 - 形式函数 - 只有在函数调用的过程中才实例化，函数调用完成之后就销毁了
//当实参传给形参的时候，形参其实是实参的一份临时拷贝
//所以对形参的修改不会改变实参
/*int Add(int, int);*///函数声明
#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf函数的返回值为打印在屏幕上的字符个数
//	return 0;
//
//}
//int main()\
//{
//	int len = 0;
//	printf("%d\n", strlen("abc"));
//}
//void add(int* p);
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num = %d\n", num);
//	add(&num);
//	printf("num = %d\n", num);
//	add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right)/2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//找到了返回下标，找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("想要查找：\n");
//	scanf("%d", &k);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}	
//	else
//	{
//		printf("找到了，下标是： %d\n", ret);
//	}	
//	return 0;
//}
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("输入一个年份:\n");
//	scanf("%d", &year);
//	if (1 == is_leap_year(year))
//	printf("%d 年是闰年", year);
//	else
//	printf("%d 年不是闰年", year);
//	return 0;
//}
//int is_prime(int n)//是素数返回1；不是素数返回0
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	printf("输入一个数:\n");
//	scanf("%d", &i);
//	if (is_prime(i) == 1)
//		printf("这个数是素数");
//	else
//		printf("这个数不是素数\n");
//	return 0;
//}