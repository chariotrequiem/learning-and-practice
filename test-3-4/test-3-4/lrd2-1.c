#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
	//const-常属性
	//num为const修饰的常变量,本质还是变量，但具有了常属性。
	/*const int num = 4;
	printf("%d\n", num);*/
	/*const int n = 10;*/
	//int arr[n] = {0};
	/*n = 20;
	return 0;*/
//}
//3.#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}
//4.枚举常量
//枚举关键字-enum
//enum SEX
/*{
	MALE,
	FEMALE,
	SECRET
};*///枚举常量不可改变
//MALE,FEMALE,SECRET--枚举常量
//int main()
//{
//	enum SEX s = MALE;
//	enum SEX b = FEMALE;
//	printf("%d\n%d\n", s, b);
//	return 0;
//}
//字符串+转义字符+注释
//字符串即由双引号引起的字符例如--"amxxmkmk"
//int main()
//{
//	char arr1[] = "abc";//数组
//	//"abc"--'a' 'b' 'c' '\0'--(\0是字符串结束的标志)
//	//字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算做字符串内容
//	char arr2[] = {'a', 'b', 'c', 0};
//	//数据在计算机上存储的时候，存储的是二进制。ASCII 编码（a-97，A-65）ASCII码值
//	//'\0' - 0; 'a' - 97;
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//a,b,c,\0为字符串结束标志不算长度
//	char arr2[] = {'a', 'b', 'c'};
//	printf("%d\n", strlen(arr1));//strlen - string length-计算字符串长度
//	printf("%d\n", strlen(arr2));//在随机值中寻找\0
//	return 0;
//}//输出为第一个是3，第二个应为随机值（编译器不同，结果不同）
//int main()
//\n为转义字符，换行
//{
//	printf("abc\n");
//	return 0;
//}
//int main()
//{
//	printf("c:\？test\31");
//	//\t--水平制表符
//	return 0;
//}
//常用的转义字符1.// -- 用于表示一个反斜杠，防止他被解释为一个转义序列符；2./'用于表示字符常量'
//int main()
//{
////	/*printf("%d\n", strlen("c:\test\32\test.c"));*/
//	printf("%c\n", '\132');
//	printf("%c\n", '\x61');
//	//\ddd, ddd表示1~3个八进制的数字
//	//\32 -- 是两个八进制数字。 32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32（八进制） --> 十进制 26 -> 作为ASCII码值代表的字符
//	//\xdd, dd表示2个十六进制数字
//	return 0;
//}
//字符0-9的ASCII码值为48-57；字符a-z的ASCII码值为97-122；字符A-Z的ASCII码值为65-90
//if语句
//int main()
//{
//	int input = 0;
//	printf("好好学习(1 or 0)");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("回家卖红薯\n");
//	return 0;
//}
//循环语句(while语句)
//int main()
//{
//	int line = 0;
//	printf("好好学习\n");
//	while (line <= 20000) 
//	{
//		printf("敲一行代码: %d\n", line);
//			line++;
//
//	}
//	if(line>=20000)
//	printf("得到好offer");
//	return 0;
//}
//函数，自定义函数
//ADD(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	sum = ADD(num1, num2);
//		printf("sum = %d\n", sum);
//	return 0;
//}
//数组--一组相同类型元素的集合
//数组定义 int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个整型数组，最多放10个元素
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整型数字的数组
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}//打印数组内所有元素
//	/*printf("%d\n", arr[4]);*///用下标的方式访问元素（arr[下标]），下标默认从0开始。1的下标是0，2的下标是1
//	char ch[20];
//	float arr2[5];
//	return 0;
//}
//算数操作符,"/"取商整数，"%"取余数。即5/2得2，5%2得1
//int main()
//{
//	int a = 5%2;
//	printf("%d", a);
//	return 0;
//}
//(二进制）位操作
//& 按位与
//| 按位或
//^ 按位异或（异或--对应的二进制位相同，则为0；对应的二进制位相异，则为1）
//赋值符号
//= 赋值  == 判断相等
//a = a+10  与  a += 10完全相等
//复合赋值符
//+= -= *= /= >= <= &= ^= |=
//单目操作符
//'!'逻辑反操作（真变为假，假变为真）;  '-','+';  
//'sizeof'计算变量/类型所占空间得大小，单位是字节（sizeof 对变量可以省略(),例如a，但int 不行）
//双目操作符
//三目操作符