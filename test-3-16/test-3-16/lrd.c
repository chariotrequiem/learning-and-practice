#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ʹ�õݹ���Ҫע��ջ���
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
	printf("������̨����\n");
	scanf("%d", &n);
	int m = jump(n);
	printf("һ����%d������", m);
	return 0;
}
//int i = 1;//��¼���� 
//void move(int n, char a, char c)//��ʾ�ƶ�·�� 
//{
//	printf("��%d��:�ѵ�%d������%c--->%c\n", i++, n, a, c);
//}
//
//void Hanoi(int n, char a, char b, char c)//��ŵ���ݹ��㷨 
//{
//	if (n == 1) move(n, a, c);//���ֻ��һ��������ֱ�Ӵ�A���Ƶ�C�� 
//	else {
//		Hanoi(n - 1, a, c, b);//��A��n-1�������Ƶ�B��
//		move(n, a, c);//�����һ�����Ӵ�A���Ƶ�C�� 
//		Hanoi(n - 1, b, a, c);//��B��n-1�������Ƶ�C�� 
//	}
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);//�������ӵĸ��� 
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
//�����������ı�̼��ɳ�Ϊ�ݹ�
//�ݹ��������Ҫ����
//1.���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//2.ÿ�εݹ����֮��Խ��Խ�ӽ������������
//ʹ�õݹ�--�����»�С
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
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�ص�ַ
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