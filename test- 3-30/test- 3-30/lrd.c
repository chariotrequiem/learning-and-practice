#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;//4
//	float f = 10.0;//4
//	short a = 10;
//	short int a = 10;
//
//	return 0;
//}

//void test(void)//�������void��ʾ�����޲���
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test(100);
//	return 0;
//}
//int main()
//{
//	//����������˵��������ڴ��е��Ƕ����Ʋ��루�����ϵͳ�У���ֵһ���ò�������ʾ�ʹ洢��
//	//ʹ�ò�����Խ�����λ����ֵ��ͳһ������ͬʱ���ӷ��ͼ���Ҳ����ͳһ������
//	int a = 10;//4���ֽ�
//	//00000000000000000000000000001010  --  ԭ�루����ԭ��������ͬ��
//	//00000000000000000000000000001010  --  ����
//	//00000000000000000000000000001010  --  ����
//	int b = -10;
//	//10000000000000000000000000001010  --  ԭ��
//	//11111111111111111111111111110101  --  ����(ԭ�������λȡ��)
//	//11111111111111111111111111110110  --  ���루����+1��
//	return 0;
//}
//��ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĸߵ�ַΪ�ϣ������ݵĸ�λ���������ڴ�ĵ͵�ַλ��
//С�ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĵ͵�ַΪ�ϣ������ݵĸ�λ���������ڴ�ĸߵ�ַλ��
//���С�ˣ����������ֽڵ�˳��
//int main()
//{
//	int a = 20;
//	return 0;
//}
//int main()
//{
//	int a = 0x22334455;
//	return 0;
//}
//int main()
//{
//	//дһ�δ��룬�жϵ�ǰ�������ֽ�����ʲô
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//�Ľ���
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//�ټ�
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//ָ�����͵����壺
//1.ָ�����;�����ָ������ò������ܷ��ʼ����ֽڣ�char*p��*p������1���ֽڣ�int*p��*p������4���ֽ�
//2.ָ�����;�����ָ��+1��-1���ӵĻ��߼����Ǽ����ֽڣ�char*p��p+1����һ���ֽڣ�int*p��p+1����һ�����ͣ�4���ֽ�
//int main()
//{
//	int a = 0x11223344;
//	int* p = &a;
//	*p = 0;
//	return 0;
//}
//int main()
//{
//	char a = -1;//Ĭ�����з��ŵ�
//	//10000000000000000000000000000001(-1��ԭ��)
//	//11111111111111111111111111111110�����룺����λ���䣬����λ��λȡ����
//	//11111111111111111111111111111111�����룺����+1��
//	//11111111��char����ֻ�ܴ�8��bitλ��
//	//��������Ϊ11111111111111111111111111111111
//	signed char b = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//��������Ϊ11111111111111111111111111111111
//	unsigned char c = -1;
//	//10000000000000000000000000000001
//	//01111111111111111111111111111110
//	//01111111111111111111111111111111
//	//��������Ϊ00000000000000000000000011111111���޷�������λ��0��
//	printf("a=%d,b=%d,c=%d", a, b, c);//-1 -1 255
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 - ����
//	//10000000
//	//11111111111111111111111110000000 - ����
//	printf("%u\n", a);
//	//%d - ��ӡʮ�����з�������  
//	//%u - ��ӡʮ�����޷�������
//	return 0;
//}
//�з��ŵ�char�ķ�Χ��-128--127��
//�޷��ŵ�char�ķ�Χ��0--255��
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	//10000000 00000000 00000000 00010100
//	//11111111 11111111 11111111 11101011
//	//11111111 11111111 11111111 11101100 - ����
//	unsigned int j = 10;
//	//00000000 00000000 00000000 00001010 - ԭ������
//	//11111111 11111111 11111111 11110110 - ����֮��
//	//11111111 11111111 11111111 11110101 - ����
//	//10000000 00000000 00000000 00001010 - ԭ��
//	printf("%d\n", i + j);
//	return 0;
//}
#include<Windows.h>
//int main()
//{
//	unsigned int i;//�޷����������е���������0
//	for (i = 9; i >= 0; i--)//��ѭ��
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//		//printf("%d\n", a[i]);
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//���������������float��double��long double���͡���������ʾ�ķ�Χ��float.h
int main()
{
	double d = 1E10;
	printf("%lf\n", d);
	return 0;
}
