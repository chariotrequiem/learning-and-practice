#include<iostream>
using namespace std;


//int main()
//{
//	cout << "Enter two numbers" << endl;
//	int num1 = 0, num2 = 0;
//	cin >> num1 >> num2;
//	cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
//
//	return 0;
//}
//int main()
//{
//	cout << "Hello world" << endl;
//	return 0;
//}
//int main()
//{
//	cout << "Enter two numbers" << endl;
//	int num1 = 0, num2 = 0;
//	cin >> num1 >> num2;
//	cout << "The number of ";
//	cout << num1;
//	cout << " and ";
//	cout << num2 ;
//	cout << " is ";
//	cout << num1*num2 << endl;
//	/* /**/*/
//	return 0;
//}

//int main()
//{
//	cout << /*"*/"*/"/*"*/;
//	return 0;
//}
//int main()
//{
//	int i = 50, sum = 0;
//	while (i <= 500 && i>=50)
//	{
//		sum += i;
//		++i;
//	}
//	cout << "Sum of 50 to 500 inclusive is " << sum << endl;
//
//	return 0;
//}
//int main()
//{
//	int i = 10;
//	while (i >= 0)
//	{
//		cout << i<<" ";
//		i--;
//	}
//	return 0;
//}
//int main()
//{
//	int num1 = 0, num2 = 0, i = 0;
//	cout << "Enter two numbers " << endl;
//	cin >> num1 >> num2;
//	if (num1 > num2)
//	{
//		i = num2;
//		while (i <= num1 && i >= num2)
//		{
//			cout << i << " ";
//			i++;
//		}
//	}
//	else
//	{
//		i = num1;
//		while (i <= num2 && i >= num1)
//		{
//			cout << i << " ";
//			i++;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int sum = 0, val = 0;
//	while (cin >> val)
//	sum += val;
//	cout << "Sum is " << sum << endl;
//	return 0;
//}

//int main()
//{
//int currval = 0, val = 0;
//if (cin >> currval) {
//	int cnt = 1;
//	while (cin >> val) {
//		if (val == currval)
//			++cnt;
//		else {
//			cout << currval << " occurs "
//				<< cnt << " times " << endl;
//			currval = val;
//			cnt = 1;
//		}
//	}
//	cout << currval << " occurs "
//		<< cnt << " times " << endl;
//}
//return 0;
//}


//#include "Sales_item.h"
//int main()
//{
//	Sales_item item1, item2;
//	std::cin >> item1 >> item2;
//	if (item1.isbn() == item2.isbn()) {
//		std::cin << item1 + item2 << std::endl;
//		return 0;
//	}
//	else {
//		std::cerr << "Data must refer to same ISBN" <<std:: endl;
//		return -1;
//	}
//	//cout << item1 + item2 << endl;
//	//return 0;
//}
//int main()
//{
//	unsigned u = 10, u2 = 42;
//	cout << u2 - u << endl;
//	cout << u - u2 << endl;
//	int i = 10, i2 = 42;
//	cout << i2 - i << endl;
//	cout << i - i2 << endl;
//	cout << i - u << endl;
//	cout << u - i << endl;
//	cout << "welcome to this beautiful world "
//		" nice to meet you" << endl;
//	int _;
//	int catch - 22;
//	int 1_or2_ = 1;
//	double Double = 3.14;
//	return 0;
//}
//int i = 42;
//int main()
//{
//	int i = 100;
//	int j = i;
//	cout << j;
//	return 0;
//}
//int i = 0;
//for (int i = 0; i != 10; i++)
//sum += i;
//cout << i << " " << sum << endl;

//int main()
//{
//	int i, &ri = i;
//	i = 5;
//	ri = 10;
//	cout << i << " " << ri << endl;
//	return 0;
//}

//int main()
//{
//	int * p = nullptr;//等价于int * p1 = 0;
//	int *p2 = 0;//直接将p初始化字面常量0
//	//需要首先#include cstdlib
//	int *p3 = NULL;//等价于int *p3 = 0;
//	//将int变量直接赋值给指针是错误的操作，即使int变量的值恰好等于0也不行
//	int ZERO = 0;
//	pi = ZERO;//错误：不能把int变量直接赋值给指针
//	return 0;
//}

//int main()
//{
//	
//	//int i = 0, j = 0;
//	//int *p = &i;
//	//p = &j;
//	//*p = 10;
//	//cout << j;
//	int *p1, p2;//p1是指针，p2是int型变量
//	
//	return 0;
//}

int main()
{
	int ival = 1024;
	int *pi = &ival;//pi指向一个int型的数
	int **pii = &pi;//pii指向一个int型的指针
	return 0;
}

