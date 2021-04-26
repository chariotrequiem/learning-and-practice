#include<iostream>
using namespace std;
#include<string>

//�Ӻ����������
class person
{
public:
	//1.��Ա��������+��
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
//2.ȫ�ֺ�������+��
person operator+(person &p1, person &p2)
{
	person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}
//�������صİ汾
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

	//���������Ҳ���Է�����������

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

�������������
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
	//���ó�Ա�������� <<�����   p.operator<<(cout)  �򻯰汾p<<cout
	//�������ó�Ա��������<<������� ��Ϊ�޷�ʵ��cout�����
	//void operator<<(cout)
	//{
	//	
	//}
	int m_A;
	int m_B;
};
//ֻ������ȫ�ֺ����������������
ostream& operator<<(ostream &cout, person p)//���� operator<<(cout,p)  ��cout<<p
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

//�������������
//�Զ�������
class MyInteger
{
	friend ostream &operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_num = 0;
	}
	//����ǰ��++�����  ����������Ϊ��һֱ��һ�����ݽ��е�������
	MyInteger& operator++()
	{
		m_num++;
		//�ٽ�����������
		return *this;
	}
	//���غ���++�����
	//void operator++(int)   int����ռλ������������������ǰ�úͺ��õ���
	MyInteger operator++(int)
	{
		//�ȼ�¼��ʱ���
		MyInteger temp = *this;
		//�ٵ���
		m_num++;
		//��󽫼�¼�������
		return temp;
	}
private:
	int m_num;
};
//����<<�����
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

//��ֵ���������
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
	//���ظ�ֵ�����
	person& operator=(person &p)
	{
		//�������ṩ����ǳ����
		//m_age = p.m_age;

		//Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�������
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		m_age = new int(*p.m_age);

		//���ض�����
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
	p2 = p1;//��ֵ����
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


//���ع�ϵ�����
class person
{
public:
	person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
	//����==
	bool operator==(person &p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		return false;
	}
	//���أ�=
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

//�����������������
//��ӡ�����
class Myprint
{
public:

	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};
//�º����ǳ���û�й̶���д��
//�ӷ���
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
	myprint("hello world");//ʹ�������ǳ��������ã����Խзº���

	MyPrint("hello world");//��������
}
void test02()
{
	Myadd myadd;
	int ret = myadd(100, 100);
	cout << "ret = " << ret << endl;
	//������������
	cout << Myadd()(100, 100) << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}

����д��
class Java
{
public:
	void header()
	{
		cout << "��ҳ�������Σ���¼��ע��...." << endl;
	}
	void footer()
	{
		cout << "�������ģ�����������վ�ڵ�ͼ" << endl;
	}
	void left()
	{
		cout << "Java,python,C++" << endl;
	}
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};
class Python
{
public:
	void header()
	{
		cout << "��ҳ�������Σ���¼��ע��...." << endl;
	}
	void footer()
	{
		cout << "�������ģ�����������վ�ڵ�ͼ" << endl;
	}
	void left()
	{
		cout << "Java,python,C++" << endl;
	}
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
class Cpp
{
public:
	void header()
	{
		cout << "��ҳ�������Σ���¼��ע��...." << endl;
	}
	void footer()
	{
		cout << "�������ģ�����������վ�ڵ�ͼ" << endl;
	}
	void left()
	{
		cout << "Java,python,C++" << endl;
	}
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}
};


�̳�ʵ��ҳ��
class Basepage
{
public:
	void header()
	{
		cout << "��ҳ�������Σ���¼��ע��...." << endl;
	}
	void footer()
	{
		cout << "�������ģ�����������վ�ڵ�ͼ" << endl;
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
		cout << "Javaѧ����Ƶ" << endl;
	}
};
//python
class python : public Basepage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
//C++
class Cpp : public Basepage
{
public:
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}
};
void test01()
{
	cout << "Java��Ƶ����" << endl;
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

�̳з�ʽ
�����̳�
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
�����̳�
class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//�����еĹ���Ȩ�޳�Ա��������Ȼ�ǹ�����Ա
		m_B = 10;//�����еı���Ȩ�޳�Ա��������Ȼ�Ǳ�����Ա
		m_C = 10;//�����е�˽��Ȩ�޳�Ա������ʲ���
	}
};
�����̳�
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
		m_A = 100;//�����й�����Ա���������б�Ϊ������Ա
		m_B = 100;//�����б�����Ա���������б�Ϊ������Ա
		m_C = 100;//������˽�г�Ա��������ʲ���
	}
};
�����̳�
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
		m_A = 100;//�����й�����Ա���������б�Ϊ˽�г�Ա
		m_B = 100;//�����б�����Ա���������б�Ϊ˽�г�Ա
		m_C = 100;//������˽�г�Ա��������ʲ���
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
	int m_C;//˽�г�Աֻ�Ǳ������ˣ������ǻ�̳���ȥ
};
class Son :public Base
{
public:
	int m_D;
};
void test01()
{
	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//����������˽�г�Ա���� �Ǳ������������� ���ֻ�Ƿ��ʲ�������ȷʵ�̳���ȥ��
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
		cout << "Base - func������������" << endl;
	}
	void func(int a)
	{
		cout << "Base - func��int a����������" << endl;
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
		cout << "Son - func������������" << endl;
	}
	int m_A;
};
//ͬ����Ա���Դ���
void test01()
{
	Son s;
	cout << "son m_A = " << s.m_A << endl;
	//���ͨ���������  ���ʵ�������ͬ����Ա�� ��Ҫ��������
	cout << "Base m_A = " << s.Base::m_A << endl;
}
//ͬ����Ա��������
void test02()
{
	Son s;
	s.func();//ֱ�ӵ��õ��������е�ͬ����Ա
	s.Base::func();//���ø�����ͬ����Ա��������
	s.Base::func(100);
	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
	//�������ʵ������б����ط���ͬ����Ա��������Ҫ��������
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
	ElemType ddata;//����
	int cur;       //�α꣨cursor��
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
	//��������һ����������������
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

ɾ��L�еĵ�i������Ԫ��
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
//���±�Ϊk�Ŀ��н����յ���������
void Free_SLL(StaticLinkList space, int k)
{
	space[k].cur = space[0].cur;
	space[0].cur = k;
}
//����L������Ԫ�ظ���
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