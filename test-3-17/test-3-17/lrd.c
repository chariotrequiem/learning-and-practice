#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//����һ������-�������-10��
//type_t  arr_name   [const_n]
//type_t��ָ�����Ԫ������
//const_n��һ���������ʽ������ָ������Ĵ�С
//����ĳ�ʼ����ָ�ڴ��������ͬʱ�����������һЩ�����ʼֵ����ʼ����
//1.strlen��sizeofû��ʲô����
//2.strlen�����ַ������ȵ�--ֻ������ַ����󳤶�--�⺯��--ʹ�õ���ͷ�ļ�
//3.sizeof������������顢���͵Ĵ�С--��λ���ֽ�--������
//������ʹ���±������ʵģ��±��0��ʼ
//�����С����ͨ������õ�
//��ά��������±겻��ʡ��
int main()
{
	//������������Ԫ�ص�ַ�����������⣩//����ĵ�ַ��������Ԫ�صĵ�ַ��ȫ��ͬ
	//1.sizeof(������) -- ��������ʾ�������飬sizeof�������������������������Ĵ�С����λ���ֽ�
	//2.&�������������������������飬&��������ȡ��������������ĵ�ַ
	int arr[] = { 1,2,3,4,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//printf("%p\n", arr);//00D6FA6C
	//printf("%p\n", &arr[0]);//00D6FA6C
	//printf("%d\n", *arr);//�����ã���Ԫ�ؾ���1
	printf("%p\n", arr);//��Ԫ�ص�ַ
	printf("%p\n", &arr[0]);//��Ԫ�ص�ַ
	printf("%p\n", &arr);//ȡ����������ĵ�ַ
	return 0;
}
//int main()
//{
//	if (1)
//		break;
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			//ÿһ��ð������
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}	
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//��arr������������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//arr�����飬������arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ  &arr[0]
//	//��������Ҫ�������ʱ����Ҫ�Ƚ����������������Բ�����ʽ����������
//    bubble_sort(arr, sz);//ð��������
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	/*int arr[3][4] = { {1,2,3},{4,5} };*/
//	//printf("%s", arr);
//	/*int arr[] = { 1,2,3,4 };*/
//	int arr[3][4] = { {1,2,3}, {4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//�������ڴ�������������ŵ�
//	}
//	return 0;
//}
//int main()
//{
//	//                   �±�0  1  2  3  4  5  6
//	//char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	//printf("%c\n", arr[3]);
//	/*int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c\n", arr[i]);
//	}*/
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//�����
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a','b' };//a,b,0,0,0
//	char arr3[5] = "ab";//a,b,/0,0,0
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//sizeof�������arr4��ռ�ռ�Ĵ�С��a,b,c,d,e,f,\0��
//	printf("%d\n", strlen(arr4));//strlen���ַ������ȣ���\0��ֹͣ(a,b,c,d,e,f)
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	char arr2[5];
//	return 0;
//}