#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//在计算机科学中，指针是编程语言中的一个对象，利用地址，他的值直接指向（point to）存在电脑存储器中另一个地方的值。
//由于通过地址能找到所需的变量单元，可以说，地址指向该变量单元。因此，将该地址形象化的称为“指针”。意思是它可以找到以它为地址的变量单元
//指针是个变量，存放内存单元的地址（编号）（存放在指针中的值都被当作地址处理）
//int main()
//{
//	int a = 10;//在内存中开辟一块空间
//	int* p = &a;//对变量a，取出它的地址，可以使用&操作符
//	            //将a的地址存放在p变量中，p就是一个指针变量
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", sizeof(char*));//4
//	//printf("%d\n", sizeof(int*));//4
//	//printf("%d\n", sizeof(double*));//4
//	//printf("%d\n", sizeof(short*));//4
//	int a = 0x11223344;
//	//int* pa = &a;//44 33 22 11
//	//*pa = 0;//00 00 00 00 
//	char* pc = &a;//44 33 22 11
//	*pc = 0;// 00 33 22 11
//	//char* pc = &a;
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}
//指针类型决定了指针进行解引用操作的时候能访问的空间大小(对指针解引用时能有多大的权限，能操作几个字节)
//int*p;     *p能够访问4个字节
//char*p;    *p能够访问1个字节
//double*p;  *p能够访问8个字节

//指针类型决定了指针走一步走多远（指针步长）（+1向后跳几个字节）
//int*p;      p+1---->4
//char*p;     p+1---->1
//double*p;   p+1---->8
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);//006FFD9C
//	printf("%p\n", pa+1);//006FFDA0
//	printf("%p\n", pc);//006FFD9C
//	printf("%p\n", pc+1);//006FFD9D
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名 - 首元素地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//野指针 ---- 就是指针指向的位置是不可知的（随机的，不正确的，没有明确限制的）
//int main()
//{
//	int *p;//局部的指针变量，就被初始化随机值
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*(p++) = i;
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	*p = 20;
//	//指针指向的空间被释放
//	return 0;
//}

//如何规避野指针
//1.指针初始化
//2.小心指针越界
//3.指针指向空间释放即使置NULL -- 用来初始化指针的，给指针赋值
//4.指针使用之前检查有效性

//int main()
//{
//	int *p;//局部变量不初始化，里面默认放的是一个随机值
//	*p = 20;
//	return 0;
//}


//指针运算
//1.指针+-整数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//2.指针-指针
//int main()
//{
//	char ch[5] = {0};
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//指针-指针得到的是指针间元素个数
//	printf("%d\n", &arr[9] - &ch[0]);//类型不同，结果不可知
//	return 0;
//}

//my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen - 求字符串长度
//	//递归 - 模拟实现了strlen - 1.计数器的方式 2.递归的方式
//	//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//3.指针的关系运算
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float *vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}
//法二(也能完成目标，但应该避免这种写法，因为标准并不保证它可行)
//标准规定：允许指向数组元素的指针与指向数组最后一个元素的那个内存位置的指针比较
//但是不允许与指向第一个元素之前的那个内存位置的指针进行比较
//for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//{
//	*vp = 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址 - 首元素的地址
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0+1]);
//	printf("%p\n", &arr);//地址 - 整个数组的地址
//	printf("%p\n", &arr+1);
//	//1.&arr  -   &数组名 - 数组名不是首元素的地址  --  数组名表示整个数组 - &数组名取出的是整个数组的地址
//	//2.sizeof(arr) - sizeof(数组名) - 数组名表示的是整个数组 - sizeof(数组名)计算的是整个数组的大小
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p  ========  %p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;//二级指针
//	//int** * pppa = &ppa;//三级指针
//	return 0;
//}

//指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//指针数组 - 存放指针
	//int arr[10];
	int* arr[3] = {&a,&b,&c};//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}
