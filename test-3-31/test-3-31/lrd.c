#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	//����һ�������Ƹ�����v���Ա�ʾ���������ʽ��
//	//��-1��^S*M*2^E
//	//��-1��^S��ʾ����λ����s=0��VΪ��������s=1��VΪ����
//	//M��ʾ��Ч���֣����ڵ���1��С��2
//	//2^E��ʾָ��λ
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n��ֵΪ: %d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	return 0;
//}
//int main()
//{
//	float f = 5.5;
//	//5.5
//	//(-1)^0 * 1.011*2^2
//	//s=0
//	//M=1.011
//	//E=2
//	return 0;
//}
//ָ����Ǹ�������������ŵ�ַ����ַΨһ��ʶһ���ڴ�ռ�
//ָ��Ĵ�Сʽ�̶�4/8���ֽڣ�32λƽ̨/64λƽ̨��
//ָ�������ͣ�ָ������;�����ָ���+-�����Ĳ�����ָ������ò���ʱ���Ȩ��
//ָ�������
//void test(int arr[])
//{
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	const char* p = "abcdef";//"abcdef"��һ�������ַ���,p������a�����ַ����ĵ�ַ
//	//*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";//�����ַ��������ܱ��޸ģ�
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}//hehe
//	/*if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}*/
//	return 0;
//}
//ָ������  �����飬�������ָ��
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ������� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i]+j ));
		}
		printf("\n");
	}
	return 0;
}