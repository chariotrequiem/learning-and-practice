#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//strncmp - �ַ����Ƚ�
//int strncmp(const char* string1, const char* string2, size_t count)
//�Ƚϵ���������ַ���һ������һ���ַ�����������num���ַ���ȫ���Ƚ���
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	printf("%d\n", strncmp(p1, p2, 3));
//	return 0;
//}

//strstr - �����ַ���
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
//			return cur;//�ҵ��Ӵ�
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abcdef";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
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
//		printf("�Ӵ�������");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strtok
//char* strtok(char* str, const char* sep)
//sep������һ���ַ����������������ָ������ַ�����
// ��һ������ָ��һ���ַ�������������0��������sep�ַ�����һ�����߶���ָ����ָ�ı��
//strtok�����ҵ�str�е���һ����ǣ���������'\0'��β������һ��ָ�������ǵ�ָ�롣
//��ע��strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ�����������ҿ��޸ģ�
//strtok�����ĵ�һ��������ΪNULL���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ��
//strtok�����ĵ�һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
//����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ��
//int main()
//{
//	char arr[] = "sjijdkokqs@kcokeokc.teh";
//	char *p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//�и�buf�е��ַ���
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
//���ش����룬����Ӧ�Ĵ�����Ϣ
//int main()
//{
//	//������ - ������Ϣ
//	//0      -  No error
//	//1      -  Operation not permitted
//	//2      -  No such file or directory
//	//errno��һ��ȫ�ֵĴ�����ı���
//	//��c���ԵĿ⺯����ִ�й����з����˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬���Ƶ�errno��
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//	//���ļ�
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

//�ַ����ຯ��
//#include<ctype.h>
//int main()
//{
//	//char ch = 'a';
//	//�ַ����ຯ��
//	//int ret = islower(ch);
//	/*char ch = '0';
//	int ret = isdigit(ch);
//	if (ret == 4)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}*/
//	//�ַ�ת������
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

//memcpy����
//c���Թ涨memcpyֻҪ�����ص����ڴ濽���Ϳ���,����ʤ���ص�����
//void* memcpy(void * destination, const void * src, size_t num );
//ʵ��memcpy����
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
//	//memmove����
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


//memmove���� - �����ڴ��ص�������
//void* memmove(void * destination, const void * src, size_t count );
//void* my_memmove(void * dest, const void * src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//ǰ->��
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}

//memcmp - �ڴ�Ƚ�
//int memcmp(const void* ptr1, const void* ptr2, size_t num)
//�Ƚϴ�ptr1��ptr2ָ�뿪ʼ��num���ֽ�
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);
//	return 0;
//}

//memset���� - �ڴ����� - �ĵĵ�λ���ֽ�
int main()
{
	/*char arr[10] = "";
	memset(arr, '#', 10);*/
	int arr[10] = { 0 };
	memset(arr, 1, 40);
	return 0;
}