#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//1.������д��
//2.�ݹ�д��
//3.ָ�� - ָ��
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
//strlen����
//size_t strlen(const char* string)
//�ַ�����'\0'Ϊ������־��strlen�������ص������ַ�����'\0'ǰ����ֵ��ַ�������������'\0'��
//����ָ����ַ���������'\0'����
//�ַ�������ֵΪsize_t�����޷��ŵģ�size_t == unsigned int
//int main()
//{
//	//int len = my_strlen("abcdef");
//	////����ʾ��
//	///*char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//int len = strlen(arr);*/
//	//printf("%d\n", len);
//	       //3        -         //6 = -3(�޷�����)
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

//strcpy����
//char* strcpy(char* destination, const char* source);
//Դ�ַ���������'\0'����
//�ὫԴ�ַ����е�'\0'������Ŀ��ռ�
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
//Ŀ��ռ����ɱ�
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);//(Ŀ�ĵأ�Դͷ)
//	printf("%s\n", arr1);
//	return 0;
//}

//strcat����
//char* strcat(char* strDestination, const char* strSource)
//Դ�ַ���������'\0'����
//Ŀ��ռ�������㹻�Ĵ����������ַ���������
//Ŀ��ռ��������޸�
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.�ҵ��ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
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

//strcmp����
//int strcmp(const char* string1, const char* string2)
//��һ���ַ������ڵڶ��������ش���0���������ڷ���0��С����֮
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
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

//strncpy����
//char* strncpy(char* strDest, const char* strSource, size_t count)
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strncpy(arr1, arr2, 3);
//	printf("%s", arr1);
//	return 0;
//}

//strncat����
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

//strncmp���� - �ַ����Ƚ�
//int strncmp(const char* str1, const char* str2, size_t count)