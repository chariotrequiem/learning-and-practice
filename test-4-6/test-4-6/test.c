#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4  ��2000000
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//(0,1)���ű��ʽ == 1��(2,3)ͬ�� == 3��(4,5) == 5  a[3][2] = {1��3��5}
//	int *p;
//	p = a[0];//a[0] ��һ�е������� - ��Ԫ�ص�ַ
//	printf("%d", p[0]);//p[0] == *(p+0)
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//int(*)[4]----------int(*)[5]
//	//p[4][2] == *(*(p+4)+2)
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFC,-4
//	//ָ�� - ָ�� == ָ���Ԫ�ظ���
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };//��ά�������ڴ���Ҳ��������ŵ�
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));//*(aa + 1) == aa[1]   ptr2- �ڶ�����Ԫ�ص�ַ
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };//ָ������a������Ԫ�ش�ŵķֱ���'w','a','a'�ĵ�ַ
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//	char *c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char ***cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}//POINT, ER, ST, EW

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//#include<assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	gets(arr);//��ȡһ��
//	//scanf("%s", arr);//�����ַ���"abcdef"  a  b  c  d  e  f  \0
// 	//������
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int Sn = 0;
//	int i = 0;
//	int b = 0;
//	for (i = 0; i < n; i++)
//	{
//		b = b * 10 + a;
//		Sn += b ;
//	}
//	printf("%d\n", Sn);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//		//1.����i��λ�� - nλ��
//		int n = 1;
//		int tmp = i;//ʹ����ʱ����������i����ֹi��ֵ���ı�
//		int sum = 0;
//		while (tmp /= 10 )
//		{
//			n++;
//		}
//		//2.����i��ÿһλn�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�Ƚ�i �� sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//�ϰ벿�ֵ�����
//	//�ȴ�ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//struct s
//{
//	int a;
//	int b;
//
//};
//int main()
//{
//	struct s a, *p = &a;
//	a.a = 99;
//	printf("%d\n", p->a);
//	return 0;
//}

//struct stu 
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = { {9801,"zhang", 20},{9802,"wang",19}, {9803,"zhao", 18} };
//	fun(students + 1);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;//��ƿ����
//	scanf("%d", &money);
//	//���������ˮ�ȵ���
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
//	//total = money;
//	//empty = money;
//	////����������ˮ
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("total = %d", total);
//	return 0;
//}


void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		//�������ż��
		while ((left<right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//���ұ�������
		while ((left<right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	move(arr,sz);//����߿�ʼ��һ��ż�������ұ߿�ʼ��һ�����������߽���
	print(arr, sz);
	return 0;
}