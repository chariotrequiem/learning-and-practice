#include<iostream>
using namespace std;
#include<string>
//
//#include"person.hpp"


//第一种解决方式，直接包含源文件
//#include"person.cpp"

//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "姓名： " << this->m_name << " 年龄：" << this->m_age << endl;
//	}
//	T1 m_name;
//	T2 m_age;
//};
////1.指定传入的类型
//void printperson1(Person<string, int>&p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person<string,int>p("孙悟空", 100);
//	printperson1(p);
//
//}
////2.参数模板化
//template<class T1,class T2>
//void printperson2(Person<T1, T2>&p)
//{
//	p.showPerson();
//	cout << "type of T1" << typeid(T1).name() << endl;
//	cout << "type of T2" << typeid(T2).name() << endl;
//}
//void test02()
//{
//	Person<string, int>p("猪八戒", 90);
//	printperson2(p);
//}
////3.整个类模板化
//template<class T>
//void printperson3(T &p)
//{
//	p.showPerson();
//	cout << "type of T = " << typeid(T).name() << endl;
//}
//void test03()
//{
//	Person<string, int>p("唐僧", 30);
//	printperson3(p);
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}



////类模板与继承
//template<class T>
//class Base
//{
//	T m;
//};
////class Son :public Base//错误，必须知道父类中T的类型才能继承给子类
//class Son: public Base<int>
//{
//
//};
//void test01()
//{
//	Son s1;
//}
//
////如果想灵活指定父类中T的类型，子类也需要变类模板
//template <class T1, class T2>
//class Son2 : public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "type of T1 = " << typeid(T1).name()<< endl;
//		cout << "type of T2 = " << typeid(T2).name()<< endl;
//	}
//	T1 obj;
//};
//void test02()
//{
//	Son2<int ,char>s2;
//}
//int main()
//{
//	test02();
//	return 0;
//}




////类模板成员函数外实现
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	//{
//	//	this->m_age = age;
//	//	this->m_name = name;
//	//}
//	void showPerson();
//	//{
//	//	cout << "name = " << this->m_name << "age = " << this->m_age << endl;
//	//}
//	T1 m_name;
//	T2 m_age;
//};
//
////构造函数类外实现
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_age = age;
//	this->m_name = name;
//}
////成员函数类外实现
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "name = " << this->m_name << " age = " << this->m_age << endl;
//}
//void test01()
//{
//	Person<string, int>p("Tom", 20);
//	p.showPerson();
//}
//int main()
//{
//	test01();
//	return 0;
//}


//类模板分文件编写问题以及解决
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showperson(); 
//
//
//	T1 m_name;
//	T2 m_age;
//};

//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//template<class T1, class T2>
//void Person<T1, T2>::showperson()
//{
//	cout << "name = " << this->m_name << " age = " << this->m_age << endl;
//}
//
//void test01()
//{
//	Person<string, int>p("Jerry", 20);
//	p.showperson();
//}
//
//int main() 
//{
//	test01();
//	return 0;
//}



//通过全局函数打印信息

//提前让编译器知道person类存在
template<class T1, class T2>
class person;
//类外实现
template<class T1, class T2>
void printperson2(person<T1, T2>p)
{
	cout << "类外实现 —— name = " << p.m_name << " age = " << p.m_age << endl;

}

template<class T1,class T2>
class person
{
	//全局函数 类内实现
	friend void printperson(person<T1, T2>p)
	{
		cout << "name = " << p.m_name << " age = " <<p.m_age  << endl;
	}
	//全局函数 类外实现
	//加空模板参数列表
	//如果全局函数类外实现， 需要让编译器提前知道这个函数存在
	friend void printperson2<>(person<T1, T2>p);

public:
	person(T1 name, T2 age)
	{
		this->m_age = age;
		this->m_name = name;
	}

private:
	T1 m_name;
	T2 m_age;
};

//1.全局函数类内实现
void test01()
{
	person<string, int> p("张三", 20);
	printperson(p);
}

//2.全局函数 类外实现
void test02()
{
	person<string, int> p("Jreey", 20);
	printperson2(p);
}

int main()
{
	//test01();
	test02();
	return 0;
}