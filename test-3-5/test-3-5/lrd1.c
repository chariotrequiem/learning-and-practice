#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>//system
#include <string.h>//strcmp
int main()
{
	char input[20] = {0};//�洢����
	//�ػ�
	//system���� - ר������ִ��ϵͳ�����
	system("shutdown -s -t 120");//�ػ�
again:
	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ������룺������ȡ���ػ�\n");
	scanf("%s", input);//%s - �ַ���
	if (strcmp(input, "������") == 0)//�ж�input�з�����ǲ���������
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
//	printf("��������")
//	scanf("")
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("����Ϊ��%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		//ͳ��arr[i]��arr�����г����˼���
//		int count = 0;//������
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
//			printf("����Ϊ�� %d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	//�����������ͱ���
//	int a = 0;
//	int b = 0;
//	printf("����ǰ�� a= b=\n");
//	scanf("%d%d", &a, &b);
//	//^Ϊ���������ƣ�λ���
//	//��ͬΪ0������Ϊ1
//	a = a^b;//a=3��011--110����b=5��101--101��
//	b = a^b;//a��110--110����b��101--011��
//	a = a^b;//a��110--101����b��011--011��
//	printf("������ a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("����ǰ�� a= b=\n");
//	//�����������
//	//int - 4���ֽ� - 32��bitλ
//	//INT_MAX; 2147483647
//	scanf("%d%d", &a, &b);
//	a = a + b;//��a+b��ֵΪa��b����ԭ����b
//	b = a - b;//b�õ�����ԭ����a
//	a = a - b;//a�õ�����ԭ����b
//	printf("������ a=%d b=%d\n", a, b);
//	return 0;
//}