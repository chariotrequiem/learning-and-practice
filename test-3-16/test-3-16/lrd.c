#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//使用递归需要注意栈溢出
int jump(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return jump(n - 1) + jump(n - 2);
}
int main()
{
	int n = 0;
	printf("键入跳台阶数\n");
	scanf("%d", &n);
	int m = jump(n);
	printf("一共有%d种跳法", m);
	return 0;
}
//int i = 1;//记录步数 
//void move(int n, char a, char c)//显示移动路径 
//{
//	printf("第%d步:把第%d个盘子%c--->%c\n", i++, n, a, c);
//}
//
//void Hanoi(int n, char a, char b, char c)//汉诺塔递归算法 
//{
//	if (n == 1) move(n, a, c);//如果只有一个盘子则直接从A柱移到C柱 
//	else {
//		Hanoi(n - 1, a, c, b);//把A柱n-1个盘子移到B柱
//		move(n, a, c);//把最后一个盘子从A柱移到C柱 
//		Hanoi(n - 1, b, a, c);//把B柱n-1个盘子移到C柱 
//	}
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);//输入盘子的个数 
//	Hanoi(num, 'A', 'B', 'C');
//	return 0;
//}

//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n-1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//程序调用自身的编程技巧称为递归
//递归的两个必要条件
//1.存在限制条件，当满足这个限制条件的时候，递归便不再继续
//2.每次递归调用之后越来越接近这个限制条件
//使用递归--将大事化小
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("")
//1+1+1+0=3
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素地址
//	printf("len = %d\n", len);
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//int main()
//{
//	printf("hehe%d\n", i);
//	main();
//	return 0;
//}
//#include"add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}