#define _CRT_SECURE_NO_WARNINGS 1
#include<typeinfo.h>
int _tmain(int argc, _TCHAR* argv[])
{
	char *p1 = "hello";
	char *p2 = "world";
	char *p3 = "a piece of cake";
	char *str[] = { p1, p2, p3 };
	cout << sizeof(*str[0]) << " " << typeid(str[0]).name() << " " << *(str[0] + 1) << endl;//typeid是类型
	cout << sizeof(*&str[0]) << " " << typeid(&str[0]).name() << " " << *(&str[0] + 1) << endl;
	cout << sizeof(*str) << " " << typeid(str).name() << " " << *(str + 1) << endl;
	cout << sizeof(*&str) << " " << typeid(&str).name() << " " << *(&str + 1) << endl;
	return 0;
}
//运行结果：
//1 char * e
//4 char * * world
//4 char *[3] world
//12 char * (*)[3] 00F7F734
//能看懂这个你就知道了，这个地方 + 1的时候都是说步长，步长就是说 + 1前面的这个对象 所指向的 数据类型的长度，比如 &str[0]类型是char * * 所指向的是char * 长度是指针的长度（不同机器不同）