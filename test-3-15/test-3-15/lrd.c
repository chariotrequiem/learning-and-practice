#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����ĵ���
//��ֵ���ã��������βκ�ʵ�ηֱ�ռ�в�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
//��ַ���ã�1.��ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ
//���ִ��η�ʽ�����ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���
//�β� - ��ʽ���� - ֻ���ں������õĹ����в�ʵ�����������������֮���������
//��ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ����
//���Զ��βε��޸Ĳ���ı�ʵ��
/*int Add(int, int);*///��������
#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf�����ķ���ֵΪ��ӡ����Ļ�ϵ��ַ�����
//	return 0;
//
//}
//int main()\
//{
//	int len = 0;
//	printf("%d\n", strlen("abc"));
//}
//void add(int* p);
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num = %d\n", num);
//	add(&num);
//	printf("num = %d\n", num);
//	add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right)/2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//�ҵ��˷����±꣬�Ҳ�������-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("��Ҫ���ң�\n");
//	scanf("%d", &k);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}	
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ� %d\n", ret);
//	}	
//	return 0;
//}
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("����һ�����:\n");
//	scanf("%d", &year);
//	if (1 == is_leap_year(year))
//	printf("%d ��������", year);
//	else
//	printf("%d �겻������", year);
//	return 0;
//}
//int is_prime(int n)//����������1��������������0
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	printf("����һ����:\n");
//	scanf("%d", &i);
//	if (is_prime(i) == 1)
//		printf("�����������");
//	else
//		printf("�������������\n");
//	return 0;
//}