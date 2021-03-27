#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int ret = 1;
	int n = 0;
	printf("输入n=");
	scanf("%d", &n);//%d后键入\n的话，会运行成空白
	for (i=1;i<=n;i++)
	{
		ret = ret * i;
	}
	printf("ret = %d", ret);
	return 0;
}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("第%d个hehe\n", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int z = 0;
//	for (; i < 10; i++)
//	{
//		int j = 0;
//		for (; j < 10; j++)
//		{
//			z = i*10+j;
//			printf("第%d个hehe\n", z);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)//判断部分若被省略则判断条件就是： 恒为真
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//for(表达式1；表达式2；表达式3)
//	//表达式1为初始化部分，用于初始化循环变量
//	//表达式2为条件判断部分，用于判断循环时候终止
//	//表达式3为调整部分，用于循环条件的调整
//	for (i=1; i<11; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main() //输入0-9间数字，输出0-9数字(只会输出数字字符)
////输入其他非数字字符，无输出
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认：Y/N");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}