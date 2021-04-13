#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<Windows.h>

//已有的开辟空间方式 int a = 10;   char arr[10] = {0};
//上述开辟空间方式有两个特点：
//1.空间开辟大小是固定的
//2.数组在申明时，必须指定数组长度，它所需的内存在编译时分配
//动态内存分配 - 向堆区申请空间
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr[50];//50个struct S类型的数据
//	return 0;
//}
//c语言是可以创建变长数组 - c99中增加的

//动态内存函数
//malloc函数
//void *malloc(size_t size);
//int main()
//{
//	//像内存申请10个整型空间
//	int*p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
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
////free函数 - 专门用来做动态内存的释放和回收的
////void free(void* memblock);
////当动态申请的空间不在使用时，就应该还给操作系统
//	free(p);
//	p = NULL;
//	return 0;
//}
//malloc和free一般成对使用

//calloc函数
//void *calloc(size_t num, size_t size);
//函数的功能是为num个大小为size的元素开辟一块空间，并把空间的每个字节初始化为0
//与函数malloc的区别只在于calloc会在返回地址之前把申请的空间的每个字节初始化为全0
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
//	//释放空间
//	free(p);
//	return 0;
//}

//realloc函数 re - alloc
//调整动态内存开辟大小
//void *realloc(void *memblock, size_t size);
//memblock是要调整得内存大小，size是调整后的新大小
//返回值为调整之后的内存起始位置
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
//	//只是在使用malloc开辟的20个字节空间
//	//假设此处20个字节不能满足使用的要求，希望能够有40个字节空间
//	//这里就可以使用realloc来调整动态开辟的内存
//	//realloc函数使用的注意事项：
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一块新的内存区域
//	//开辟一块满足需求的空间，并把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回新开辟的内存空间地址
//	//3.得用一个新的变量来接收realloc函数得返回值
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
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}

//常见的动态内存错误
//1.对NULL进行解引用操作
//int main()
//{
//	int *p = (int*)malloc(40);
//	//万一maloc失败，p就被赋值为NULL
//	//要提前进行返回值判断
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//err
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.对动态开辟空间的越界访问
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
//		for (i = 0; i < 10; i++)//越界访问
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.对非动态开辟空间使用free
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.使用free释放一块动态内存开辟的一部分
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
//	//回收空间
//	free(p);
//	p = NULL;
//	return 0;
//}

//5.对同一块内存的多次释放
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	free(p);
    //..........
//	free(p);//多次释放
//free后将p置一 p = NULL，则多次释放无意义
//	return 0;
//}

//6.动态开辟内存忘记释放（内存泄漏）
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//		//Sleep(1);
//	}
//	return 0;
//}
//忘记释放不再使用的动态开辟的空间会造成内存泄漏
//切记：动态开辟的空间一定要释放，并且正确释放

//经典例题
//void GetMemory(char *p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//程序此处崩溃，str还是个空指针（NULL）
//	printf(str);
//}
//1.运行代码程序会出现崩溃
//2.程序存在内存泄漏问题（str以值传递的形式给p， p是GetMemory函数形参，
//只在函数内部有效，GetMemory函数返回后，动态开辟的内存尚未释放，且无法找到，所以会造成内存泄漏）
//int main()
//{
//	Test();
//	return 0;
//}

//int* test()
//{
//	int a = 10;//栈区
//	return &a;//返回栈空间上的地址
//}
//int main()
//{
//	int *p = test();
//	*p = 20;//访问了一块非法的栈区内存
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
//	//改
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
//	free(str);//free释放str指向的空间后，并不会把str置为NULL
//	//改 str = NULL;
//	if (str != NULL)
//	{
//		//非法访问内存（str已经被free，又向其中拷贝、打印）
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
//c/c++程序内存分配的几个区域
//1.栈区（stack）：在执行函数时，函数内局部变量的存储单元都可以在栈上创建，函数执行结束时这些存储单元自动被释放
//栈内存分配运算内置于处理器的指令集中，效率很高，但是分配的内存容量有限。栈区主要存放运行函数而分配的局部变量、
//函数参数、返回数据、返回地址等
//2.堆区（heap）：一般由程序员分配释放，若程序员不释放，程序结束时可能由OS回收。分配方式类似于链表
//3.数据段（静态区）（static）存放全局变量、静态数据。程序结束后由系统释放
//4.代码段：存放函数体（类成员函数和全局函数）的二进制代码

//柔性数组
//C99中，结构体最后一个元素允许是未知大小的数组，这就叫做[柔性数组]成员
//结构中的柔性数组成员前必须至少有一个成员
//sizeof返回的这种结构大小不包括柔性数组内存
//包含柔性数组成员的结构用malloc函数进行内存动态分配，并且分配的内存应大于结构大小，以适应柔性数组大小

//方便内存释放， 有利于访问速度
//struct S
//{
//	int n;
//	int arr[];//未知大小的数组 - 柔性数组成员 - 数组的大小是可以调整的
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//4 - 计算结构体大小时不包含柔性数组
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
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//使用其他方法让数组动态可变
//形式上更易出错（两次使用malloc，也要两次使用free），柔性数组只需一次
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
	//调整大小
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
	//释放内存
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}