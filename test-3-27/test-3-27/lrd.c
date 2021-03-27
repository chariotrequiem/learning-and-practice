#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//调试的基本步骤
//1.发现程序错误的存在 2.以隔离、消除等方式对错误进行定位
//3.确定错误产生的原因 4.提出纠正错误的解决办法
//5.对错误程序予以改正，重新测试
//Debug通常称为调试版本，它包含调试信息，并且不做任何优化，便于程序员调试程序
//Release称为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优的。以便用户很好的使用。
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	/*system("pause");*/
//	return 0;
//}  

//调试快捷键
//F5 --- 启动调试 - 和F9配合使用（直接跳到断点处 -- 执行逻辑上的断点）
//F9  F9 -- 切换断点
//F10 -- 逐过程，通常用来处理一个过程，一个过程可以是一次函数调用，或者是一条语句
//F11 -- 逐语句,就是每次都执行一条语句，但是这个快捷键可以使我们的执行逻辑进入函数内部（这是最常用的）
//int main()
//{
//	//Debug版本下会死循环
//	//Release版本会优化，不会死循环
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//
//}
//调用堆栈窗口可以用来查看函数调用信息
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for(j = 1; j<=i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

int main()
{
	//通过调试可以看出arr[12]和i的地址相同
	//栈区默认先使用高地址处的空间，再使用低地址处的空间
	//数组随着下标的增长，地址由低到高变化
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p\n", &i);
	printf("%p\n", arr);
	system("pause");
	/*for (i = 0,  i <= 11; i++)
	{
		printf("hehe\n");
		arr[i] = 0;		
	}*///死循环
	return 0;
}


