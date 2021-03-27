//包含一个叫stdio.h的文件
//std-标准 standard input output
//#include <stdio.h>
//int是整型的意思
//main前面的int表示main函数调用后返回一个整型值
//void main（）这种写法已经过时
//int main()//主函数-程序的入口-main函数有且仅有一个
//{
//	printf-库函数-c语言提供给我们的函数
//	#include
//	printf("hello world\n");//这里完成任务（打印hello world）
//	\n表示输出完要换行
//	return 0;//返回 0
//%c--打印字符格式的数据；%f--打印小数；%p--以地址形式进行打印
//%d--打印整型十进制数据；%x--打印十六进制；%o，，，
//int--整型；char--字符型；float--单精度浮点型；short--短整型；long--长整型；long long--更长的整型
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));//1个字节
//	printf("%d\n", sizeof(short));//2个字节
//	printf("%d\n", sizeof(long));//4/8个字节
//	printf("%d\n", sizeof(int));//4个字节
//	printf("%d\n", sizeof(float));//4个字节
//	printf("%d\n", sizeof(double));//8个字节
//	printf("%d\n", sizeof(long long));//8个字节
//	/*return 0;
//}*/
//#include <stdio.h>
//int num = 20;//全局变量--定义在代码块（{}）之外的变量
//    //局部变量和全局变量一般不相同，当局部变量和全局变量名字相同时，局部变量优先
//int main()
//{
//	short age = 20;//向内存申请2个字节=16bit位，用来存放20
//	float weight = 45.6f；//局部变量
//	return 0;
//}
#include <stdio.h>
int main()
{
	//取两个数的和
	int num1 = 0;
	int num2 = 1;
	//输入数据--使用输入函数scanf(在VS2015中应使用scanf_s)
	scanf_s("%d%d", &num1, &num2);//取地址符号&
	int sum = 0;
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}