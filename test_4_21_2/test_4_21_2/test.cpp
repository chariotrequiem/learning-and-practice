#include<iostream>
using namespace std;
//全局变量
//int g_a = 10;
//int g_b = 10;
//const int c_g_a = 10;
//const int c_g_b = 10;
//int main()
//{
//	//全局区——全局变量、静态变量、常量
//	int a = 10;
//	int b = 10;
//	cout << "局部变量a的地址为：  " << &a << endl;
//	cout << "局部变量b的地址为：  " << &b << endl;
//	cout << "全局变量g_a的地址为：" << &g_a << endl;
//	cout << "全局变量g_b的地址为：" << &g_b << endl;
//	//静态变量——在普通变量前加static，属于静态变量
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "静态变量s_a的地址为：" << &s_a << endl;
//	cout << "静态变量s_b的地址为：" << &s_b << endl;
//	//常量
//	//字符串常量
//	cout << "字符串常量地址为：   " << &"hello world" << endl;
//	//const修饰的变量
//	//const修饰的全局变量，const修饰的局部变量
//	cout << "全局常量c_g_a地址为：" << &c_g_a << endl;
//	cout << "全局常量c_g_b地址为：" << &c_g_b << endl;
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "局部常量c_l_a地址为：" << &c_l_a << endl;
//	cout << "局部常量c_l_b地址为：" << &c_l_b << endl;
//	return 0;
//}


//栈区数据注意事项————不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放

//int* func(int b)//形参数据也存放在栈区
//{  
//	b = 100;
//	int a = 10;//局部变量  存放在栈区，栈区的数据在函数执行完自动释放
//	return &a;//返回局部变量地址
//
//}
//int main()
//{
//	//接受func函数返回值
//	int* p = func(1);
//	cout << *p << endl;
//	cout << *p << endl;
//	return 0;
//}

//int* func()
//{
//	//利用new关键字，可以将数据开辟到堆区
//	//指针本质也是局部变量，放在栈上，指针保存的数据放在堆区
//	int * p = new int(10);
//	return p;
//}
//int main()
//{
//	//在堆区开辟数据
//	int *p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	return 0;
//}
//int *func()
//{
//	//在堆区创建整形数据
//	//new返回的是 该数据类型的指针
//	int * p = new int(10);
//	return p;
//}//此处的指针p随着函数运行完就会自动释放
//void test01()
//{
//	int *ps = func();//ps指向堆区整形数据
//	cout << *ps << endl;
//	cout << *ps << endl;
//	cout << *ps << endl;
//	//堆区的数据由程序员管理开辟，程序员管理释放
//	//如果想释放，利用关键字delete
//	delete ps;
//	//cout << *ps << endl;//内存已经被释放，再次访问就是非法，会报错
//}
//int main()
//{
//	test01();
//	return 0;
//}
//void test02()
//{
//	//在堆区创建10整型数据的数组
//	int * arr = new int[10];//10代表有10个元素
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;//给10个元素赋值100~109
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//释放堆区数组
//	//释放数组时，要加[]才可以
//	delete[] arr;
//}
//int main()
//{
//	test02();
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//引用——数据类型 &别名 = 原名
//	int &b = a;
//	cout << b << endl;
//	cout << a << endl;
//	b = 20;
//	cout << b << endl;
//	cout << a << endl;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int &b = a;
//	//int %c//错误，引用必须初始化
//	int c = 20;
//	b = c;//赋值操作，而不是更改引用
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//
//	return 0;
//}
//
//void swap01(int a, int b)
//{
//	a += b;
//	b = a - b;
//	a -= b;
//	cout <<"a = "<< a << endl;
//	cout <<"b = "<< b << endl;
//}
//void swap02(int *a, int *b)
//{
//	*a += *b;
//	*b = *a - *b;
//	*a -= *b;
//	cout << "a = " << *a << endl;
//	cout << "b = " << *b << endl;
//}
//void swap03(int &a,int &b)//此处的int &a,int &b分别是a，b的别名
//{
//	a += b;
//	b = a - b;
//	a -= b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//swap01(a, b);//值传递，形参不会修饰实参
//	//swap02(&a, &b);//址传递,形参会修饰实参
//	swap03(a, b);//引用传递，形参会修饰实参
//	cout << a << endl;
//	cout << b << endl;
//	return 0;
//}


//引用做函数返回值
//1.不要返回局部变量的引用
//int& test01()
//{
//	int a = 10;//局部变量存放在四区中的 栈区
//	return a;
//}
////2.函数的调用可以作为左值
//int& test02()
//{
//	static int a = 10;//静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
//	return a;
//}
//int main()
//{
//	int &ref = test01();
//	cout << ref << endl;//第一次结果正确，因为编译器做了保留
//	cout << ref << endl;//第二次结果错误，因为a的内存已经释放
//	int &ref2 = test02();
//	cout << ref2 << endl;
//	cout << ref2 << endl;
//	test02() = 100;//如果函数的返回值是引用，这个调用可以作为左值
//	cout << ref2 << endl;
//	cout << ref2 << endl;
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int &b = a;
//	int &c = b;
//	cout << a;
//	cout << b;
//	cout << c;
//}

//发现是引用，转换为int * const ref = &a;
//void func(int& ref)
//{
//	ref = 100;//ref是引用，转换为*ref = 100
//}
//int main()
//{
//	int a = 10;
//	//自动转换为 int* const ret = &a;指针常量是指针只想不可改，也说明为什么引用不可更改
//	int &ref = a;
//	ref = 20;//内部发现ref是引用，自动转换为：*ref = 20;
//	cout << "a: " << a << endl;
//	cout << "ref: " << ref << endl;
//	func(a);
//	return 0;
//}

//打印数据函数
//void showvalue(const int& val)
//{
//	//val = 1000;//err——val不可变
//	cout << "val= " << val << endl;
//}
//int main()
//{
//	//int a = 10;
//	//int& ref = 10;//err——引用必须引用一块合法的内存空间
//	//true——加上const后，编译器将代码修改为：int temp = 10;const int& ref = temp;
//	//const int& ref = 10;
//	//ref = 20;//err——加入const之后变为只读，不可修改
//
//	//函数中利用常量引用防止误操作修改实参
//	int a = 100;
//	showvalue(a);
//	cout << "a= " << a << endl;
//	return 0;
//}





