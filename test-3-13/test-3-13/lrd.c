#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>//system
#include <string.h>//strcmp
int main()
{
	char input[20] = { 0 };//存储数据
						   //关机
						   //system（） - 专门用来执行系统命令的
	system("shutdown -s -t 120");//关机
again:
	printf("请注意，你的电脑将在一分钟内关机，输入：我是猪，取消关机\n");
	scanf("%s", input);//%s - 字符串
	if (strcmp(input, "我是猪") == 0)//判断input中放入的是不是我是猪
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
//int main()
//{
//again:
//	printf("hello world\n");
//	goto again;//goto语句最常用的用法就是终止程序在某些深度嵌套的结构的处理过程，例如一次跳出两层或多层循环
//	return 0;
//}
//void menu()
//{
//	printf("******* 好玩的猜数字游戏 ***********\n");
//	printf("******* 1.play   0.exit*************\n");
//	printf("************************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;//生成一个随机数
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("请猜数字： ");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	//用时间戳来设置随机数生成起点
//	srand((unsigned int)time(NULL));
//	//time_t  time(time_t*timer)
//	//时间戳（当前计算机的时间-计算机的起始时间）（1970.1.1.0：0：0） = （xxxx）秒
//	do 
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误,请重新选择\n");
//			break;
//		}
//	} 
//	while (input);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	int arr[10] = {0};
//	printf("请输入10个数：\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("请输入想要查找的数：\n");
//	scanf("%d", &k);
//	int left = 0;//左下标
//	int right = 9;//右下标
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//每次循环打印一行信息
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);//%-2d向左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	int max = 0;//最大值
//	int i = 0;
//	printf("请输入十个整数：\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];//为max赋值数组中第一个数的值
//	for (i = 0; i <10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值为%d\n", max);
//	return 0;
//}