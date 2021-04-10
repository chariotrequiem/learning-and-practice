#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//strncmp - 字符串比较
//int strncmp(const char* string1, const char* string2, size_t count)
//比较到出现另个字符不一样或者一个字符串结束或者num个字符串全部比较完
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	printf("%d\n", strncmp(p1, p2, 3));
//	return 0;
//}

//strstr - 查找字符串
//char* strstr(const char* string, const char* strCharset)
//my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (*p2 == '\0')
//	{
//		return p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1 == *s2) && *s1 && *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abcdef";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//		else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//int main()
//{
//	char* p1 = "abcdeffhhi";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strtok
//char* strtok(char* str, const char* sep)
//sep参数是一个字符串，定义了用作分隔符的字符集合
// 第一个参数指定一个字符串，它包含了0个或多个由sep字符串中一个或者多个分隔符分割的标记
//strtok函数找到str中的下一个标记，并将其用'\0'结尾，返回一个指向这个标记的指针。
//（注：strtok函数会改变被操作额字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容且可修改）
//strtok函数的第一个参数不为NULL，函数将找到str中第一个标记，strtok函数将保存他在字符串中的位置
//strtok函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记
//如果字符串中不存在更多的标记，则返回NULL指针
//int main()
//{
//	char arr[] = "sjijdkokqs@kcokeokc.teh";
//	char *p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf中的字符串
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	/*char* ret = strtok(arr,p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//	return 0;
//}

#include<errno.h>
//streror
//char* strerror(int errnum) 
//返回错误码，所对应的错误信息
//int main()
//{
//	//错误码 - 错误信息
//	//0      -  No error
//	//1      -  Operation not permitted
//	//2      -  No such file or directory
//	//errno是一个全局的错误码的变量
//	//当c语言的库函数在执行过程中发生了错误，就会把对应的错误码，复制到errno中
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

//字符分类函数
//#include<ctype.h>
//int main()
//{
//	//char ch = 'a';
//	//字符分类函数
//	//int ret = islower(ch);
//	/*char ch = '0';
//	int ret = isdigit(ch);
//	if (ret == 4)
//	{
//		printf("是数字\n");
//	}
//	else
//	{
//		printf("不是数字\n");
//	}*/
//	//字符转换函数
//	//char ch = tolower('Q');
//	//char p = toupper('a');
//	//putchar(p);
//	//putchar(ch);
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//memcpy函数
//c语言规定memcpy只要处理不重叠的内存拷贝就可以,不能胜任重叠拷贝
//void* memcpy(void * destination, const void * src, size_t num );
//实现memcpy函数
//void* my_memcpy(void * dest, const void * src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	my_memcpy(arr + 2, arr, 20);
//	//memmove函数
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct stu arr1[] = { { "zhangsan", 20 },{ "lisi", 50 } };
//	struct stu arr2[3] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	strcpy(arr2, arr1);
//	memcpy(arr2, arr1, sizeof(arr1));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr2[i]);
//	}
//	return 0;
//}
//struct stu
//{
//	char name[20];
//	int age;
//}s;
//int main()
//{
//	struct stu arr1[] = { { "zhangsan", 20 },{ "lisi", 50 } };
//	struct stu arr2[3] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}


//memmove函数 - 处理内存重叠的现象
//void* memmove(void * destination, const void * src, size_t count );
//void* my_memmove(void * dest, const void * src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}

//memcmp - 内存比较
//int memcmp(const void* ptr1, const void* ptr2, size_t num)
//比较从ptr1和ptr2指针开始的num个字节
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);
//	return 0;
//}

//memset函数 - 内存设置 - 改的单位是字节
int main()
{
	/*char arr[10] = "";
	memset(arr, '#', 10);*/
	int arr[10] = { 0 };
	memset(arr, 1, 40);
	return 0;
}