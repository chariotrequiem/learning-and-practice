#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4  ，2000000
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//(0,1)逗号表达式 == 1；(2,3)同理 == 3；(4,5) == 5  a[3][2] = {1，3，5}
//	int *p;
//	p = a[0];//a[0] 第一行的数组名 - 首元素地址
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
//	//指针 - 指针 == 指针间元素个数
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };//二维数组在内存中也是连续存放的
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));//*(aa + 1) == aa[1]   ptr2- 第二行首元素地址
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };//指针数组a内三个元素存放的分别是'w','a','a'的地址
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
//	gets(arr);//读取一行
//	//scanf("%s", arr);//输入字符串"abcdef"  a  b  c  d  e  f  \0
// 	//逆序函数
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
//		//判断i是否为自幂数
//		//1.计算i的位数 - n位数
//		int n = 1;
//		int tmp = i;//使用临时变量来代替i，防止i的值被改变
//		int sum = 0;
//		while (tmp /= 10 )
//		{
//			n++;
//		}
//		//2.计算i的每一位n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.比较i 和 sum
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
//	scanf("%d", &line);//上半部分的行数
//	//先打印上半部分
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
//	//打印下半部分
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
//	int empty = 0;//空瓶个数
//	scanf("%d", &money);
//	//买回来的汽水喝掉了
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
//	//total = money;
//	//empty = money;
//	////换回来的汽水
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
		//从左边找偶数
		while ((left<right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//从右边找奇数
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
	move(arr,sz);//从左边开始找一个偶数，从右边开始找一个奇数，两者交换
	print(arr, sz);
	return 0;
}