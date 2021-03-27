#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//创建一个数组-存放整型-10个
//type_t  arr_name   [const_n]
//type_t是指数组的元素类型
//const_n是一个常量表达式，用来指定数组的大小
//数组的初始化是指在创建数组的同时给数组的内容一些合理初始值（初始化）
//1.strlen和sizeof没有什么关联
//2.strlen是求字符串长度的--只能针对字符串求长度--库函数--使用得引头文件
//3.sizeof计算变量、数组、类型的大小--单位是字节--操作符
//数组是使用下标来访问的，下标从0开始
//数组大小可以通过计算得到
//二维数组的列下标不能省略
int main()
{
	//数组名就是首元素地址（有两个例外）//数组的地址和数组首元素的地址完全不同
	//1.sizeof(数组名) -- 数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节
	//2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
	int arr[] = { 1,2,3,4,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//printf("%p\n", arr);//00D6FA6C
	//printf("%p\n", &arr[0]);//00D6FA6C
	//printf("%d\n", *arr);//解引用，首元素就是1
	printf("%p\n", arr);//首元素地址
	printf("%p\n", &arr[0]);//首元素地址
	printf("%p\n", &arr);//取出的是数组的地址
	return 0;
}
//int main()
//{
//	if (1)
//		break;
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			//每一趟冒泡排序
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
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
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//对arr进行排序（升序）
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//arr是数组，对数组arr进行传参，实际上传递过去的是数组arr首元素的地址  &arr[0]
//	//当函数需要数组个数时，需要先将数组个数求出，再以参数形式传进函数中
//    bubble_sort(arr, sz);//冒泡排序函数
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	/*int arr[3][4] = { {1,2,3},{4,5} };*/
//	//printf("%s", arr);
//	/*int arr[] = { 1,2,3,4 };*/
//	int arr[3][4] = { {1,2,3}, {4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//数组在内存中是来连续存放的
//	}
//	return 0;
//}
//int main()
//{
//	//                   下标0  1  2  3  4  5  6
//	//char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	//printf("%c\n", arr[3]);
//	/*int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c\n", arr[i]);
//	}*/
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机数
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = { 'a','b' };//a,b,0,0,0
//	char arr3[5] = "ab";//a,b,/0,0,0
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//sizeof计算的是arr4所占空间的大小（a,b,c,d,e,f,\0）
//	printf("%d\n", strlen(arr4));//strlen求字符串长度，到\0就停止(a,b,c,d,e,f)
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	char arr2[5];
//	return 0;
//}