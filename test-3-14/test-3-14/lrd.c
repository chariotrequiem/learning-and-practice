#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Swap(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d b = %d\n", a, b);
	Swap(&a, &b);
	printf("a = %d b = %d", a, b);
	return 0;
}
//float get_max(float x, float y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	float a = 0;
//	float b = 0;
//	printf("输入两个数,比较大小\n");
//	scanf("%f%f", &a, &b);
//	float max = get_max(a, b);
//	printf("max = %f\n", max);
//	return 0;
//}
//memset
//memory - 内存 - 设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'*',5);
//	printf("%s\n", arr);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	//strcpy - string copy - 字符串拷贝(会将\0也复制)
//	//strlen - string length - 字符串长度有关
//	char arr1[20] = "bit";
//	char arr2[20] = "#########";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//}