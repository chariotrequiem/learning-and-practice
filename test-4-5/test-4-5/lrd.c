#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//qsort����
//��һ���������������������Ԫ�ص�ַ
//�ڶ���Ԫ�أ������������Ԫ�ظ���
//������Ԫ�أ������������ÿ��Ԫ�ش�С - ��λ���ֽ�
//���ĸ�Ԫ�أ�����ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ - �������ʹ�����Լ�ʵ��
//            ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
//��������
void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
////����qsort������дð��������
void bubble_sort(void* base, int sz, int width, int(*cmp)(void *e1, void *e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
			{
				//����
				swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
			}
		}
	}
}
struct stu 
{
	char name[20];
	int age;
};
//int cmp_stu_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
int cmp_stu_name(const void * e1, const void * e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ���ֱ����<>=���Ƚϣ�Ӧ����strcmp����
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
//void test()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}
//void test1()
//{
//	struct stu s[3] = { {"zhangsan", 20},{"lisi", 10},{"wangwu", 50} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]),cmp_stu_age );
//}
void test2()
{
	struct stu s[3] = { { "zhangsan", 20 },{ "lisi", 10 },{ "wangwu", 50 } };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_name);
}
////������
int main()
{
	//test();
	//test1();
	test2();
	return 0;
}
//int main()
//{
//	һά����
//	����������Ԫ�صĵ�ַ��������������
//	1.sizeof(������) - ��������ʾ��������
//	2.&������ - ��������ʱ��ʾ�������� - &������ȡ���ľ�������ĵ�ַ
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));       //sizeof(������) - ������������ܴ�С - ��λ���ֽ� - 16
//	printf("%d\n", sizeof(a+0));     //�����������ʾ��Ԫ�ص�ַ��a+0��������Ԫ�ص�ַ - 4/8
//	printf("%d\n", sizeof(*a));      //4 - ��������ʾ��Ԫ�ص�ַ�� *a������Ԫ�أ�sizeof(*a)����4
//	printf("%d\n", sizeof(a+1));     //4/8 - ��������ʾ��Ԫ�ص�ַ��a+1 ��ʾ�ڶ���Ԫ�ص�ַ�� ��ַ��С��4/8���ֽ�
//	printf("%d\n", sizeof(a[1]));    //4 - �ڶ���Ԫ�ش�С
//	printf("%d\n", sizeof(&a));      //4/8  &aȡ����������ĵ�ַ��������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(*&a));     //16  &aȡ����������ĵ�ַ������ĵ�ַ�����÷��ʵľ������飬 sizeof����ľ�������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(&a+1));    //4/8   &aȡ�����������ַ��&a+1ȡ����������һ������ĵ�ַ������һ����ַ��4/8
//	printf("%d\n", sizeof(&a[0]));   //4/8  &a[0]   ȡ�����ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0]+1)); //4/8  &a[0]+1 ȡ�����ǵڶ���Ԫ�صĵ�ַ
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));      //6   sizeof�����������Ĵ�С 6*1 = 6�ֽ�
//	printf("%d\n", sizeof(arr+0));    //4/8 �����������ʾ��Ԫ�ص�ַ��a+0��������Ԫ�ص�ַ - 4/8
//	printf("%d\n", sizeof(*arr));     //1   ��������ʾ��Ԫ�ص�ַ�� *a������Ԫ�أ�sizeof(*a)����1 
//	printf("%d\n", sizeof(arr[1]));   //1   �ڶ���Ԫ�ش�С
//	printf("%d\n", sizeof(&arr));     //4/8 ��������ʱ��ʾ�������� - &������ȡ���ľ�������ĵ�ַ - ��ַ��С����4/8�ֽ�
//	printf("%d\n", sizeof(&arr+1));   //4/8 &aȡ�����������ַ��&a+1ȡ����������һ������ĵ�ַ������һ����ַ
//	printf("%d\n", sizeof(&arr[0]+1));//4/8 &a[0]+1 ȡ�����ǵڶ���Ԫ�صĵ�ַ
//	return 0;
//}

//int main()
//�ַ�����
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));      //���ֵ
//	printf("%d\n", strlen(arr+0));    //���ֵ
//	printf("%d\n", strlen(*arr));     //������err
//	printf("%d\n", strlen(arr[1]));   //err
//	printf("%d\n", strlen(&arr));     //���ֵ
//	printf("%d\n", strlen(&arr+1));   //���ֵ-6
//	printf("%d\n", strlen(&arr[0]+1));//���ֵ-1
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));        //7 sizeof��arr��������������С����λ���ֽڣ�7*1 = 7
//	printf("%d\n", sizeof(arr+0));      //4/8  �����������ʾ��Ԫ�ص�ַ��arr+0������Ԫ�ص�ַ - 4/8
//	printf("%d\n", sizeof(*arr));       //1 ������Ϊ��Ԫ�ص�ַ��*arr������Ԫ�أ�sizeof����Ԫ�أ� = 1
//	printf("%d\n", sizeof(arr[1]));     //1 arr[1]�ǵڶ���Ԫ�أ�sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&arr));       //4/8  ��������ʱ��ʾ�������� - &������ȡ���ľ�������ĵ�ַ - ��ַ��С����4/8�ֽ�
//	printf("%d\n", sizeof(&arr+1));     //4/8 &aȡ�����������ַ��&a+1ȡ����������һ������ĵ�ַ������һ����ַ
//	printf("%d\n", sizeof(&arr[0]+1));  //4/8 &a[0]+1 ȡ�����ǵڶ���Ԫ�صĵ�ַ
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));        //6
//	printf("%d\n", strlen(arr+0));      //6
//	printf("%d\n", strlen(*arr));       //strlen���ܵ�ַ����*arr���������Ԫ�أ��ʽ��Ϊerr
//	printf("%d\n", strlen(arr[1]));     //arr[1]Ϊ����ĵڶ���Ԫ�أ����Ϊerr
//	printf("%d\n", strlen(&arr));       //6
//	printf("%d\n", strlen(&arr+1));     //���ֵ
//	printf("%d\n", strlen(&arr[0]+1));  //5
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
	//printf("%d\n", sizeof(p));        //4/8 - ����ָ�����p�Ĵ�С
	//printf("%d\n", sizeof(p + 1));    //4/8 - p+1�õ������ַ�b�ĵ�ַ
	//printf("%d\n", sizeof(*p));       //1 *p �����ַ����ĵ�һ���ַ� - 'a'
	//printf("%d\n", sizeof(p[0]));     //1  p[0] == *(p + 0) == 'a' ���ַ�����һ��Ԫ��
	//printf("%d\n", sizeof(&p));       //4/8   ��ַ
	//printf("%d\n", sizeof(&p+1));     //4/8   ��ַ
	//printf("%d\n", sizeof(&p[0]+1));  //4/8  p[0]����'a',&p[0]�����ַ�'a'�ĵ�ַ��&p[0]+1�����ַ�'b'�ĵ�ַ

//	printf("%d\n", strlen(p));         //6 p��ŵ���a�ĵ�ַ
//	printf("%d\n", strlen(p+1));       //5 p+1��ŵ���b�ĵ�ַ
//	printf("%d\n", strlen(*p));        //err  strlen���ܵ�ַ����*p���������Ԫ��a���ʽ��Ϊerr
//	printf("%d\n", strlen(p[0]));      //err  p[0]������ĵ�һ��Ԫ��'a',�ʽ��Ϊerr
//	printf("%d\n", strlen(&p));        //���ֵ
//	printf("%d\n", strlen(&p+1));      //���ֵ
//	printf("%d\n", strlen(&p[0]+1));   //5   p[0]�����ַ�'a',&p[0]�����ַ�'a'�ĵ�ַ��&p[0]+1�����ַ�'b'�ĵ�ַ
//	return 0;
//}


//int main()
//{
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));             //sizeof(������) - ������������ܴ�С - ��λ���ֽ� - 48
//	printf("%d\n", sizeof(a[0][0]));       //4 - ��һ�е�һ��Ԫ�صĴ�С
//	printf("%d\n", sizeof(a[0]));          //16  a[0]�൱�ڵ�һ����Ϊһά�����������
//	//sizeof(a[0])����������������sizeof()�ڣ�������ǵ�һ�д�С
//	printf("%d\n", sizeof(a[0]+1));        //4/8  a[0]�ǵ�һ�е�����������������ʱ����Ԫ�ص�ַ��a[0]���ǵ�һ�е�һ��Ԫ�ص�ַ
//	//sizeof(a[0]+1))������ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));   //4   *(a[0] + 1)�ǵ�һ�еڶ���Ԫ�أ���С��4
//	printf("%d\n", sizeof(a+1));           //4/8 - a�Ƕ�ά�������������û��sizeof(������)��Ҳû��&ȡ��ַ������a����Ԫ�ص�ַ
//	//���Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ��(��Ԫ�صĵ�ַ)��a+1ʵ�����ǵڶ������һά����ĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));      //16 - �ڶ��е�ַ�����ã�����ڶ��еĴ�С - 16���ֽ�
//	printf("%d\n", sizeof(&a[0]+1));       //4/8 - �ڶ��еĵ�ַ
//	//a + 1 = &a[0]+1
//	printf("%d\n", sizeof(*(&a[0] + 1)));  //16 - �ڶ��е�ַ������
//	printf("%d\n", sizeof(*a));            //16 - a�Ƕ�ά�������������û��sizeof(������)��Ҳû��&ȡ��ַ������a����Ԫ�ص�ַ
//	//���Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ��(��Ԫ�صĵ�ַ)��*a���ǶԵ�һ�еĵ�ַ�����ã����ǵ�һ��
//	printf("%d\n", sizeof(a[3]));          //16 - sizeof�����ڵı��ʽ������м���
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int *ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2 5
//	return 0;
//}

//struct Test 
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ�Ϊ����
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	//ָ��+-����   ��ȡ����ָ������
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x100000����20���ֽڣ�0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//ǿ������ת��Ϊ���ͣ�����+1����+1  0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//ǿ��ת��Ϊ�޷������ͣ�+1��Ҫ����һ���޷�������  0x00100004
//	return 0;
//}