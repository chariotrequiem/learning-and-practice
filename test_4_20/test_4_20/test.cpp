#include<iostream>
using namespace std;
#include<string>


//int main()
//{
//	//int i = 0;
//	//int arr[5];
//	//for (i = 0; i < 5; i++)
//	//{
//	//	arr[i] = i;
//	//}
//	//int arr[5] = { 10,20,30,40,50 };
//	int arr[] = { 1,2};
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	cout << "整个数组占用内存空间为："<<sizeof(arr) << endl;
//	cout << "每个元素占用空间为："<<sizeof(arr[0]) << endl;
//	cout <<"数组中元素个数为："<< sizeof(arr)  / sizeof(arr[0])<< endl;
//	cout << "数组地址为：" << arr << endl;
//	cout << "数组中第一个元素地址为：" << &arr[0] << endl;
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 300,350,200,400,250 };
//	int max = arr[0];
//	for (int i = 1; i < 5; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	cout <<"最重的小猪体重为：" <<max << endl;
//	return 0;
//}
//void Reverse(int arr[], int sz)
//{
//	int start = 0;
//	int end = sz - 1;
//	while (start < end)
//	{		
//		arr[start] += arr[end];
//		arr[end] = arr[start] - arr[end];
//		arr[start] -= arr[end];
//		start++;
//		end--;
//	}
//}
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		cout <<arr[i]<<endl;
//	}
//}
//int main()
//{
//	int arr[5] = { 1,3,2,5,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);	
//	//逆置函数
//	Reverse(arr, sz);
//	//打印函数
//	Print(arr, sz);
//	return 0;
//}
//void Bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//每一趟冒泡排序
//			if (arr[j] > arr[j + 1])
//			{
//				arr[j] += arr[j+1];
//				arr[j + 1] = arr[j]- arr[j+1];
//				arr[j] -= arr[j+1];
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i] <<" ";
//	}
//	return 0;
//}
//int main()
//{
//	//int arr[2][3];
//	int arr2[2][2] = { {1, 2}, {2 ,3} };
//	int arr3[2][2] = { 1,2,3,4 };
//	int arr4[][2] = { 1,2,3,4 };
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			cout << arr2[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[2][3] = 
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//	cout << "二维数组所占空间大小为： " << sizeof(arr) << endl;
//	cout << "二维数组第一行占用内存为： " << sizeof(arr[0]) << endl;
//	cout << "二维数组第一个元素占用内存为： " << sizeof(arr[0][0]) << endl;
//	cout << "二位数组行数为： " << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "二位数组列数为： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//	cout << "二维数组元素个数为： " << sizeof(arr) / sizeof(arr[0][0]) << endl;
//	cout << "二维数组首地址为： " << arr << endl;
//	cout << "二维数组第一行首地址为： " << arr[0] << endl;
//	cout << "二位数组第二行首地址为： " << arr[1] << endl;
//	cout << "二维数组第一个元素地址 " << &arr[0][0] << endl;
//	return 0;
//}
//int main()
//{
//	int scores[3][3] = 
//	{
//		{100,100,100},
//		{90,50,100},
//		{60,70,80}
//	};
//	string names[3] = { "张三","李四","王五" };
//	for (int i = 0; i < 3; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < 3; j++)
//		{
//			sum += scores[i][j];
//		}
//		cout << names[i]<< "的总分为 " << sum << endl;
//	}
//	return 0;
//}
//一个简单的加法函数
//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int sum = Add(10, 20);
//	cout << sum << endl;
//	return 0;
//}
//double Del(double num1, double num2)
//{
//	return num1 - num2;
//}
//int main()
//{
//	double a, b;
//	cout << "请分别输入两个数" << endl;
//	cin >>  a;
//	cin >>  b;
//	double ret = Del(a, b);
//	cout << ret << endl;
//	return 0;
//}
//定义一个两个数字进行交换的函数
//void swap(int num1, int num2)
//{
//	cout << "交换前： " << "num1 = " << num1 <<" "<< "num2 = " << num2 << endl;
//	num1 += num2;
//	num2 = num1 - num2;
//	num1 -= num2;
//	cout << "交换后： " << "num1 = " << num1 << " " << "num2 = " << num2 << endl;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	cout << "交换前： " << "num1 = " << num1 << " " << "num2 = " << num2 << endl;
//	swap(num1, num2);
//	cout << "交换前： " << "num1 = " << num1 << " " << "num2 = " << num2 << endl;
//	return 0;
//}
////1.无参无返
//void test1()
//{
//	cout << "this is test 1" << endl;
//}
////2.有参无返
//void test2(int a)
//{
//	cout << "this is test 2 a = " << a<<endl;
//}
////3.无参有返
//int test3()
//{
//	cout << "this is test 3" << endl;
//	return 100;
//}
////4.有参有返
//int test4(int a)
//{
//	cout<< "this is test 4 a = " << a<<endl;
//	return a;
//}
//int main()
//{
//	test1();
//	test2(100);
//	int num1 = test3();
//	cout << "num1 = " << num1 << endl;
//	int num2 = test4(1000);
//	cout << "num2 = " << num2 << endl;
//	return 0;
//}
//函数声明
//比较函数，实现两个整型数字进行比较，返回较大的值
//提前告诉编译器函数的存在，可以利用函数的声明
//int max(int a, int b);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << max(a, b) << endl;
//	return 0;
//}
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//函数分文件编写
//实现两个数字交换
//#include "swap.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	cout << "a的地址为： " << &a << endl;
//	cout << "指针p为：" << p << endl;
//	//可以通过解引用来使用指针
//	*p = 1000;
//	cout << "a = " << a << endl;
//	cout << "*p = " << *p << endl;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	cout << "sizeof(int*) = " << sizeof(p) << endl;
//	cout << "sizeof(int*) = " << sizeof(int *) << endl;
//	cout << "sizeof(float*) = " << sizeof(float*) << endl;
//	cout << "sizeof(double*) = " << sizeof(double*) << endl;
//	cout << "sizeof(char*) = " << sizeof(char*) << endl;
//	return 0;
//}
//int main()
//{
//	//空指针用于给指针变量初始化
//	int * p = NULL;
//	//0~255之间的内存编号是系统占用的，因此不可访问
//	*p = 100;//err
//	return 0;
//}
//int mian()
//{
//	//野指针
//	//在程序中一定要尽量避免出现野指针
//	//指针变量指向内存地址编号为0x1100的空间
//	int * p = (int *)0x1100;
//	//访问野指针报错  err
//	cout << *p << endl;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	//常量指针——指针只想可以修改，但是指针指向的值不可以修改
//	const int * p = &a;
//	//*p = 20;//err——指针指向不可以改
//	//p = &b;//正确——指针指向可以改
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	//指针常量——指针的指向不可以改，指针指向的值可以改
//	int* const p = &a;
//	//*p = 20；//正确——指向的值可以改
//	//p = &b;//err——指针指向不可以改
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	//const修饰指针也修饰常量——指针的指向和指针指向的值都不可以改
//	const int* const p = &a;
//	//*p = 20；//err——指向的值不可以改
//	//p = &b;//err——指针指向不可以改
//	return 0;
//}
//int main()
//{
//	//利用指针访问数组中的元素
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int * p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		//打印数组元素
//		cout << *(p + i) << " ";
//	}
//	return 0;
//}
//void swap(int *a,int *b)
//{
//	*a += *b;
//	*b = *a - *b;
//	*a -= *b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	cout << a << endl;
//	cout << b << endl;
//	return 0;
//}

////冒泡排序函数
//void Bubble_sort(int *arr, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设数组已经完全有序
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				arr[j] += arr[j + 1];
//				arr[j + 1] = arr[j] - arr[j + 1];
//				arr[j] -= arr[j + 1];
//				flag = 0;//数组还未完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
////打印函数
//void Print(int *arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//int main()
//{
//	//创建数组
//	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
//struct stu
//{
//	string name;
//	int age;
//	double score;
//}s3;
//int main()
//{
//	//创建结构体变量
//	//1.struct 结构体名 变量名
//	//struct关键字可省略
//	struct stu s1;
//	s1.name = "张三";
//	s1.age = 20;
//	s1.score = 98.5;
//	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
//	//2.struct 结构体名 变量名 = {成员1值， 成员2值....}
//	struct stu s2 = { "李四", 22, 95 };
//	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;
//	//3.定义结构体时顺便创建变量
//	s3.name = "王五";
//	s3.age = 25;
//	s3.score = 66.6;
//	cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;
//	return 0;
//}
//struct stu
//{
//	string name;
//	int age;
//	double score;
//};
//int main()
//{
//	struct stu s[] = { {"张三", 20, 65.5}, {"李四", 25, 66.6}, {"王五", 26, 66.8} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		cout << " 姓名：" << s[i].name 
//			 << " 年龄：" << s[i].age 
//			 << " 分数：" << s[i].score << endl;
//	}
//	return 0;
//}

//定义学生结构体
//struct stu
//{
//	string name;
//	int age;
//	double score;
//};
//int main()
//{
//	//创建学生结构体变量
//	struct stu s = {"张三", 20, 66.5};
//	struct stu * p = &s;
//	cout <<"姓名："<< p->name<<" 年龄："<<p->age<<" 分数："<<p->score << endl;
//	return 0;
//}
//struct stu
//{
//	string name;
//	int age;
//	int score;
//};
//struct teacher
//{
//	string name;
//	int id;
//	int age;
//	struct stu s;
//};
//int main()
//{
//	struct teacher t = { "李梅", 25, 20, {"张三", 10, 99} };
//	cout << "老师姓名："  << t.name
//		 << " 老师ID："   << t.id
//		 << " 老师年龄：" << t.age << endl;
//	cout << "学生姓名："  << t.s.name 
//		 << " 学生年龄：" << t.s.age 
//		 << " 学生分数：" << t.s.score << endl;
//	return 0;
//}
//struct stu
//{
//	string name;
//	int age;
//	int score;
//};
////1.值传递
//void Print(struct stu s)
//{
//	cout << "姓名： " << s.name << " 年龄： " << s.age  << " 分数： " << s.score << endl;
//}
////2.址传递
//void Print2(struct stu *p)
//{
//	cout << "姓名： " << p->name<< " 年龄： " << p->age<< " 分数： " << p->score << endl;
//}
//int main()
//{
//	//结构体做函数参数
//	//将学生传入到一个参数中，打印学生身上的信息
//
//	//创建结构体变量
//	struct stu s = { "张三", 20, 66 };
//	Print(s);
//	Print2(&s);
//	return 0;
//}

//struct stu
//{
//	string name;
//	int age;
//	int score;
//};
//void print(const struct stu *s)//加const防止函数体中的误操作
//{
//	//s->age = 100;//err——因为加了const修饰
//	cout << s->age << s->name << s->score << endl;
//}
//int main()
//{
//	struct stu s = { "张三", 20, 99 };
//	print(&s);
//	cout << s.age << s.name << s.score;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//#include<ctime>
//struct stu
//{
//	string name;
//	int score;
//};
//struct teacher
//{
//	string name;
//	struct stu s[5];
//};
//void allocateSpace(struct teacher t[], int sz)
//{
//	string nameseed = "ABCDE";
//	for (int i = 0; i < sz; i++)
//	{
//		t[i].name = "Teacher_";
//		t[i].name += nameseed[i];		
//		for (int j = 0; j < 5; j++)
//		{
//			t[i].s[j].name = "Student_";
//			t[i].s[j].name += nameseed[j];
//			int random = rand() % 41+60;//(0~40)+60
//			t[i].s[j].score = random;
//		}
//	}
//}
//void PrintInfo(struct teacher t[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		cout << "老师姓名：" << t[i].name << endl;
//			for (int j = 0; j < 5; j++)
//			{
//				cout << "\t学生姓名：" << t[i].s[j].name << " 分数：" << t[i].s[j].score << endl;
//			}
//	}
//}
//int main()
//{
//	//随机数种子
//	srand((unsigned int)time(NULL));
//	struct teacher t[3] ;
//	int sz = sizeof(t) / sizeof(t[0]);
//	allocateSpace(t, sz);
//	PrintInfo(t, sz);
//	return 0;
//}
//struct hero
//{
//	string name;
//	int age;
//	string sex;
//};
//void Bubble_sort(struct hero *h,int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (h[j].age > h[j + 1].age)
//			{
//				struct hero temp = h[j] ;
//				h[j] = h[j + 1];
//				h[j + 1] = temp;
//			}
//		}
//	}
//}
//void Print(struct hero h[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		cout << "姓名：" << h[i].name << " 年龄：" << h[i].age << " 性别：" << h[i].sex << endl;
//	}
//}
//int main()
//{
//	struct hero h[5] = 
//	{ 
//		{ "刘备",23,"男" } ,
//		{ "关羽",22,"男" } ,
//		{ "张飞",20,"男" } ,
//		{ "赵云",21,"男" } ,
//		{ "貂蝉",19,"女" }
//	};
//	int sz = sizeof(h) / sizeof(h[0]);
//	Bubble_sort(h,sz);
//	Print(h,sz);
//	return 0;
//}
//void unionL(List *La, list Lb)
//{
//	int La_len, Lb_len, i;
//	ElemType e;
//	La_len = ListLength(*La);
//	Lb_len = ListLengyh(Lb);
//	for (i = 1; i <= Lb_len; i++)
//	{
//		GetElem(Lb, i, &e);
//		if (!LocateElem(*La, e))
//		{
//			ListInsert(La, ++a_len, e);
//		}
//	}
//}
//#define MAXSIZE 20
//typedef int ElemType;
//typedef struct
//{
//	ElemType data[MAXSIZE];
//	int length;//线性表当前长度
//}SqList;

