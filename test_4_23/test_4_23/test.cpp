#include<iostream>
using namespace std;
#include<string>



class person
{
public:

	//thisָ��ı���  ��ָ�볣��  ָ���ָ���ǲ������޸ĵ�
	//const person * const this;
	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
	void showperson()const
	{
		this->m_B = 100;
		//this->m_A = 100;
		//this = NULL;//thisָ�벻�����޸�ָ��ָ���
	}
	void func()
	{
		m_A = 100;
	}
	int m_A;
	mutable int m_B;//��������� ��ʹ�ڳ������У�Ҳ�����޸����ֵ,���Ϲؼ���mutable
};
void test01()
{
	person p;
	p.showperson();
}
void test02()
{
	const person p;//�ڶ���ǰ��const����Ϊ������
	p.m_A = 100;
	p.m_B = 100;//m_B������ֵ���ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showperson();
	p.func();//������  �����Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
}
int main()
{
	test01();
	return 0;
}

////��ָ����ó�Ա����
//class person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is person class" << endl;
//	}
//	void showpersonage()
//	{
//		//����ԭ������Ϊ����ָ��ΪNULL
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
//		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//		this->age = age;
//	}
//	Person& PersonAddPerson(Person &p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
////1.������Ƴ�ͻ
//void test01()
//{
//	Person p1(18);
//	cout << "age of p1 = " << p1.age << endl;
//}
////2.���ض������� *this
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	//��ʽ���˼��
//	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
//	cout << "age of p2 = " << p2.age << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
//��Ա���� �� ��Ա���� �ֿ��洢��
//class person
//{
//	int m_A;//�Ǿ�̬��Ա����   ������Ķ����ϵ�
//	static int m_B;//��̬��Ա����  ��������Ķ�����
//	void func() {}//�Ǿ�̬��Ա����  ��������Ķ�����
//	static void func2() {}//��̬��Ա����  ��������Ķ�����
//};
//int person::m_B = 100;
//void test01()
//{
//	person p;
//	//�ն���ռ�õ��ڴ�ռ�Ϊ�� 1
//	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬Ϊ�����ֿն���ռ�ڴ��λ��
//	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
//	cout << "size of p = " << sizeof(p) << endl;
//}
//void test02()
//{
//	//4�ֽ�
//	person p;
//	cout << "size of p = " << sizeof(p) << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
////��̬��Ա����
//class person
//{
//public:
//	static void func()
//	{
//		m_A = 100;//��̬��Ա�������Է���  ��̬��Ա����
//		//m_B = 200;// err������̬��Ա���������Է��ʾ�̬��Ա����
//		cout << "static void func ����" << endl;
//	}
//	static int m_A;//��̬��Ա����
//	int m_B;//�Ǿ�̬��Ա����
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//private:
//	static void func2()
//	{
//		cout << "static void func2����" << endl;
//	}
//};
//int person::m_A = 100;
//void test01()
//{
//	//1.ͨ��������з���
//	person p;
//	p.func();
//
//	//2.ͨ����������
//	person::func();
//
//	//person::func2();  ������ʲ���˽�о�̬��Ա����
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
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
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
//	//��̬��Ա����������ĳ�������ϣ���Ϊ���ж��󶼹���һ������
//	//��ˣ���̬��Ա���������ַ��ʷ�ʽ
//	//1.ͨ���������
//	person p;
//	cout << p.m_A << endl;
//	//2ͨ����������
//	cout << person::m_A << endl;
//
//	//cout << person::m_B << endl;  ������ʲ���˽�о�̬������Ա
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}

//�ֻ���
//class phone
//{
//public:
//	phone(string pname)
//	{
//		cout << "phone�Ĺ��캯������" << endl;
//
//		m_pname = pname;
//	}
//	~phone()
//	{
//		cout << "phone��������������" << endl;
//	}
//	//�ֻ�Ʒ������
//	string m_pname;
//};
////����
//class person
//{
//public:
//	//phone m_phone = pname  ��ʽת����
//	person(string name, string pname):m_name(name), m_phone(pname)
//	{
//		cout << "person�Ĺ��캯������" << endl;
//	}
//	~person()
//	{
//		cout << "person��������������" << endl;
//	}
//
//	//����
//	string m_name;
//	//�ֻ�
//	phone m_phone;
//};
////����������Ķ�����Ϊ�����Ա������ʱ���ȹ���������ٹ�������
////������˳���빹���෴
//void test01()
//{
//	person p("����", "ƻ��MAX");
//	cout << p.m_name << "���ţ�" << p.m_phone.m_pname << endl;
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
//	//��ͳ��ʼ������
//	//person(int a, int b, int c)
//	//{
//	//	m_a = a;
//	//	m_b = b;
//	//	m_c = c;
//	//}
//
//	//��ʼ���б��ʼ������
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
//		cout << "person��Ĭ�Ϲ��캯������" << endl;
//	}
//	person(int age,int height)
//	{
//		m_age = age;
//		m_Height = new int(height);
//		cout << "person���вι��캯������" << endl;
//	}
//	//�Լ�ʵ�ֿ������캯�� �����ǳ��������������
//	person(const person &p)
//	{
//		cout << "�������캯������" << endl;
//		m_age = p.m_age;
//		//m_Height = p.m_Heught;������Ĭ��ʵ�ֵľ������д���
//		//�������
//		m_Height = new int(*p.m_Height);
//	}
//	~person()
//	{
//		//�������룬���������ٵ��������ͷŲ���
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "person������������" << endl;
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
//		cout << "this person Ĭ�Ϲ��캯��" << endl;
//	}
//	person(int age)
//	{
//		m_age = age;
//		cout << "this person �вι��캯��" << endl;
//	}
//	//person(const person &p)
//	//{
//	//	cout << "this person �������캯��" << endl;
//	//	m_age = p.m_age;
//	//}
//	~person()
//	{
//		cout << "this person ��������" << endl;
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