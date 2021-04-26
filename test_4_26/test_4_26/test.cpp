#include<iostream>
using namespace std;
#include<string>

//加号运算符重载
class person
{
public:
	//1.成员函数重载+号
	//person operator+(person &p)
	//{
	//	person temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}
	int m_A;
	int m_B;
};
//2.全局函数重载+号
person operator+(person &p1, person &p2)
{
	person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}
//函数重载的版本
person operator+(person &p1, int num)
{
	person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}
void test01()
{
	person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	person p2;
	p2.m_A = 10;
	p2.m_B = 10;
	person p3 = p1 + p2;

	//运算符重载也可以发生函数重载

	person p4 = p1 + 100;//person + int
	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;

	cout << "p4.m_A = " << p4.m_A << endl;
	cout << "p4.m_B = " << p4.m_B << endl;
}
int main()
{
	test01();
	return 0;
}

左移运算符重载
class person
{
	friend ostream& operator<<(ostream &cout, person p);
public:
	person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
private:
	//利用成员函数重载 <<运算符   p.operator<<(cout)  简化版本p<<cout
	//不会利用成员函数重载<<运算符， 因为无法实现cout在左侧
	//void operator<<(cout)
	//{
	//	
	//}
	int m_A;
	int m_B;
};
//只能利用全局函数重载左移运算符
ostream& operator<<(ostream &cout, person p)//本质 operator<<(cout,p)  简化cout<<p
{
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B ;
	return cout;
}
void test01()
{
	person p(10, 10);
	//p.m_A = 10;
	//p.m_B = 10;
	cout << p <<endl;
}
int main()
{
	test01();
	return 0;
}

//递增运算符重载
//自定义整形
class MyInteger
{
	friend ostream &operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_num = 0;
	}
	//重载前置++运算符  返回引用是为了一直对一个数据进行递增操作
	MyInteger& operator++()
	{
		m_num++;
		//再将自身做返回
		return *this;
	}
	//重载后置++运算符
	//void operator++(int)   int代表占位参数，可以用于区分前置和后置递增
	MyInteger operator++(int)
	{
		//先记录当时结果
		MyInteger temp = *this;
		//再递增
		m_num++;
		//最后将记录结果返回
		return temp;
	}
private:
	int m_num;
};
//重载<<运算符
ostream &operator<<(ostream& cout,MyInteger myint)
{
	cout << myint.m_num;
	return cout;
}
void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}
void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}

//赋值运算符操作
class person
{
public:
	person(int age)
	{
		m_age = new int(age);
	}
	~person()
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}
	//重载赋值运算符
	person& operator=(person &p)
	{
		//编译器提供的是浅拷贝
		//m_age = p.m_age;

		//应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		m_age = new int(*p.m_age);

		//返回对象本身
		return *this;
	}
	int *m_age;

};
void test01()
{
	person p1(18);
	person p2(20);
	person p3(30);
	p3 = p2 = p1;
	p2 = p1;//赋值操作
	cout << "age of p1 = " << *p1.m_age << endl;
	cout << "age of p2 = " << *p2.m_age << endl;
	cout << "age of p3 = " << *p3.m_age << endl;

}
int main()
{
	test01();
	//int a = 10;
	//int = 20;
	//int c = 30;
	//a = b = c;
	//cout << a << b << c << endl;
	return 0;
}


//重载关系运算符
class person
{
public:
	person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
	//重载==
	bool operator==(person &p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		return false;
	}
	//重载！=
	bool operator!=(person &p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return false;
		}
		return true;
	}
	string m_name;
	int m_age;
};
void test01()
{
	person p1("tom", 18);
	person p2("tom", 18);
	if (p1 == p2)
	{
		cout << "p1 = p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
	if (p1 != p2)
	{
		cout << "p1 != p2" << endl;
	}
	else
	{
		cout << "p1 = p2" << endl;
	}
}
int main()
{
	test01();
	return 0;
}

//函数调用运算符重载
//打印输出类
class Myprint
{
public:

	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};
//仿函数非常灵活，没有固定的写法
//加法类
class Myadd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void MyPrint(string test)
{
	cout << test << endl;
}
void test01()
{
	Myprint myprint;
	myprint("hello world");//使用起来非常像函数调用，所以叫仿函数

	MyPrint("hello world");//函数调用
}
void test02()
{
	Myadd myadd;
	int ret = myadd(100, 100);
	cout << "ret = " << ret << endl;
	//匿名函数对象
	cout << Myadd()(100, 100) << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}

常规写法
class Java
{
public:
	void header()
	{
		cout << "首页，公开课，登录，注册...." << endl;
	}
	void footer()
	{
		cout << "帮助中心，交流合作，站内地图" << endl;
	}
	void left()
	{
		cout << "Java,python,C++" << endl;
	}
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};
class Python
{
public:
	void header()
	{
		cout << "首页，公开课，登录，注册...." << endl;
	}
	void footer()
	{
		cout << "帮助中心，交流合作，站内地图" << endl;
	}
	void left()
	{
		cout << "Java,python,C++" << endl;
	}
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};
class Cpp
{
public:
	void header()
	{
		cout << "首页，公开课，登录，注册...." << endl;
	}
	void footer()
	{
		cout << "帮助中心，交流合作，站内地图" << endl;
	}
	void left()
	{
		cout << "Java,python,C++" << endl;
	}
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};


继承实现页面
class Basepage
{
public:
	void header()
	{
		cout << "首页，公开课，登录，注册...." << endl;
	}
	void footer()
	{
		cout << "帮助中心，交流合作，站内地图" << endl;
	}
	void left()
	{
		cout << "Java,python,C++" << endl;
	}
};
//Java
class Java : public Basepage
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};
//python
class python : public Basepage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};
//C++
class Cpp : public Basepage
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};
void test01()
{
	cout << "Java视频如下" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "------------------------------" << endl;
	python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "------------------------------" << endl;
	Cpp cp;
	cp.header();
	cp.footer();
	cp.left();
	cp.content();

}
int main()
{
	test01();
	return 0;
}

继承方式
公共继承
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
公共继承
class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//父类中的公共权限成员到子类依然是公共成员
		m_B = 10;//父类中的保护权限成员到子类依然是保护成员
		m_C = 10;//父类中的私有权限成员子类访问不到
	}
};
保护继承
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100;//父类中公共成员，到子类中变为保护成员
		m_B = 100;//父类中保护成员，到子类中变为保护成员
		m_C = 100;//父类中私有成员，子类访问不到
	}
};
保护继承
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 100;//父类中公共成员，到子类中变为私有成员
		m_B = 100;//父类中保护成员，到子类中变为私有成员
		m_C = 100;//父类中私有成员，子类访问不到
	}
};
int main()
{

	return 0;
}


class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;//私有成员只是被隐藏了，但还是会继承下去
};
class Son :public Base
{
public:
	int m_D;
};
void test01()
{
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中所有私有成员属性 是被编译器隐藏了 因此只是访问不到，但确实继承下去了
	cout << "size of son = " << sizeof(Son) << endl;//16
}
int main()
{
	test01();
	return 0;
}

class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base - func（）函数调用" << endl;
	}
	void func(int a)
	{
		cout << "Base - func（int a）函数调用" << endl;
	}
	int m_A;
};
class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son - func（）函数调用" << endl;
	}
	int m_A;
};
//同名成员属性处理
void test01()
{
	Son s;
	cout << "son m_A = " << s.m_A << endl;
	//如果通过子类对象  访问到父类中同名成员， 需要加作用域
	cout << "Base m_A = " << s.Base::m_A << endl;
}
//同名成员函数处理
void test02()
{
	Son s;
	s.func();//直接调用的是子类中的同名成员
	s.Base::func();//调用父类中同名成员用作用域
	s.Base::func(100);
	//入果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
	//如果想访问到父类中被隐藏符得同名成员函数，需要加作用域
	//s.func(100);
}
int main()
{
	//test01();
	test02();
	return 0;
}



#define MAXSIZE 1000
typedef struct
{
	ElemType ddata;//数据
	int cur;       //游标（cursor）
}Component, StaticLinkList;

Static InitList(StaticLinkList space)
{
	int i;
	for (i = 0; i < MAXSIZE - 1; i++)
	{
		space[i].cur = i + 1;
		space[MAXSIZE - 1].cur = 0;
		return ok;
	}
}


int Malloc_SLL(StaticLinkList space)
{
	int i = space[0].cur;
	if (space[0].cur)
		space[0].sur = space[i].cur;
	//把他的下一个分量用来做备用
	return i;
}



Status ListInsert(StaticLinkList L, int i, ElemType)
{
	int i, j, k;
	k = MAX_SIZE - 1;
	if (i<1 || i>ListLength(L) + 1)
	{
		return ERROR;
	}
	j = Malloc_SLL(L);
	if (j)
	{
		L[j].data = e;
		for (l = 1; l <= i - 1; l++)
		{
			k = L[k].cur;
		}
		L[j].cur = L[k].cur;
		L[k].cur = j;
		return OK;
	}
	return ERROR;
}

删除L中的第i个数据元素
Status ListDelete(StaticLinkList L, int i)
{
	int j, k;
	if (i<1 || i>ListLength(L))
	{
		return ERROR;
	}
	k = MAX_SIZE - 1;
	for (j = 1; j <= i - 1; j++)
	{
		k = L[k].cur;
	}
	j = L[k].cur;
	L[k].cur = L[j].cur;
	Free_SLL(L, j);
	return OK;
}
//将下标为k的空闲结点回收到备用链表
void Free_SLL(StaticLinkList space, int k)
{
	space[k].cur = space[0].cur;
	space[0].cur = k;
}
//返回L中数据元素个数
int ListLength(StaticLinkList L)
{
	int j = 0;
	int i = L[MAXSIZE - 1].cur;
	while (i)
	{
		i = L[i].cur;
		i++;
	}
	return j;
}