#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("���������룺");
	scanf("%s", password);
	getchar();
	printf("��ȷ�ϣ�Y/N");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}
	return 0;
}
//int main()
//{
//	int ch = 0;
//	//ctrl + z��ֹͣѭ��
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
	//printf("��������");
	//scanf("%d", &day);
	//switch (day)//switch���ʽӦΪ���ͱ��ʽ
	//{
	//case 1://case��ӦΪ���ͳ������ʽ
	//	printf("����һ\n");
	//	break;
	//case 2:
	//	printf("���ڶ�\n");
	//	break;
	//case 3:
	//	printf("������\n");
	//	break;
	//case 4:
	//	printf("������\n");
	//	break;
	//case 5:
	//	printf("������\n");
	//	break;
	//case 6:
	//	printf("������\n");
	//	break;
	//case 7:
	//	printf("������\n");
	//	break;
	//default:
	//	printf("�������\n");
	//}
	//return 0;
	/*int a;
	printf("��������һ������");
	scanf("%d", &a);
	if (1 == a % 2)
		printf("����Ϊ����\n");
	else
		printf("����Ϊż��\n");
	return 0;*/

	/*while (a <= 100)
	{
		if (1 == a % 2)
		{
			printf("����Ϊ��%d\n", a);
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
	/*printf("����a =");
	scanf("%d", &a);
	if (a < 2)
		printf("���Ǵ�ɵ��\n");
	else
		printf("���Ǵ�ɵ��\n");*/
	/*return 0;*/
//}
	//int a = 2;
	//printf("a = %d\n", a);
