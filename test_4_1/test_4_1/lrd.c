#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//数组指针 - 是指针
//int main()
//{
//	int* p = NULL;//整型指针 - 指向整形的指针 - 可以存放整形的地址
//	char* pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//	//数组指针 - 指向数组的指针 - 存放数组的地址
//	//int arr[10] = { 0 };
//	//arr - 首元素地址
//	//&arr[0] - 首元素地址
//	//&arr - 数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//将数组的地址存起来
//	//p就是数组指针
//	//int *p1[10];//指针数组
//	//int (*p2)[10];//数组指针
//	//此处p2先于*结合，说明p是一个指针变量，然后指针指向的是一个大小为10个整型的数组。所以p是一个指针，指向一个数组，叫数组指针
//	//这里要注意：[]的优先级高于*号，所以必须加上()来保证p先与*结合
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa+i));//*pa == arr
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	return 0;
//}

//void print(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
void print2(int (*p)[5],int x,int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			//printf("%d ", *(*(p + i) + j));
			printf("%d ", (*(p + i))[j]);
			printf("%d ", p[i][j]);
			printf("%d ", *(p[i] + j));
		}
		//*(*(p + i) + j) == (*(p + i))[j] == p[i][j] == *(p[i] + j)
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//print(arr, 3, 5);//arr - 数组名 - 数组名就是首元素地址（除两种特殊情况外）
	print2(arr, 3, 5);
	return 0;
}//打印数组内容
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);
//		//p[i] == *(p + i) == *(arr + i) == arr[i]
//	}
//	return 0;
//}
//int arr[5]            arr是一个5个元素的整型数组
//int *parr1[10]        parr1是一个10个元素的数组，每个元素的类型是int*，parr1是指针数组
//int (*parr2)[10]      parr2是一个指针，该指针指向一个数组，数组有10个元素，每个元素的类型是int，parr2是数组指针
//int (*parr3[10])[5]   parr3是一个数组，该数组有10个元素，每个元素是一个数组指针，每个数组指针指向的数组有5个元素，每个元素是int