#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//qsort函数
//第一个参数：待排序数组的首元素地址
//第二个元素：待排序数组的元素个数
//第三个元素：待排序数组的每个元素大小 - 单位是字节
//第四个元素：函数指针，比较两个元素的所用函数的地址 - 这个函数使用者自己实现
//            函数指针的两个参数是：待比较的两个元素的地址
//交换函数
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
////仿造qsort函数编写冒泡排序函数
void bubble_sort(void* base, int sz, int width, int(*cmp)(void *e1, void *e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素的比较
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
			{
				//交换
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
	//比较名字就是比较字符串
	//字符串比较不能直接用<>=来比较，应该用strcmp函数
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
////主函数
int main()
{
	//test();
	//test1();
	test2();
	return 0;
}
//int main()
//{
//	一维数组
//	数组名是首元素的地址，除了两个例外
//	1.sizeof(数组名) - 数组名表示整个数组
//	2.&数组名 - 数组名此时表示整个数组 - &数组名取出的就是数组的地址
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));       //sizeof(数组名) - 计算的是数组总大小 - 单位是字节 - 16
//	printf("%d\n", sizeof(a+0));     //数组名这里表示首元素地址，a+0，还是首元素地址 - 4/8
//	printf("%d\n", sizeof(*a));      //4 - 数组名表示首元素地址， *a就是首元素，sizeof(*a)就是4
//	printf("%d\n", sizeof(a+1));     //4/8 - 数组名表示首元素地址，a+1 表示第二个元素地址， 地址大小是4/8个字节
//	printf("%d\n", sizeof(a[1]));    //4 - 第二个元素大小
//	printf("%d\n", sizeof(&a));      //4/8  &a取出的是数组的地址，但数组的地址也是地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*&a));     //16  &a取出的是数组的地址，数组的地址解引用访问的就是数组， sizeof计算的就是数组的大小，单位是字节
//	printf("%d\n", sizeof(&a+1));    //4/8   &a取出的是数组地址，&a+1取出的是跳过一个数组的地址，还是一个地址，4/8
//	printf("%d\n", sizeof(&a[0]));   //4/8  &a[0]   取出的是第一个元素的地址
//	printf("%d\n", sizeof(&a[0]+1)); //4/8  &a[0]+1 取出的是第二个元素的地址
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));      //6   sizeof计算的是数组的大小 6*1 = 6字节
//	printf("%d\n", sizeof(arr+0));    //4/8 数组名这里表示首元素地址，a+0，还是首元素地址 - 4/8
//	printf("%d\n", sizeof(*arr));     //1   数组名表示首元素地址， *a就是首元素，sizeof(*a)就是1 
//	printf("%d\n", sizeof(arr[1]));   //1   第二个元素大小
//	printf("%d\n", sizeof(&arr));     //4/8 数组名此时表示整个数组 - &数组名取出的就是数组的地址 - 地址大小就是4/8字节
//	printf("%d\n", sizeof(&arr+1));   //4/8 &a取出的是数组地址，&a+1取出的是跳过一个数组的地址，还是一个地址
//	printf("%d\n", sizeof(&arr[0]+1));//4/8 &a[0]+1 取出的是第二个元素的地址
//	return 0;
//}

//int main()
//字符数组
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));      //随机值
//	printf("%d\n", strlen(arr+0));    //随机值
//	printf("%d\n", strlen(*arr));     //错误表达err
//	printf("%d\n", strlen(arr[1]));   //err
//	printf("%d\n", strlen(&arr));     //随机值
//	printf("%d\n", strlen(&arr+1));   //随机值-6
//	printf("%d\n", strlen(&arr[0]+1));//随机值-1
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));        //7 sizeof（arr）计算的是数组大小，单位是字节：7*1 = 7
//	printf("%d\n", sizeof(arr+0));      //4/8  数组名这里表示首元素地址，arr+0还是首元素地址 - 4/8
//	printf("%d\n", sizeof(*arr));       //1 数组名为首元素地址，*arr就是首元素，sizeof（首元素） = 1
//	printf("%d\n", sizeof(arr[1]));     //1 arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
//	printf("%d\n", sizeof(&arr));       //4/8  数组名此时表示整个数组 - &数组名取出的就是数组的地址 - 地址大小就是4/8字节
//	printf("%d\n", sizeof(&arr+1));     //4/8 &a取出的是数组地址，&a+1取出的是跳过一个数组的地址，还是一个地址
//	printf("%d\n", sizeof(&arr[0]+1));  //4/8 &a[0]+1 取出的是第二个元素的地址
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));        //6
//	printf("%d\n", strlen(arr+0));      //6
//	printf("%d\n", strlen(*arr));       //strlen接受地址，而*arr是数组的首元素，故结果为err
//	printf("%d\n", strlen(arr[1]));     //arr[1]为数组的第二个元素，结果为err
//	printf("%d\n", strlen(&arr));       //6
//	printf("%d\n", strlen(&arr+1));     //随机值
//	printf("%d\n", strlen(&arr[0]+1));  //5
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
	//printf("%d\n", sizeof(p));        //4/8 - 计算指针变量p的大小
	//printf("%d\n", sizeof(p + 1));    //4/8 - p+1得到的是字符b的地址
	//printf("%d\n", sizeof(*p));       //1 *p 就是字符串的第一个字符 - 'a'
	//printf("%d\n", sizeof(p[0]));     //1  p[0] == *(p + 0) == 'a' 即字符串第一个元素
	//printf("%d\n", sizeof(&p));       //4/8   地址
	//printf("%d\n", sizeof(&p+1));     //4/8   地址
	//printf("%d\n", sizeof(&p[0]+1));  //4/8  p[0]就是'a',&p[0]就是字符'a'的地址，&p[0]+1就是字符'b'的地址

//	printf("%d\n", strlen(p));         //6 p存放的是a的地址
//	printf("%d\n", strlen(p+1));       //5 p+1存放的是b的地址
//	printf("%d\n", strlen(*p));        //err  strlen接受地址，而*p是数组的首元素a，故结果为err
//	printf("%d\n", strlen(p[0]));      //err  p[0]是数组的第一个元素'a',故结果为err
//	printf("%d\n", strlen(&p));        //随机值
//	printf("%d\n", strlen(&p+1));      //随机值
//	printf("%d\n", strlen(&p[0]+1));   //5   p[0]就是字符'a',&p[0]就是字符'a'的地址，&p[0]+1就是字符'b'的地址
//	return 0;
//}


//int main()
//{
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));             //sizeof(数组名) - 计算的是数组总大小 - 单位是字节 - 48
//	printf("%d\n", sizeof(a[0][0]));       //4 - 第一行第一个元素的大小
//	printf("%d\n", sizeof(a[0]));          //16  a[0]相当于第一行作为一维数组的数组名
//	//sizeof(a[0])把数组名单独放在sizeof()内，计算的是第一行大小
//	printf("%d\n", sizeof(a[0]+1));        //4/8  a[0]是第一行的数组名，数组名此时是首元素地址，a[0]就是第一行第一个元素地址
//	//sizeof(a[0]+1))计算的是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));   //4   *(a[0] + 1)是第一行第二个元素，大小是4
//	printf("%d\n", sizeof(a+1));           //4/8 - a是二维数组的数组名，没有sizeof(数组名)，也没有&取地址，所以a是首元素地址
//	//而把二维数组看成一维数组时，二维数组的首元素是它的第一行，a就是第一行(首元素的地址)，a+1实质上是第二行这个一维数组的地址
//	printf("%d\n", sizeof(*(a + 1)));      //16 - 第二行地址解引用，计算第二行的大小 - 16个字节
//	printf("%d\n", sizeof(&a[0]+1));       //4/8 - 第二行的地址
//	//a + 1 = &a[0]+1
//	printf("%d\n", sizeof(*(&a[0] + 1)));  //16 - 第二行地址解引用
//	printf("%d\n", sizeof(*a));            //16 - a是二维数组的数组名，没有sizeof(数组名)，也没有&取地址，所以a是首元素地址
//	//而把二维数组看成一维数组时，二维数组的首元素是它的第一行，a就是第一行(首元素的地址)，*a就是对第一行的地址解引用，就是第一行
//	printf("%d\n", sizeof(a[3]));          //16 - sizeof括号内的表达式不会进行计算
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
////假设p的值为0x100000，如下表达式的值分别为多少
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	//指针+-整数   答案取决于指针类型
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x100000加上20个字节，0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//强制类型转换为整型，整型+1就是+1  0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//强制转换为无符号整型，+1就要跳过一个无符号整型  0x00100004
//	return 0;
//}