#define _CRT_SECURE_NO_WARNINGS 1
//����Դ�ļ��ĵ�һ�У���ֹ��������
#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	//scanf��c�����ṩ�ģ�scanf_s��VS�������ṩ�ģ�ֻ��VS�ܹ�ʶ��
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}