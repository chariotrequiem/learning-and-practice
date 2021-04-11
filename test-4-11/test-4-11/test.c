#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//结构是一些值的集合，这些值称为集合变量。结构的每个成员可以是不同类型的变量
//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量
//描述学生：属性 - 名字 - 电话 - 性别
//struct stu
//{
//	char name[20];//名字
//	char tle[12];//电话
//	char sex[10];//性别
//	int age;//性别
//}s4,s5,s6;
//struct stu s3;//全局变量
//int main()
//{
//	//创建结构体变量
//	struct stu s1;
//	struct stu s2;
//
//	return 0;
//}

//匿名结构体类型
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], *p;
//struct
//{
//	int a;
//	char c;
//}sa;
//struct
//{
//	int a;
//	char c;
//}* psa;
//int main()
//{
//	psa = &sa;//非法,编译器会当作两种类型
//	return 0;
//}

//结构体自引用
//struct Node
//{
//	int data;
//	struct Node n;//错误写法，结构体定义时，不能包含自己
//};
//struct Node
//{
//	int data;//4
//	struct Node* next;//4/8
//};
//int main()
//{
//	sizeof(struct Node);
//	return 0;
//}

//结构体重命名
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	Node n1;
//	struct Node n2;
//	return 0;
//}

//结构体初始化
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = { 'c', 100,3.14,"hello" };//结构体变量初始化用{}
//	//printf("%c %d %lf %s", s.c, s.a, s.d, s.arr);//结构体访问
//	struct S s = { 'c',{55.6, 30},100,3.14,"hello" };
//	printf("%c %lf %d %d %lf %s", s.c,s.st.weight,s.st.age, s.a, s.d, s.arr);
//	return 0;
//}

//结构体内存对齐
//结构体内存规则：
//1.第一个成员在与结构体变量偏移量为0的地址处
//2.其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处
//对齐数 = 编译器默认的一个对齐数与该成员大小的较小值（VS默认为8）
//3.结构体总大小为最大对齐数（每个成员变量都有一个正数倍）
//4.如果嵌套了结构体的情况，嵌套的结构体对应到自己的最大对齐数的整数倍，结构体的整体大小就是所有最大对齐数
//（含嵌套结构体的对齐数）的整数倍
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;	
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));//16
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));//16
//	return 0;
//}
//为什么存在内存对齐
//1.平台原因（移植原因）：不是所有的硬件平台都能访问任意地址上的任意数据的；某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常
//2.性能原因：数据结构（尤其是栈）应该尽可能的在自然边界上对齐。原因在于，为了访问未对齐的内存，处理器需要做两次内存访问；而对齐的内存访问只需一次访问
//结构体的内存对齐就是拿空间换时间的做法
//默认对齐数可以修改（一般设置为2^n）
//#pragma pack(4)//设置默认对齐数为4
//#pragma pack()//取消设置的默认对齐数

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
////传值
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
////传址（更好）
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s;
//	Init(&s);//传地址
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
//函数传参时，参数是需要压栈的，会有时间和空间上的系统开销。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降。
//结论：结构体传参时，要传结构体的位置

//位段 - 二进制位
//位段的声明与结构体类似但由两个不同：
//1.位段的成员必须是int， unsigned int或signed int
//2.位段的成员名后边有一个冒号和一个数字。
//struct S
//{
//	int a : 2;//a只需要2个bit位
//	int b : 5;//b只需要5个bit位
//	int c : 10;
//	int d : 30;
//};
//47bit - 6个字节*8 = 48bit
//位段内存分配
//位段的成员可以是int unsigned int signed int或者是char（属于整型家族）类型
//位段的空间上是按照需要以4个字节（int）或者1个字节（char）的方式来开辟的
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}
//位段可以与结构达到相同的效果，可以很好节省空间，但是存在跨平台问题

//枚举 - 把可能的取值一一列举
//枚举的优点：
//1.增加代码的可读性和可维护性
//2.和#define定义的标识符比枚举有类型检查，更加严谨
//3.防止了命名污染（封装）
//4.便于调试   5.使用方便， 一次可以定义多个常量
//enum Day
//{
//	Monday,
//	Tuesday,
//	Wednesday,
//	Thursday,
//	Friday,
//	Saturday,
//	Sunday
//};
//enum Sex//枚举类型
//{
//	//枚举的可能取值 - 常量
//	Male,
//	Female,
//	Secret
//};
//int main()
//{
//	/*enum Sex s = Male;*/
//	printf("%d%d%d", Male,Female, Secret);
//	return 0;
//}

//联合 - 联合体 - 共用体
//联合也是一种特殊的自定义类型 这种类型定义的变量也包含一系列的成员， 特征是这些成员共用同一块空间（故联合也叫共用体）
//联合的成员共用同一块空间，这样一个联合变量的大小，至少是最大成员的大小（因为来拟合至少得有能力保存最大的那个成员）
//联合大小的计算
//1.联合的大小至少是最大成员得大小
//2.当最大成员大小不是最大对齐数得整数倍时，就要对齐到最大对齐数得整数倍
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i))；
//	return 0;
//}

//检测当前系统大小端存储
//int check_sys()
//{
//	int a = 1;
//	//返回1表示小端
//	//返回0表示大端
//	return *(char*)&a;
//}
int check_sys()
{
	union
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int a = 1;
	int ret = check_sys();
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}