#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	double sum1 = 0.0;
	double sum2 = 0.0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i+=2)
	{
		sum1 += 1.0/i;
	}
	for (i = 2; i <= 100; i += 2)
	{
		sum2 += -(1.0 / i);
	}
	sum = sum1 + sum2;
	printf("sum = %lf\n", sum);
	return 0;
}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if(i/10 == 9)
//			count++;
//	}
//	printf("count = %d", count);
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i=101; i <= 200; i+=2)//ż��������Ϊ����
//	{
//		int j = 0;
//		for (j=2; j<=sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i<=200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ������ֻ�ܱ�1�뱾��������
//		//�����жϹ���
//		//1.�Գ���
//		//����2 -> i-1����
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i += 4)
//	{
//		//�ж�����Ĺ���
//		//1.�ܱ�4�������Ҳ��ܱ�100����������
//		//2.�ܱ�400����������
//		/*if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d ", i);
//		}*/
//		if((i%4 == 0 && i%100 != 0)||(i%400 == 0))
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	printf("������������");
//	scanf("%d %d", &m, &n);
//	while (r=m%n)//շת�����
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)//%Ϊi����3������
//			printf("%d ", i);
//	}
//	return 0;
//}
//int func(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("����������");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		func(&a, &b);
//	}
//	if (a < c)
//	{
//		func(&a, &c);
//	}
//	if (b < c)
//	{
//		func(&b, &c);
//	}
//	printf("%d %d %d ", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("����������");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d ", a, b, c);//��a�з����ֵ��b�з��м�ֵ��c�з���Сֵ
//	return 0;
//}
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//int main()
//{
//	int c = func(1);
//	printf("%d\n", c);
//	return 0;
//}