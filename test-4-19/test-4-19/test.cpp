#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<ctime>
#include<math.h>
using namespace std;

//int main()
//{
	//可以利用sizeof来求出数据类型占用内存大小
	/*short num1 = 10;
	cout << sizeof(num1) << endl;
	int num2 = 10;
	cout << sizeof(num2) << endl;
	long num3 = 10;
	cout << sizeof(num3) << endl;
	long long num4 = 10;
	cout << sizeof(num4) << endl;*/
	//默认情况下输出一个小数，会显示6位小数
	//float f1 = 3.1415926f;
	//cout << f1 << endl;
	//double d1 = 3.1415926;
	//cout << d1 << endl;
	//float f2 = 3e2;
	//cout << f2 << endl;
	//float f3 = 3e-2;
	//cout << "f3 =" << f3 << endl;
	//char ch = 'a';
	//cout << ch << endl;
	//cout << sizeof(char) << endl;
	//cout << (int)ch << endl;
	//cout <<(int) 'A' << endl;
	//转义字符
	//cout << "hello world\n";
	//cout << "\\" << endl;
	////\t  水平输出数据
	//cout << "aaaaa\thello world" << endl;
	//cout << "aaa\thello world" << endl;
	//cout << "a\thello world" << endl;
	//char arr[] = "hello eorld";
	//cout << arr << endl;
	//string arr1 = "hello world";
	//cout << arr1 << endl;
	//bool flag = true;
	//cout << flag << endl;
	//flag = false;
	//cout << flag << endl;
	//1.整型赋值
	//int num;
	//cin >> num;
	//cout << num << endl;
	////2.浮点型赋值
	//float num2;
	//cin >> num2;
	//cout << num2 << endl;
	////3.字符型赋值
	//char ch;
	//cin >> ch;
	//cout << ch << endl;
	////4.字符串型赋值
	//string arr;
	//cin >> arr;
	//cout << arr << endl;
	////5布尔类型
	//bool flag;
	//cin >> flag;
	//cout << flag << endl;
	//int num1 = 10;
	//int num2 = 3;
	//cout << num1 + num2 << endl;
	//cout << num1 - num2 << endl;
	//cout << num1 * num2 << endl;
	//cout << num1 / num2 << endl;
	//cout << num1 % num2 << endl;
	//int a = 2;
	//int b = 2;
	//b = a++;//先赋值，后加减
	//cout << a << endl;
	//cout << b << endl;
	//b = ++a;//先加减，后赋值
	//cout << a << endl;
	//cout << b << endl;
	//cout << ++num1 << endl;
	//cout << num1++ << endl;
	//cout << --num1 << endl;
	//cout << num1-- << endl;

	//int a;
	//a = 10;
	//a += 2;//a=a+2;
	//cout << a << endl;
	//a = 10;
	//a -= 2;//a=a-2;
	//cout << a << endl;
	//a = 10;
	//a *= 2;//a=a*2;
	//cout << a << endl;
	//a = 10;
	//a /= 2;//a=a/2;
	//cout << a << endl;
	//a = 10;
	//a %= 2;//a=a%2;
	//cout << a << endl;
	//int a = 10;
	//int b = 20;
	//cout << (a == b) << endl;
	//cout << (a != b) << endl;
	//cout << (a < b) << endl;
	//cout << (a > b) << endl;
	//cout << (a <= b) << endl;
	//cout << (a >= b) << endl;
 //   int a = 10;
	//int b = 5;
	//int c = 0;
	//cout << (!a) << endl;
	//cout << a << endl;
	//cout << (a&&b) << endl;
	//cout << (a&&c) << endl;
	//cout << (a || b) << endl;
	//cout << (a || c) << endl;
 //   int score = 0;
	//cin >> score;
	//if (score > 600)
	//{
	//	cout << "考上一本大学" << endl;
	//}
//	return 0;
//}
//int main()
//{
//	int score = 0;
//	cin >> score;
//	if (score >= 600)
//	{
//		cout << "考上一本" << endl;
//	}
//	else
//	{
//		cout << "考不上一本" << endl;
//	}
//}


//int main()
//{
//	int score = 0;
//	cout << "请输入高考分数: " << endl;
//	cin >> score;
//	if (score >= 600)
//	{
//		if (score > 700)
//		{
//			cout << "可以考入北大" << endl;
//		}
//		else if (score >= 650)
//		{
//			cout << "可以考入清华" << endl;
//		}
//		else
//		{
//			cout << "可以考上人大" << endl;
//		}
//	}
//	else if (score >= 500)
//	{
//		cout << "考上二本" << endl;
//	}
//	else if (score >= 400)
//	{
//		cout << "考上三本" << endl;
//	}
//	else
//	{
//		cout << "不好意思，没考上" << endl;
//	}
//	return 0;
//}

//int main()
//{
//	//输入三只猪的体重
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	cout << "请输入三只猪的体重:" ;
//	cin >> num1;
//	cin >> num2;
//	cin >> num3;
//	//判断哪知最重
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//		{
//			cout << "小猪A最重" << endl;
//		}
//		else
//		{
//			cout << "小猪C最重" << endl;
//		}
//	}
//	else
//	{
//		if (num2 > num3)
//		{
//			cout << "小猪B最重" << endl;
//		}
//		else
//		{
//			cout << "小猪C最重" << endl;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = (a > b ? a : b);
//	cout <<"c = " << c << endl;
//	//C++中三目运算返回的是变量，可以继赋值
//	(a > b ? a : b) = 100;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

//int main()
//{
//	int score = 0;
//	cout << "请对电影打分" << endl;
//	cin >> score;
//	switch (score)
//	{
//	case 10:
//		cout << "传世经典" << endl;
//		break;
//	case 9:
//		cout << "好评如潮" << endl;
//		break;
//	case 8:
//		cout << "大致好评" << endl;
//		break;
//	case 7:
//		cout << "普通电影" << endl;
//		break;
//	case 6:
//		cout << "勉强及格" << endl;
//		break;
//	default:
//		cout << "烂片" << endl;
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	//在屏幕上打印0-9十个数字
//	int i = 0;
//	while (i < 10)
//	{
//		cout << i << endl;
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//添加随机数种子，利用当前时间生成随机数
//	srand((unsigned int)time(NULL));
//	//1.系统生成随机数
//	int num = rand() % 1000 + 1;//rand()%1000生成0-999随机数
//	//2.玩家进行猜测
//	int val = 0;
//	//3.判断
//	while (1)
//	{
//		cin >> val;
//		if (val > num)
//		{
//			cout << "猜测过大" << endl;
//		}
//		else if (val < num)
//		{
//			cout << "猜测过小" << endl;
//		}
//		else
//		{
//			cout << "恭喜你，猜对了" << endl;
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		cout << i << endl;
//		i++;
//	} while (i < 10);
//	return 0;
//}
//int main()
//{
//	int i = 100;
//	do 
//	{
//		int a = i % 10;//个位
//		int b = i / 10 % 10;//十位
//		int c = i / 100;//百位
//		if (a*a*a +b*b*b + c*c*c == i)
//		{
//			cout << i << endl;
//		}		
//		i++;
//	} while (i < 1000);
//
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		cout << i << endl;
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i < 100; i++)
//	{
//		if ((i % 7 == 0) || (i / 10 == 7) || (i % 10 == 7))
//		{
//			cout <<"敲桌子 " <<i<< endl;
//		}
//		else
//		{
//			cout << i << endl;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << "* ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j << "*" << i << "=" << i*j<<"  ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 20; i++)
//	{
//		//偶数不输出
//		if (i % 2 == 0)
//		{
//			continue;//执行到此就不再循环
//		}
//		cout << i << endl;
//	}
//	return 0;
//}

//int main()
//{
//	cout << "1.xxxxxx" << endl;
//	cout << "2.xxxxxx" << endl;
//	goto FLAG;
//	cout << "3.xxxxxx" << endl;
//	FLAG:
//	cout << "4.xxxxxx" << endl;
//
//	return 0;
//}

//int main()
//{
//	int sum = 0, n = 100;
//	sum = (n + 1)*n / 2;
//	cout << sum << endl;
//	return 0;
//}