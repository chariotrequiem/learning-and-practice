#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>//system
#include <string.h>//strcmp
int main()
{
	char input[20] = {0};//存储数据
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
//	//a^a=0;b^0=b
//	int i = 0;
//	int arr[i];
//	printf("输入数组")
//	scanf("")
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("数字为：%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	for (i = 0; i < sz; i++)
//	{
//		//统计arr[i]在arr数组中出现了几次
//		int count = 0;//计数器
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("数字为： %d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	//交换两个整型变量
//	int a = 0;
//	int b = 0;
//	printf("交换前： a= b=\n");
//	scanf("%d%d", &a, &b);
//	//^为按（二进制）位异或
//	//相同为0，相异为1
//	a = a^b;//a=3（011--110）；b=5（101--101）
//	b = a^b;//a（110--110）；b（101--011）
//	a = a^b;//a（110--101）；b（011--011）
//	printf("交换后： a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("交换前： a= b=\n");
//	//整型溢出问题
//	//int - 4个字节 - 32个bit位
//	//INT_MAX; 2147483647
//	scanf("%d%d", &a, &b);
//	a = a + b;//将a+b赋值为a，b还是原来的b
//	b = a - b;//b得到的是原来的a
//	a = a - b;//a得到的是原来的b
//	printf("交换后： a=%d b=%d\n", a, b);
//	return 0;
//}