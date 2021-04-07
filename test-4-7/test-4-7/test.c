#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//字符串操作函数
#include<assert.h>
//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
int FindNum(int arr[3][3], int k, int *px, int *py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = {{1, 2, 3}, {4, 5, 6},{7, 8, 9}};
	int k = 7;
	int x = 3;
	int y = 3;
	//返回型参数
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标是：[%d][%d]\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}
//int is_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1. 在str1字符串中追加一个str1字符串
//	//strcat
//	//strncat
//	//strcat(str1, str1);//err
//	strncat(str1, str1, len1);//abcdefabcdef
//	//2. 判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr - 找子串的
//	char * ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "fabcde";
//	int ret = is_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//} 

//void reverse(char* left, char* right)
//{
//	assert(left != NULL); 
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
////三步翻转法
////abcdef
////ba fedc
////cdefab
//void left_move(char* arr, int k)//左旋函数
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr +  k- 1);//逆序左边
//	reverse(arr + k,arr + len - 1);//逆序右边
//	reverse(arr, arr + len -1);//逆序整体
//}
////1234 56
////4321 65
////561234
//void right_move(char* arr, int k)//右旋函数
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + len - k - 1);//逆序左边
//	reverse(arr + len - k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
//}
//int is_reverse(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	for (i = 0; i < len; i++)
//	{
//		right_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char  arr1[] = "abcdef";
//	char  arr2[] = "defabc";	
//	int ret = is_reverse(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s", arr);
//	return 0;
//}

//暴力求解法
//void left_move(char* arr, int k,int sz)
//{
//	int i = 0;
//	assert(arr != NULL);//断言指针
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < sz - 2; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + sz - 2) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	left_move(arr, k,sz);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int *ptr1 = (int*)(&aa + 1);
//	int *ptr2 = (int*)(*(aa + 1));
//	printf("%d, %d", *(ptr1 - 1), *(ptr2 - 1));//1, 6
//	return 0;
//}
//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//void print_arr(int arr[][], int row, int col)
//void print_arr(int* arr, int row, int col)
//void print_arr(int(*arr)[5], int row, int col)
//void print_arr(int(*arr)[3], int row, int col)
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr(arr, 3, 5);
//	return 0;
//}
//int main()
//{
//	char str1[] = "hello bit";
//	char str2[] = "hello bit";
//	char* str3 = "hello bit";
//	char* str4 = "hello bit";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are same\n");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	return 0;
//}
//int main()
//{
//	int *p = NULL;
//	int arr[10] = { 0 };
//	return 0;
//}
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e == 120)
//							printf("a = %d,b = %d,c = %d,d = %d,e = %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int k = 0;
//	for (k = 'a'; k <= 'd'; k++)
//	{
//		if ((k != 'a') + (k == 'c') + (k == 'd') + (k != 'd') == 3)
//		{
//			printf("凶手就是：%c\n", k);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10 - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000] = { 0 };
//	//有符号char的范围 -128 --- 127
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 ...-128 127 126 ....3 2 1 0
//	printf("%d\n", strlen(a));
//	return 0;
//}

//int main()
//{
//	//unsigned char - 1个字节 - 8bit位  （0-255）
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;//整型提升
//	printf("%d, %d", a + b, c);
//	return 0;
//}


