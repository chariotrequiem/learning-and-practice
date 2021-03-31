#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	//任意一个二进制浮点数v可以表示成下面的形式：
//	//（-1）^S*M*2^E
//	//（-1）^S表示符号位，当s=0，V为正数；当s=1，V为负数
//	//M表示有效数字，大于等于1，小于2
//	//2^E表示指数位
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n的值为: %d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}
//int main()
//{
//	float f = 5.5;
//	//5.5
//	//(-1)^0 * 1.011*2^2
//	//s=0
//	//M=1.011
//	//E=2
//	return 0;
//}
//指针就是个变量，用来存放地址，地址唯一标识一块内存空间
//指针的大小式固定4/8个字节（32位平台/64位平台）
//指针有类型，指针的类型决定了指针的+-整数的步长，指针解引用操作时候的权限
//指针的运算
//void test(int arr[])
//{
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	const char* p = "abcdef";//"abcdef"是一个常量字符串,p里存的是a（首字符）的地址
//	//*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";//常量字符串（不能被修改）
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}//hehe
//	/*if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}*/
//	return 0;
//}
//指针数组  是数组，用来存放指针
//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整型指针的数组 - 指针数组
//	char* pch[5];//存放字符指针的数组 - 指针数组
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i]+j ));
		}
		printf("\n");
	}
	return 0;
}