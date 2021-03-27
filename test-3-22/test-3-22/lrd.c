#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//逗号表达式，就是用逗号隔开的多个表达式。从左向右依次执行。整个表达式的结果就是最后一个表达式的结果
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a,  b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	a = get_val();
//	count_val(a);
//	while (a > 0)
//	{
//		a = get_val();
//		count_val(a);
//	}
//	return 0;
//}

//[]下标引用操作符(操作数：一个数组名+一个索引值)
//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;
//	return 0;
//}

//函数调用操作符--(调用函数的时候的（）就是函数调用操作符)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//访问一个结构的成员（.操作符        结构体.成员名）（->操作符       结构体指针->成员名）
//struct stu//创建了一个结构体类型 -- struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	struct stu s1 = { "zhangsan", 20, "2020210561" };//使用struct stu这个类型创建了一个学生对象 -- s1，并初始化
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%s\n", ps->id);
//	printf("%d\n", ps->age);
//	/*printf("%s\n", s1.name);
//	printf("%s\n", s1.id);
//	printf("%d\n", s1.age);*/
//	return 0;
//}

//隐式类型转换（c的整型算术运算总是至少以缺省整型类型的精度来进行的）
//为了获得这个精度，表达式中的字符和短整型操作数在使用之前被转换为普通整形，这种转换被称为整型提升
//整型提升是按照变量的数据类型的符号位来提升的
//int main()
//{
//	//a和b的值被提升为普通整型，然后再执行加法运算。加法运算完成之后，结果将被截断，然后再存储于c中
//	char a = 3;//a只能存放1个字节（8bit）
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;//b只能存放1个字节（8bit）
//	//00000000000000000000000001111111
//	//01111111 - b
//	char c = a + b;
//	//a和b相加
//	//00000011 -> 00000000000000000000000000000011
//	//01111111 -> 00000000000000000000000001111111
//	//和 ->       00000000000000000000000010000010
//	//c - 10000010
//	//原码取反+1得到补码，补码-1取反得原码
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;//10110110(整型提升)
//	short b = 0xb600;
//	int c = 0x6b000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0x6b000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4   c只要参与表达式运算，就会发生提升，所以sizeof(+c)是4个字节
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}

//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int
//如果某个操作数的类型在上面的列表中排名较低，那么要先转换为另一个操作数的类型后执行运算
//但是转换要合理，不然会有一些潜在的问题
//复杂表达式的求值有三个影响的因素
//1.操作符的优先级2.操作符的结合性3.是否控制求值顺序
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a * 3;
//	return 0;
//}

//非法表达式
//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;//各编译器结果不同
//	printf("i = %d\n", i);
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() *fun();//非法表达式
//	printf("%d\n", answer);
//	return 0;
//}

int main()
{
	int i = 1;
	int a = (++i) + (++i) + (++i);//非法表达式
	printf("a = %d\n", a);
	return 0;
}