#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<Windows.h>

//���еĿ��ٿռ䷽ʽ int a = 10;   char arr[10] = {0};
//�������ٿռ䷽ʽ�������ص㣺
//1.�ռ俪�ٴ�С�ǹ̶���
//2.����������ʱ������ָ�����鳤�ȣ���������ڴ��ڱ���ʱ����
//��̬�ڴ���� - ���������ռ�
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr[50];//50��struct S���͵�����
//	return 0;
//}
//c�����ǿ��Դ����䳤���� - c99�����ӵ�

//��̬�ڴ溯��
//malloc����
//void *malloc(size_t size);
//int main()
//{
//	//���ڴ�����10�����Ϳռ�
//	int*p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ��
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p+i));
//		}		
//	}
////free���� - ר����������̬�ڴ���ͷźͻ��յ�
////void free(void* memblock);
////����̬����Ŀռ䲻��ʹ��ʱ����Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;
//}
//malloc��freeһ��ɶ�ʹ��

//calloc����
//void *calloc(size_t num, size_t size);
//�����Ĺ�����Ϊnum����СΪsize��Ԫ�ؿ���һ��ռ䣬���ѿռ��ÿ���ֽڳ�ʼ��Ϊ0
//�뺯��malloc������ֻ����calloc���ڷ��ص�ַ֮ǰ������Ŀռ��ÿ���ֽڳ�ʼ��Ϊȫ0
//int main()
//{
//	int *p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d %d\n", *(p + i), i+1);
//		}
//	}
//	//�ͷſռ�
//	free(p);
//	return 0;
//}

//realloc���� re - alloc
//������̬�ڴ濪�ٴ�С
//void *realloc(void *memblock, size_t size);
//memblock��Ҫ�������ڴ��С��size�ǵ�������´�С
//����ֵΪ����֮����ڴ���ʼλ��
//int main()
//{
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//ֻ����ʹ��malloc���ٵ�20���ֽڿռ�
//	//����˴�20���ֽڲ�������ʹ�õ�Ҫ��ϣ���ܹ���40���ֽڿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//	//realloc����ʹ�õ�ע�����
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//����һ����������Ŀռ䣬����ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.����һ���µı���������realloc�����÷���ֵ
//	int* ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}	
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//�����Ķ�̬�ڴ����
//1.��NULL���н����ò���
//int main()
//{
//	int *p = (int*)malloc(40);
//	//��һmalocʧ�ܣ�p�ͱ���ֵΪNULL
//	//Ҫ��ǰ���з���ֵ�ж�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//err
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.�Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int *p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)//Խ�����
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.�ԷǶ�̬���ٿռ�ʹ��free
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.ʹ��free�ͷ�һ�鶯̬�ڴ濪�ٵ�һ����
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//���տռ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//5.��ͬһ���ڴ�Ķ���ͷ�
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	free(p);
    //..........
//	free(p);//����ͷ�
//free��p��һ p = NULL�������ͷ�������
//	return 0;
//}

//6.��̬�����ڴ������ͷţ��ڴ�й©��
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//		//Sleep(1);
//	}
//	return 0;
//}
//�����ͷŲ���ʹ�õĶ�̬���ٵĿռ������ڴ�й©
//�мǣ���̬���ٵĿռ�һ��Ҫ�ͷţ�������ȷ�ͷ�

//��������
//void GetMemory(char *p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//����˴�������str���Ǹ���ָ�루NULL��
//	printf(str);
//}
//1.���д���������ֱ���
//2.��������ڴ�й©���⣨str��ֵ���ݵ���ʽ��p�� p��GetMemory�����βΣ�
//ֻ�ں����ڲ���Ч��GetMemory�������غ󣬶�̬���ٵ��ڴ���δ�ͷţ����޷��ҵ������Ի�����ڴ�й©��
//int main()
//{
//	Test();
//	return 0;
//}

//int* test()
//{
//	int a = 10;//ջ��
//	return &a;//����ջ�ռ��ϵĵ�ַ
//}
//int main()
//{
//	int *p = test();
//	*p = 20;//������һ��Ƿ���ջ���ڴ�
//	return 0;
//}

//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//��
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
//	//�� str = NULL;
//	if (str != NULL)
//	{
//		//�Ƿ������ڴ棨str�Ѿ���free���������п�������ӡ��
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
//c/c++�����ڴ����ļ�������
//1.ջ����stack������ִ�к���ʱ�������ھֲ������Ĵ洢��Ԫ��������ջ�ϴ���������ִ�н���ʱ��Щ�洢��Ԫ�Զ����ͷ�
//ջ�ڴ�������������ڴ�������ָ��У�Ч�ʺܸߣ����Ƿ�����ڴ��������ޡ�ջ����Ҫ������к���������ľֲ�������
//�����������������ݡ����ص�ַ��
//2.������heap����һ���ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱ������OS���ա����䷽ʽ����������
//3.���ݶΣ���̬������static�����ȫ�ֱ�������̬���ݡ������������ϵͳ�ͷ�
//4.����Σ���ź����壨���Ա������ȫ�ֺ������Ķ����ƴ���

//��������
//C99�У��ṹ�����һ��Ԫ��������δ֪��С�����飬��ͽ���[��������]��Ա
//�ṹ�е����������Աǰ����������һ����Ա
//sizeof���ص����ֽṹ��С���������������ڴ�
//�������������Ա�Ľṹ��malloc���������ڴ涯̬���䣬���ҷ�����ڴ�Ӧ���ڽṹ��С������Ӧ���������С

//�����ڴ��ͷţ� �����ڷ����ٶ�
//struct S
//{
//	int n;
//	int arr[];//δ֪��С������ - ���������Ա - ����Ĵ�С�ǿ��Ե�����
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//4 - ����ṹ���Сʱ��������������
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4 
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//ʹ���������������鶯̬�ɱ�
//��ʽ�ϸ��׳�������ʹ��malloc��ҲҪ����ʹ��free������������ֻ��һ��
struct S
{
	int n;
	int *arr;
};
int main()
{
	struct S *ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//������С
	int *ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//�ͷ��ڴ�
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}