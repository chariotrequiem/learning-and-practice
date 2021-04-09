#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//1.计数器写法
//2.递归写法
//3.指针 - 指针
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//strlen函数
//size_t strlen(const char* string)
//字符串以'\0'为结束标志，strlen函数返回的是在字符串中'\0'前面出现的字符个数（不包含'\0'）
//参数指向的字符串必须以'\0'结束
//字符串返回值为size_t，是无符号的，size_t == unsigned int
//int main()
//{
//	//int len = my_strlen("abcdef");
//	////错误示范
//	///*char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//int len = strlen(arr);*/
//	//printf("%d\n", len);
//	       //3        -         //6 = -3(无符号数)
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//strcpy函数
//char* strcpy(char* destination, const char* source);
//源字符串必须以'\0'结束
//会将源字符串中的'\0'拷贝到目标空间
//目标空间必须足够大，以确保能存放源字符串
//目标空间必须可变
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);//(目的地，源头)
//	printf("%s\n", arr1);
//	return 0;
//}

//strcat函数
//char* strcat(char* strDestination, const char* strSource)
//源字符串必须以'\0'结束
//目标空间必须有足够的大，能容纳下字符串的内容
//目标空间必须可以修改
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.找到字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//strcmp函数
//int strcmp(const char* string1, const char* string2)
//第一个字符串大于第二个，返回大于0的数，等于返回0，小于则反之
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//int main()
//{
//	char *p1 = "abcdef";
//	char *p2 = "sqwer";
//	int ret = strcmp(p1, p2);
//	//printf("%d", ret);
//	if (strcmp(p1, p2) > 0)
//	{
//		printf("p1 > p2");
//	}
//	if (strcmp(p1, p2) == 0)
//	{
//		printf("p1 == p2");
//	}
//	if (strcmp(p1, p2) < 0)
//	{
//		printf("p1<p2");
//	}
//	return 0;
//}

//strncpy函数
//char* strncpy(char* strDest, const char* strSource, size_t count)
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strncpy(arr1, arr2, 3);
//	printf("%s", arr1);
//	return 0;
//}

//strncat函数
//char* strncat(char* destnation, const char* source, size_t num)
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	//printf("%s\n", str1);
//	puts(str1);
//	return 0;
//}

//strncmp函数 - 字符串比较
//int strncmp(const char* str1, const char* str2, size_t count)