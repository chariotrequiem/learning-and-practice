#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", password);
	getchar();
	printf("请确认：Y/N");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}
//int main()
//{
//	int ch = 0;
//	//ctrl + z会停止循环
//	//EOF - end of file -> -1
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
	/*int i = 1;
	while (i<=10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	return 0;*/
	//int day = 0;
	//printf("输入星期");
	//scanf("%d", &day);
	//switch (day)//switch表达式应为整型表达式
	//{
	//case 1://case后应为整型常量表达式
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//	printf("星期六\n");
	//	break;
	//case 7:
	//	printf("星期日\n");
	//	break;
	//default:
	//	printf("输入错误\n");
	//}
	//return 0;
	/*int a;
	printf("输入任意一个数：");
	scanf("%d", &a);
	if (1 == a % 2)
		printf("该数为奇数\n");
	else
		printf("该数为偶数\n");
	return 0;*/

	/*while (a <= 100)
	{
		if (1 == a % 2)
		{
			printf("奇数为：%d\n", a);
		}
		a++;
	}
	return 0;*/
	/*int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	return 0;
*/
	/*int a = 0;
	int b = 2;
	if(a == 1)
		if(b == 2)
			printf("hehe\n");
		else
			printf("haha\n");*/
	/*printf("输入a =");
	scanf("%d", &a);
	if (a < 2)
		printf("你是大傻瓜\n");
	else
		printf("我是大傻瓜\n");*/
	/*return 0;*/
//}
	//int a = 2;
	//printf("a = %d\n", a);
