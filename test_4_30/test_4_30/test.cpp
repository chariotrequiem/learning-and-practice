#include<iostream>
using namespace std;
#include<string>
//
//#include"person.hpp"


//��һ�ֽ����ʽ��ֱ�Ӱ���Դ�ļ�
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
//		cout << "������ " << this->m_name << " ���䣺" << this->m_age << endl;
//	}
//	T1 m_name;
//	T2 m_age;
//};
////1.ָ�����������
//void printperson1(Person<string, int>&p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person<string,int>p("�����", 100);
//	printperson1(p);
//
//}
////2.����ģ�廯
//template<class T1,class T2>
//void printperson2(Person<T1, T2>&p)
//{
//	p.showPerson();
//	cout << "type of T1" << typeid(T1).name() << endl;
//	cout << "type of T2" << typeid(T2).name() << endl;
//}
//void test02()
//{
//	Person<string, int>p("��˽�", 90);
//	printperson2(p);
//}
////3.������ģ�廯
//template<class T>
//void printperson3(T &p)
//{
//	p.showPerson();
//	cout << "type of T = " << typeid(T).name() << endl;
//}
//void test03()
//{
//	Person<string, int>p("��ɮ", 30);
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



////��ģ����̳�
//template<class T>
//class Base
//{
//	T m;
//};
////class Son :public Base//���󣬱���֪��������T�����Ͳ��ܼ̳и�����
//class Son: public Base<int>
//{
//
//};
//void test01()
//{
//	Son s1;
//}
//
////��������ָ��������T�����ͣ�����Ҳ��Ҫ����ģ��
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




////��ģ���Ա������ʵ��
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
////���캯������ʵ��
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_age = age;
//	this->m_name = name;
//}
////��Ա��������ʵ��
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


//��ģ����ļ���д�����Լ����
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



//ͨ��ȫ�ֺ�����ӡ��Ϣ

//��ǰ�ñ�����֪��person�����
template<class T1, class T2>
class person;
//����ʵ��
template<class T1, class T2>
void printperson2(person<T1, T2>p)
{
	cout << "����ʵ�� ���� name = " << p.m_name << " age = " << p.m_age << endl;

}

template<class T1,class T2>
class person
{
	//ȫ�ֺ��� ����ʵ��
	friend void printperson(person<T1, T2>p)
	{
		cout << "name = " << p.m_name << " age = " <<p.m_age  << endl;
	}
	//ȫ�ֺ��� ����ʵ��
	//�ӿ�ģ������б�
	//���ȫ�ֺ�������ʵ�֣� ��Ҫ�ñ�������ǰ֪�������������
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

//1.ȫ�ֺ�������ʵ��
void test01()
{
	person<string, int> p("����", 20);
	printperson(p);
}

//2.ȫ�ֺ��� ����ʵ��
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