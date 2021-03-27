#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	for (i = 0;i<10;i++)
	{
		if (i = 5)
			printf("%d", i);
	}
	return 0;
}










//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return(a+ b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//		
//
//	}
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//不能用==来比较两个字符串是否相等，应该使用一个库函数 - strcmp
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，请退出\n");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to beijing!";
//	char arr2[] = "###################";
//	/*int sz = sizeof(arr1)/sizeof(arr1[0]);*/
//	/*int right = sz - 1;*/
//	int right = strlen(arr1) - 1;//strlen字符串长度，不包括\0
//	int left = 0;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep (1000);//休息一秒
//		system("cls");//执行系统命令函数 - cls - 清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	printf("想要查找：");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
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
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标为：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n<= 10; n++)
//		{
//			ret = ret * n;
//			sum = sum + ret;
//		}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n=1;n<=10;n++)
//	{
//		ret = 1;//ret要归一，否则ret的值将是下面循环累乘的值
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}