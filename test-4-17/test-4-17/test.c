#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}



//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//}


//void Change(int x,int y)
//{
//	x += y;
//	y = x - y;
//	x -= y;
//	printf("%d %d", x, y);
//}
//int main()
//{
//	Change(10, 20);
//	return 0;
//}

//int main()
//{
//	int i = 10,j=2;
//	printf("%d", i *= j + 8);
//	return 0;
//}





//int _tmain(int argc, _TCHAR* argv[])
//{
//	char *p1 = "hello";
//	char *p2 = "world";
//	char *p3 = "a piece of cake";
//	char *str[] = { p1, p2, p3 };
//	cout << sizeof(*str[0]) << " " << typeid(str[0]).name() << " " << *(str[0] + 1) << endl;//typeid是类型
//	cout << sizeof(*&str[0]) << " " << typeid(&str[0]).name() << " " << *(&str[0] + 1) << endl;
//	cout << sizeof(*str) << " " << typeid(str).name() << " " << *(str + 1) << endl;
//	cout << sizeof(*&str) << " " << typeid(&str).name() << " " << *(&str + 1) << endl;
//	return 0;
//}
//运行结果：
//1 char * e
//4 char * * world
//4 char *[3] world
//12 char * (*)[3] 00F7F734
//能看懂这个你就知道了，这个地方 + 1的时候都是说步长，步长就是说 + 1前面的这个对象 所指向的 数据类型的长度，比如 &str[0]类型是char * * 所指向的是char * 长度是指针的长度（不同机器不同）