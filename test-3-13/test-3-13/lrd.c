#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>//system
#include <string.h>//strcmp
int main()
{
	char input[20] = { 0 };//�洢����
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
//again:
//	printf("hello world\n");
//	goto again;//goto�����õ��÷�������ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ�����̣�����һ�������������ѭ��
//	return 0;
//}
//void menu()
//{
//	printf("******* ����Ĳ�������Ϸ ***********\n");
//	printf("******* 1.play   0.exit*************\n");
//	printf("************************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;//����һ�������
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("������֣� ");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	//��ʱ���������������������
//	srand((unsigned int)time(NULL));
//	//time_t  time(time_t*timer)
//	//ʱ�������ǰ�������ʱ��-���������ʼʱ�䣩��1970.1.1.0��0��0�� = ��xxxx����
//	do 
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����,������ѡ��\n");
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
//	printf("������10������\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("��������Ҫ���ҵ�����\n");
//	scanf("%d", &k);
//	int left = 0;//���±�
//	int right = 9;//���±�
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//ÿ��ѭ����ӡһ����Ϣ
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);//%-2d�������
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	int max = 0;//���ֵ
//	int i = 0;
//	printf("������ʮ��������\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];//Ϊmax��ֵ�����е�һ������ֵ
//	for (i = 0; i <10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("���ֵΪ%d\n", max);
//	return 0;
//}