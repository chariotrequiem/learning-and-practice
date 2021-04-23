#include<iostream>
using namespace std;
#include<string>



class person
{
public:

	//this指针的本质  是指针常量  指针的指向是不可以修改的
	//const person * const this;
	//在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
	void showperson()const
	{
		this->m_B = 100;
		//this->m_A = 100;
		//this = NULL;//this指针不可以修改指针指向的
	}
	void func()
	{
		m_A = 100;
	}
	int m_A;
	mutable int m_B;//特殊变量， 即使在常函数中，也可以修改这个值,加上关键字mutable
};
void test01()
{
	person p;
	p.showperson();
}
void test02()
{
	const person p;//在对象前加const，变为常对象
	p.m_A = 100;
	p.m_B = 100;//m_B是特殊值，在常对象下也可以修改

	//常对象只能调用常函数
	p.showperson();
	p.func();//常对象  不可以调用普通成员函数，因为普通成员函数可以修改属性
}
int main()
{
	test01();
	return 0;
}

////空指针调用成员函数
//class person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is person class" << endl;
//	}
//	void showpersonage()
//	{
//		//报错原因是因为传入指针为NULL
//
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "age = " << this->m_Age << endl;
//	}
//	int m_Age;
//};
//void test01()
//{
//	person * p = NULL;
//	//p->showClassName();
//	p->showpersonage();
//}
//int main()
//{
//	test01();
//	return 0;
//}

//class Person
//{
//public:
//	Person(int age)
//	{
//		//this指针指向被调用的成员函数所属的对象
//		this->age = age;
//	}
//	Person& PersonAddPerson(Person &p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
////1.解决名称冲突
//void test01()
//{
//	Person p1(18);
//	cout << "age of p1 = " << p1.age << endl;
//}
////2.返回对象本身用 *this
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	//链式编程思想
//	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
//	cout << "age of p2 = " << p2.age << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
//成员变量 和 成员函数 分开存储的
//class person
//{
//	int m_A;//非静态成员变量   属于类的对象上的
//	static int m_B;//静态成员变量  不属于类的对象上
//	void func() {}//非静态成员函数  不属于类的对象上
//	static void func2() {}//静态成员函数  不属于类的对象上
//};
//int person::m_B = 100;
//void test01()
//{
//	person p;
//	//空对象占用的内存空间为： 1
//	//C++编译器会给每个空对象也分配一个字节空间，为了区分空对象占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//	cout << "size of p = " << sizeof(p) << endl;
//}
//void test02()
//{
//	//4字节
//	person p;
//	cout << "size of p = " << sizeof(p) << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
////静态成员函数
//class person
//{
//public:
//	static void func()
//	{
//		m_A = 100;//静态成员函数可以访问  静态成员变量
//		//m_B = 200;// err——静态成员函数不可以访问静态成员变量
//		cout << "static void func 调用" << endl;
//	}
//	static int m_A;//静态成员变量
//	int m_B;//非静态成员变量
//
//	//静态成员函数也是有访问权限的
//private:
//	static void func2()
//	{
//		cout << "static void func2调用" << endl;
//	}
//};
//int person::m_A = 100;
//void test01()
//{
//	//1.通过对象进行访问
//	person p;
//	p.func();
//
//	//2.通过类名访问
//	person::func();
//
//	//person::func2();  类外访问不到私有静态成员函数
//}
//int main()
//{
//	test01();
//	return 0;
//}
//class person
//{
//public:
//	static int m_A;
//	//静态成员变量也是有访问权限的
//private:
//	static int m_B;
//};
//int person::m_A = 100;
//int person::m_B = 200;
////void test01()
////{
////	person p;
////	cout << p.m_A << endl;//100
////	person p2;
////	p2.m_A = 200;
////	cout << p.m_A << endl;//200
////}
//void test02()
//{
//	//静态成员变量不属于某个对象上，因为所有对象都共享一份数据
//	//因此，静态成员变量有两种访问方式
//	//1.通过对象访问
//	person p;
//	cout << p.m_A << endl;
//	//2通过类名访问
//	cout << person::m_A << endl;
//
//	//cout << person::m_B << endl;  类外访问不到私有静态变量成员
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}

//手机类
//class phone
//{
//public:
//	phone(string pname)
//	{
//		cout << "phone的构造函数调用" << endl;
//
//		m_pname = pname;
//	}
//	~phone()
//	{
//		cout << "phone的析构函数调用" << endl;
//	}
//	//手机品牌名称
//	string m_pname;
//};
////人类
//class person
//{
//public:
//	//phone m_phone = pname  隐式转换法
//	person(string name, string pname):m_name(name), m_phone(pname)
//	{
//		cout << "person的构造函数调用" << endl;
//	}
//	~person()
//	{
//		cout << "person的析构函数调用" << endl;
//	}
//
//	//姓名
//	string m_name;
//	//手机
//	phone m_phone;
//};
////当其他的类的对象作为本类成员，构造时，先构造类对象，再构造自身
////析构的顺序与构造相反
//void test01()
//{
//	person p("张三", "苹果MAX");
//	cout << p.m_name << "拿着：" << p.m_phone.m_pname << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}
//class A {};
//class B
//{
//	A a;
//};
//class person
//{
//public:
//
//	//传统初始化操作
//	//person(int a, int b, int c)
//	//{
//	//	m_a = a;
//	//	m_b = b;
//	//	m_c = c;
//	//}
//
//	//初始化列表初始化属性
//	person(int a,int b,int c) :m_a(a), m_b(b), m_c(c)
//	{
//
//	}
//	int m_a;
//	int m_b;
//	int m_c;
//};
//void test01()
//{
//	//person p(10,20,30);
//	person p(30,20,10);
//	cout << "m_a = " << p.m_a << endl
//		 << "m_b = " << p.m_b << endl
//		 << "m_c = " << p.m_c << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}
//class person
//{
//public:
//	person()
//	{
//		cout << "person的默认构造函数调用" << endl;
//	}
//	person(int age,int height)
//	{
//		m_age = age;
//		m_Height = new int(height);
//		cout << "person的有参构造函数调用" << endl;
//	}
//	//自己实现拷贝构造函数 来解决浅拷贝带来的问题
//	person(const person &p)
//	{
//		cout << "拷贝构造函数调用" << endl;
//		m_age = p.m_age;
//		//m_Height = p.m_Heught;编译器默认实现的就是这行代码
//		//深拷贝操作
//		m_Height = new int(*p.m_Height);
//	}
//	~person()
//	{
//		//析构代码，将堆区开辟的数据做释放操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "person析构函数调用" << endl;
//	}
//	int m_age;
//	int *m_Height;
//};
//void test01()
//{
//	person p1(18,160);
//	cout << "age of p1 = " << p1.m_age << " height of p1 = " << *p1.m_Height << endl;
//	person p2(p1);
//	cout << "age of p2 = " << p2.m_age << " height of p = " << *p2.m_Height << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}
//class person
//{
//public:
//	person()
//	{
//		cout << "this person 默认构造函数" << endl;
//	}
//	person(int age)
//	{
//		m_age = age;
//		cout << "this person 有参构造函数" << endl;
//	}
//	//person(const person &p)
//	//{
//	//	cout << "this person 拷贝构造函数" << endl;
//	//	m_age = p.m_age;
//	//}
//	~person()
//	{
//		cout << "this person 析构函数" << endl;
//	}
//	int m_age;
//};
//
//void test01()
//{
//	person p;
//	p.m_age = 18;
//	person p2(p);
//	cout << "age of p2 = " << p2.m_age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}