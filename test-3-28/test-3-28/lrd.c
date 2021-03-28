#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//void my_strcpy(char* dest,char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//		/*src++;
//		dest++;*/
//	}
//	*dest = *src;//拷贝'\0'
//}
//改进：
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//再改进：
//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//再改进：
//#include<assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//再改进：
//#include<assert.h>
//char*  my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//strcpy - 字符串拷贝
//	char arr1[] = "###############";
//	char arr2[] = "bat";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//#include<assert.h>
//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);//保证指针有效性
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}