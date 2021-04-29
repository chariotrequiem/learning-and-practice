#include<iostream>
using namespace std;
#include<string>
//����ģ��
//�������ͽ�������
void swapInt(int &a, int &b)
{
	a += b;
	b = a - b;
	a -= b;
}
//�������������ͺ���
void swapDouble(double &a, double &b)
{
	a += b;
	b = a - b;
	a -= b;
}

//����ģ��
template<typename T>//����һ��ģ�壬���ٱ���������Ĵ����н����ŵ�T��Ҫ����T��һ��ͨ����������
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

	//���ú���ģ����н���
	//���ַ�ʽ��ʹ�ú���ģ��

	//1.�Զ������Ƶ�
	//myswap(a, b);

	//2.��ʾָ������
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





//����ģ��ע������

template<class T>//typename�����滻��class
void mySwap(T &a, T &b)
{
	a += b;
	b = a - b;
	a -= b;
}
//1.�Զ������Ƶ�������Ҫ�Ƶ���һ�µ��������Ͳſ���ʹ��
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	//mySwap(a, b);//��ȷ
	//mySwap(a, c);//�����Ƶ�����һ�µ�T����
	cout << "a = " << a << " b = " << b << endl;
}

//2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
template<class T>
void func()
{
	cout << "func  " << endl;
}
void test02()
{
	//func();//err - δȷ��T������
	func<int>();//right - ȷ����T������
}
int main()
{
	//test01();
	test02();
	return 0;
}



//ʵ��ͨ��  �������������ĺ���
//��������ģ��
template<class T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
//�����㷨ģ��
template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//�϶����ֵ�±�
		for (int j = i+1; j < len; j++)
		{
			//�϶������ֵ�ȱ�������ֵҪС�� ˵��j�±��Ԫ�ز����������ֵ
			if (arr[max] < arr[j])
			{
				max = j;//�������ֵ�±�
			}
		}
		if (max != i)
		{
			//����max��iԪ��
			mySwap(arr[max], arr[i]);
		}
	}
}
//��ӡ����ģ��
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


//��ͨ������ģ�庯������
//��ͨ����
int myAdd01(int a, int b)
{
	return a + b;
}
//����ģ��
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


	//�Զ������Ƶ�  ���ᷢ����ʽ����ת��
	//cout << myAdd02(a, c) << endl;//err

	//��ʾָ�����͵��ú���ģ��
	cout << myAdd02<int>(a, c) << endl;
}
int main()
{
	test01();
	return 0;
}

void myPrint(int a, int b)
{
	cout << "���õ�����ͨ����" << endl;
}
template<class T>
void myPrint(T a, T b)
{
	cout << "���õ���ģ�庯��" << endl;
}
void test01()
{
	int a = 10;
	int b = 20;
	//myPrint(a, b);

	//ͨ����ģ��Ĳ����б�ǿ�Ƶ��ú���ģ��
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


//ģ��ľ�����
//ģ���ͨ���Բ��������ܵ�,��Щ�ض��������ͣ���Ҫ�þ��廯����������ʵ��


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
//�Ա����������Ƿ����
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


//���þ��廯��Person�İ汾ʵ�ִ��룬���廯���ȵ���
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


//��ģ��
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
	Person<string, int>p1("�����", 99);
	p1.showPerson();
}
int main()
{
	test01();
	return 0;
}

//��ģ���뺯��ģ������
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

//1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
void test01()
{
	//Person p("�����", 21);//err�޷����Զ������Ƶ�
	Person<string, int>p("�����", 21);//��ȷ��ֻ������ʾָ������
	p.showPerson();
}
//2.��ģ����ģ������б��п�����Ĭ�ϲ���
void test02()
{
	Person<string>p("��˽�", 999);
	p.showPerson();
}
int main()
{
	test01();
	test02();
	return 0;
}

//��ģ���г�Ա��������ʱ��
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

	//��ģ���еĳ�Ա����
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
	//m.func1();//��������˵���������òŻ�ȥ������Ա����
	m.func2();

}
int main()
{
	test01();
	return 0;
}