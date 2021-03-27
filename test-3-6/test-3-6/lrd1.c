#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("%c\n", ch);
	return 0;
}






//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址
//	//有一种变量是用来存放地址的 - 指针变量
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//* - 解引用操作符
//	printf("a = %d\n", a);
//	
//	return 0;
//}

//#define 定义标识符常量
//#define MAX 100
//#define 可以定义宏 - 带参数
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	int d = redu(b, c);
//	printf("d = %d\n", d);
//	return 0;
//}

//void test()
//{
//	//1.static 修饰局部变量
//	//局部变量的生命周期变长
//	//2.static 修饰全局变量
//	//改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用
//	//除了源文件就没法再使用了
//3.static修饰函数
//也是改变了函数的作用域 - 不准确
//外部链接属性 -》 内部链接属性
//	static int a = 1;//a 是一个静态的局部变量
//	//static
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	//typedef -- 类型定义 -- 类型重定义
//	typedef unsigned int u_int;//将 unsigned int 类型重定义为 u_int
//	return 0;
//}

//int main()
//{
//	register int a = 10;//建议把a定义成寄存器变量
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	//exp1 ? exp2 : exp3(条件操作符，若exp1为真，则输出exp2，否则输出exp3) 
//	printf("max= %d\n", max);
//	return 0;
//}

//真 - 非0
//假 - 0
//&& -- 逻辑与 - 两个为真则为真
//|| -- 逻辑或 - 有一个为真则为真

//int main()
//{
//	int a = 10;
//	int d = 10;
//	int b = a++;//后置++，先使用，再++
//	int c = ++d;//前置++，先++，再使用
//	printf("a = %d b = %d\n", a, b);
//	printf("d = %d c = %d\n", d, c);
//	return 0;
//
//}

////int main()
//{
//	int a = 0;//四个字节，32个bit位
//	int b = ~a;//b是有符号的整型
//	//~--为按（二进制）位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码 --> 反码 --> 补码
//正数的原码，反码，补码 三码相同
//	//负数在内存中存储时，存储的是二进制的补码
//	//11111111111111111111111111111111//补码-1得到反码
//	//11111111111111111111111111111110//符号位不变，其他位取反得到原码
//	//00000000000000000000000000000001//原码
//	printf("%d\n", b);//使用的，打印的是这个数的原码
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//计算元素个数
//	return 0;
//}
//MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a;
//	int b;
//	int max;
//	printf("键入a= b= \n");
//	scanf("%d%d", &a, &b);
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	//字符串的结束标志是: '\0'
//	//'\0' - 转义字符- 0
//	//'0' - 字符0 - 48
//	int a ;
//	int b;
//	printf("键入a= b= \n");
//	scanf("%d%d", &a, &b);
//	if (a > b) 
//		printf("较大值为: %d\n", a);
//	else
//		printf("较大值为: %d\n", b);
//	return 0;
//}