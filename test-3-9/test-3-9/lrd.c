#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int ret = 1;
	int n = 0;
	printf("����n=");
	scanf("%d", &n);//%d�����\n�Ļ��������гɿհ�
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
//		printf("��%d��hehe\n", i);
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
//			printf("��%d��hehe\n", z);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)//�жϲ�������ʡ�����ж��������ǣ� ��Ϊ��
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//for(���ʽ1�����ʽ2�����ʽ3)
//	//���ʽ1Ϊ��ʼ�����֣����ڳ�ʼ��ѭ������
//	//���ʽ2Ϊ�����жϲ��֣������ж�ѭ��ʱ����ֹ
//	//���ʽ3Ϊ�������֣�����ѭ�������ĵ���
//	for (i=1; i<11; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main() //����0-9�����֣����0-9����(ֻ����������ַ�)
////���������������ַ��������
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
//	printf("���������룺");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}