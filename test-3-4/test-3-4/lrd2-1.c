#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
	//const-������
	//numΪconst���εĳ�����,���ʻ��Ǳ������������˳����ԡ�
	/*const int num = 4;
	printf("%d\n", num);*/
	/*const int n = 10;*/
	//int arr[n] = {0};
	/*n = 20;
	return 0;*/
//}
//3.#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}
//4.ö�ٳ���
//ö�ٹؼ���-enum
//enum SEX
/*{
	MALE,
	FEMALE,
	SECRET
};*///ö�ٳ������ɸı�
//MALE,FEMALE,SECRET--ö�ٳ���
//int main()
//{
//	enum SEX s = MALE;
//	enum SEX b = FEMALE;
//	printf("%d\n%d\n", s, b);
//	return 0;
//}
//�ַ���+ת���ַ�+ע��
//�ַ�������˫����������ַ�����--"amxxmkmk"
//int main()
//{
//	char arr1[] = "abc";//����
//	//"abc"--'a' 'b' 'c' '\0'--(\0���ַ��������ı�־)
//	//�ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ�������
//	char arr2[] = {'a', 'b', 'c', 0};
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢���Ƕ����ơ�ASCII ���루a-97��A-65��ASCII��ֵ
//	//'\0' - 0; 'a' - 97;
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//a,b,c,\0Ϊ�ַ���������־���㳤��
//	char arr2[] = {'a', 'b', 'c'};
//	printf("%d\n", strlen(arr1));//strlen - string length-�����ַ�������
//	printf("%d\n", strlen(arr2));//�����ֵ��Ѱ��\0
//	return 0;
//}//���Ϊ��һ����3���ڶ���ӦΪ���ֵ����������ͬ�������ͬ��
//int main()
//\nΪת���ַ�������
//{
//	printf("abc\n");
//	return 0;
//}
//int main()
//{
//	printf("c:\��test\31");
//	//\t--ˮƽ�Ʊ��
//	return 0;
//}
//���õ�ת���ַ�1.// -- ���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з���2./'���ڱ�ʾ�ַ�����'
//int main()
//{
////	/*printf("%d\n", strlen("c:\test\32\test.c"));*/
//	printf("%c\n", '\132');
//	printf("%c\n", '\x61');
//	//\ddd, ddd��ʾ1~3���˽��Ƶ�����
//	//\32 -- �������˽������֡� 32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32���˽��ƣ� --> ʮ���� 26 -> ��ΪASCII��ֵ������ַ�
//	//\xdd, dd��ʾ2��ʮ����������
//	return 0;
//}
//�ַ�0-9��ASCII��ֵΪ48-57���ַ�a-z��ASCII��ֵΪ97-122���ַ�A-Z��ASCII��ֵΪ65-90
//if���
//int main()
//{
//	int input = 0;
//	printf("�ú�ѧϰ(1 or 0)");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("�ؼ�������\n");
//	return 0;
//}
//ѭ�����(while���)
//int main()
//{
//	int line = 0;
//	printf("�ú�ѧϰ\n");
//	while (line <= 20000) 
//	{
//		printf("��һ�д���: %d\n", line);
//			line++;
//
//	}
//	if(line>=20000)
//	printf("�õ���offer");
//	return 0;
//}
//�������Զ��庯��
//ADD(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	sum = ADD(num1, num2);
//		printf("sum = %d\n", sum);
//	return 0;
//}
//����--һ����ͬ����Ԫ�صļ���
//���鶨�� int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ���������飬����10��Ԫ��
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}//��ӡ����������Ԫ��
//	/*printf("%d\n", arr[4]);*///���±�ķ�ʽ����Ԫ�أ�arr[�±�]�����±�Ĭ�ϴ�0��ʼ��1���±���0��2���±���1
//	char ch[20];
//	float arr2[5];
//	return 0;
//}
//����������,"/"ȡ��������"%"ȡ��������5/2��2��5%2��1
//int main()
//{
//	int a = 5%2;
//	printf("%d", a);
//	return 0;
//}
//(�����ƣ�λ����
//& ��λ��
//| ��λ��
//^ ��λ������--��Ӧ�Ķ�����λ��ͬ����Ϊ0����Ӧ�Ķ�����λ���죬��Ϊ1��
//��ֵ����
//= ��ֵ  == �ж����
//a = a+10  ��  a += 10��ȫ���
//���ϸ�ֵ��
//+= -= *= /= >= <= &= ^= |=
//��Ŀ������
//'!'�߼������������Ϊ�٣��ٱ�Ϊ�棩;  '-','+';  
//'sizeof'�������/������ռ�ռ�ô�С����λ���ֽڣ�sizeof �Ա�������ʡ��(),����a����int ���У�
//˫Ŀ������
//��Ŀ������