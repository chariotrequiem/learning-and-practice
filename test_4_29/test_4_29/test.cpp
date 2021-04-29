#include<iostream>
using namespace std;
#include<string>
//函数模板
//两个整型交换函数
void swapInt(int &a, int &b)
{
	a += b;
	b = a - b;
	a -= b;
}
//交换两个浮点型函数
void swapDouble(double &a, double &b)
{
	a += b;
	b = a - b;
	a -= b;
}

//函数模板
template<typename T>//声明一个模板，高速编译器后面的代码中紧跟着的T不要报错，T是一个通用数据类型
void  myswap(T &a, T &b)
{
	a += b;
	b = a - b;
	a -= b;
}
void test01()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);

	//利用函数模板进行交换
	//两种方式来使用函数模板

	//1.自动类型推导
	//myswap(a, b);

	//2.显示指定类型
	myswap<int>(a, b);
	cout << "a = " << a << " b = " << b << endl;
}
void test02()
{
	double c = 10.1;
	double d = 20.2;
	swapDouble(c, d);
	cout << "c = " << c << " d = " << d << endl;
}


int main()
{
	test01();
	//test02();

	return 0;
}





//函数模板注意事项

template<class T>//typename可以替换成class
void mySwap(T &a, T &b)
{
	a += b;
	b = a - b;
	a -= b;
}
//1.自动类型推导，必须要推导出一致的数据类型才可以使用
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	//mySwap(a, b);//正确
	//mySwap(a, c);//错误！推导不出一致的T类型
	cout << "a = " << a << " b = " << b << endl;
}

//2.模板必须要确定出T的数据类型，才可以使用
template<class T>
void func()
{
	cout << "func  " << endl;
}
void test02()
{
	//func();//err - 未确认T的类型
	func<int>();//right - 确认了T的类型
}
int main()
{
	//test01();
	test02();
	return 0;
}



//实现通用  对数组进行排序的函数
//交换函数模板
template<class T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
//排序算法模板
template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//认定最大值下标
		for (int j = i+1; j < len; j++)
		{
			//认定的最大值比遍历的数值要小， 说明j下标的元素才是真正最大值
			if (arr[max] < arr[j])
			{
				max = j;//更新最大值下标
			}
		}
		if (max != i)
		{
			//交换max和i元素
			mySwap(arr[max], arr[i]);
		}
	}
}
//打印数组模板
template<class T>
void printArr(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
}
void test01()
{
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArr(charArr, num);
}
void test02()
{
	int arr[] = { 0,5,6,9,8,4,12,446,1 };
	int num = sizeof(arr) / sizeof(int);
	mySort(arr, num);
	printArr(arr, num);
}

int main()
{
	test01();
	test02();

	return 0;
}


//普通函数与模板函数区别
//普通函数
int myAdd01(int a, int b)
{
	return a + b;
}
//函数模板
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';//a - 97, c - 99
	cout << myAdd01(a, c) << endl;


	//自动类型推导  不会发生隐式类型转换
	//cout << myAdd02(a, c) << endl;//err

	//显示指定类型调用函数模板
	cout << myAdd02<int>(a, c) << endl;
}
int main()
{
	test01();
	return 0;
}

void myPrint(int a, int b)
{
	cout << "调用的是普通函数" << endl;
}
template<class T>
void myPrint(T a, T b)
{
	cout << "调用的是模板函数" << endl;
}
void test01()
{
	int a = 10;
	int b = 20;
	//myPrint(a, b);

	//通过空模板的参数列表，强制调用函数模板
	myPrint<>(a, b);
}
int main()
{
	test01();

	return 0;
}


template<class T>
void f(T a,T b)
{
	if(a > b){....}
}


//模板的局限性
//模板的通用性并不是万能的,有些特定数据类型，需要用具体化方法做特殊实现


class Person
{
public:
	Person(string name, int age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	string m_name;
	int m_age;
};
//对比两个数据是否相等
template<class T>
bool myCompare(T &a, T &b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}


//利用具体化的Person的版本实现代码，具体化优先调用
template<>bool myCompare(Person &p1, Person &p2)
{
	if (p1.m_name == p2.m_name && p1.m_age == p2.m_age)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void test01()
{
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a = b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}
void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1 = p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}

int main()
{
	test01();
	test02();
	return 0;
}


//类模板
template<class NameType, class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	void showPerson()
	{
		cout << "name = " << this->m_Name << " age = " << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};
void test01()
{
	Person<string, int>p1("孙悟空", 99);
	p1.showPerson();
}
int main()
{
	test01();
	return 0;
}

//类模板与函数模板区别
template<class NameType, class AgeType = int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	void showPerson()
	{
		cout << "name = " << this->m_Name << " age = " << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};

//1.类模板没有自动类型推导的使用方式
void test01()
{
	//Person p("孙悟空", 21);//err无法用自动类型推导
	Person<string, int>p("孙悟空", 21);//正确，只能用显示指定类型
	p.showPerson();
}
//2.类模板在模板参数列表中可以有默认参数
void test02()
{
	Person<string>p("猪八戒", 999);
	p.showPerson();
}
int main()
{
	test01();
	test02();
	return 0;
}

//类模板中成员函数创建时机
class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

template<class T>
class Myclass
{
public:
	T obj;

	//类模板中的成员函数
	void func1()
	{
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}
};

void test01()
{
	Myclass<Person2>m;
	//m.func1();//编译会出错，说明函数调用才回去创建成员函数
	m.func2();

}
int main()
{
	test01();
	return 0;
}