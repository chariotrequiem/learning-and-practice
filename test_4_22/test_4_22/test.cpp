#include<iostream>
using namespace std;
#include<string>

int func(int a,int b = 20,int c = 30)
{
	return a + b + c;
}

int main()
{
	cout << func(10, 30) << endl;
	return 0;
}
//ռλ����
//ռλ����Ҳ������Ĭ�ϲ���
void func(int a, int )
{
	cout << "this is a function" << endl;
}
int main()
{
	func(10, 10);
	return 0;
}
//��������
//�����ú�������ͬ����߸�����

void func()
{
	cout << "func jump" << endl;
}
void func(int a)
{
	cout << "func(int a) jump" << endl;
}
void func(double a)
{
	cout << "func(double a) jump" << endl;
}
void func(double a, int b)
{
	cout << "func(double a,int b) jump" << endl;
}
void func(int b, double a)
{
	cout << "func(int b, double a) jump" << endl;
}
int main()
{
	func();
	func(10);
	func(3.14);
	func(3.14, 10);
	func(10, 3.14);
	return 0;
}
void func(int &a)//��int &a = 10�����Ϸ�
{
	cout << "func(int &a)jump" << endl;
}
void func(const int &a)//const int &a = 10���Ϸ����������Զ��Ż���������ʱ�����ռ�
{
	cout << "func(const int &a)jump" << endl;
}
int main()
{
	//int a = 10;
	//func(a);//func(int &a)jump
	func(10);//func(const int &a)jump
	return 0;
}
void func2(int a, int b = 10)
{
	cout << "func2(int a, int b)jump" << endl;
}
void func2(int a)
{
	cout << "func2(int a)jump" << endl;
}
int main()
{
	func2(10);//������������Ĭ�ϲ�������ֶ�����
	return 0;
}
const double pi = 3.14;
class circle 
{
	//����Ȩ��
public://����Ȩ��
	//����
	double m_r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * pi * m_r;
	}
};
int main()
{
	//ͨ��Բ �ഴ�������Բ������
	circle C1;
	//��Բ���� �����Խ��и�ֵ
	C1.m_r = 10;
	cout << "Բ���ܳ�Ϊ�� " << C1.calculateZC() << endl;
	return 0;
}
ѧ����
class student
{
public://����Ȩ��
	//����
	string m_name;
	int m_ID;
	//��Ϊ
	void show()
	{
		cout << "����Ϊ�� " <<m_name << endl;
		cout << "ѧ��Ϊ�� " << m_ID << endl;
	}
	void setname(string name)
	{
		m_name = name;
	}
	void setID(int ID)
	{
		m_ID = ID;
	}
};
int main()
{
	student s1;
	s1.setID(2020210561);
	s1.setname("����");
	s1.show();
	return 0;
}


����Ȩ��
1.public ����Ȩ��       ��Ա  ���ڿ��Է��� ������Է���
2.protected ����Ȩ��    ��Ա  ���ڿ��Է��� ���ⲻ�ɷ���    ������Է��ʸ����еı�������
3.private ˽��Ȩ��      ��Ա  ���ڿ��Է��� ���ⲻ�ɷ���    ���಻���Է��ʸ����е�˽������
class person
{
public:
	//����Ȩ��
	string m_name;
protected:
	string m_car;
private:
	int m_password;
public:
	void func()
	{
		m_name = "����";
		m_car = "����";
		m_password = 123456;
	}
};
int main()
{
	person p1;
	p1.m_name = "����";
	//p1.m_car = "����";//����Ȩ������������ʲ���
	//p1.m_password = 123;//˽��Ȩ������������ʲ���  
	p1.func();
	return 0;
}
class c1
{
	int m_a;//Ĭ��Ȩ��  ��˽��
};
struct c2
{
	int m_b;//Ĭ��Ȩ��  �ǹ���
};
int main()
{
	c2 two;
	two.m_b = 100;
	c1 one;
	one.m_a = 100;
	return 0;
}
class Person
{
public:
	//��������
	void setname(string name)
	{
		m_name = name;
	}
	//��ȡ����
	string getname()
	{
		return m_name;
	}
	//��ȡ����
	int getage()
	{
		m_age = 0;//��ʼ��Ϊ0��
		return m_age;
	}
	//��������
	void setlover(string lover)
	{
		m_lover = lover;
	}
	//���ý�Ǯ
	void setmoney(int money)
	{
		if (money < 0)
		{
			cout << "�����ô��Ƿծ��" << endl;
			return;
		}
		else if (money > 10000)
		{
			cout << "�����أ�" << endl;
			return;
		}
		m_money = money;
	}
	//��ȡ��Ǯ
	int getmoney()
	{
		return m_money;
	}
private:
	string m_name;//���� �ɶ���д
	int m_age;//����  ֻ�� ��д 
	string m_lover;//����  ֻд
	int m_money;//��Ǯ �ɶ���д
};
int main()
{
	Person p;
	p.setname("����");
	cout << "����Ϊ�� " << p.getname() << endl;
	cout << "����Ϊ�� " << p.getage() << endl;
	//��������Ϊ�Ծ�
	p.setlover("�Ծ�");
	//cout << "����Ϊ�� " << p.getLover() << endl;//�ǲ����ܷ��ʵ�
	p.setmoney(1000);
	cout << "��ǮΪ��" << p.getmoney() << endl;
	return 0;
}
class Cube
{
public:
	//���������峤
	void setLength(double l)
	{
		if (l <= 0)
		{
			cout << "���Ȳ���Ϊ��������������" << endl;
			return;
		}
		else
		{
			m_L = l;
		}
	}
	//�����������
	void setWidth(double w)
	{
		if (w <= 0)
		{
			cout << "��Ȳ���Ϊ��������������" << endl;
			return;
		}
		else
		{
			m_W = w;
		}
	}
	//�����������
	void setHeight(double h)
	{
		if (h <= 0)
		{
			cout << "�߶Ȳ���Ϊ��������������" << endl;
			return;
		}
		else
		{
			m_H = h;
		}
	}
	//��ȡ�����峤
	double getLength()
	{
		return m_L;
	}
	//��ȡ�������
	double getWidth()
	{
		return m_W;
	}
	//��ȡ�������
	double getHeight()
	{
		return m_H;
	}
	//��ȡ���������
	double calculateV()
	{
		return m_L*m_W*m_H;
	}
	//��ȡ���������
	double calculateS()
	{
		return 2 * m_L*m_W + 2 * m_L*m_H + 2 * m_W*m_H;
	}
	//���ó�Ա�������ж������������Ƿ����
	bool isSame_by_class(Cube &c)//�˴�ֻ��һ���Ϳ����ˣ���Ϊ��һ������ֱ�������ڵ���
	{
		if (m_L == c.getLength() && m_H== c.getHeight() && m_W == c.getWidth())
		{
			return true;
		}
		return false;
	}
private:
	double m_L;
	double m_W;
	double m_H;

};
//����ȫ�ֺ����ж�  �����������Ƿ����
bool isSame(Cube &c1, Cube &c2)//���õķ�ʽ����
{
	if (c1.getLength() == c2.getLength() &&c1.getHeight() == c2.getHeight() && c1.getWidth() == c2.getWidth())
	{
		return true;
	}
	return false;
}
int main()
{
	Cube c1;
	c1.setHeight(10);
	c1.setWidth(10);
	c1.setLength(10);
	cout << "c1�����Ϊ�� " << c1.calculateS() << endl;
	cout << "c1�����Ϊ�� " << c1.calculateV() << endl;
	//�����ڶ���������
	Cube c2;
	c2.setHeight(10);
	c2.setLength(10);
	c2.setWidth(10);
	//����ȫ�ֺ����ж�
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "c1��c2�����" << endl;
	}
	//���ó�Ա�����ж�
	ret = c1.isSame_by_class(c2);
	if (ret)
	{
		cout << "c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "c1��c2�����" << endl;
	}
	return 0;
}
����
class Point
{
public:
	void setX(int x)//����x
	{
		m_X = x;
	}
	int getX()     //��ȡx
	{
		return m_X;
	}
	void setY(int y)//����y
	{
		m_Y = y;
	}
	int getY()	   //��ȡy
	{
		return m_Y;
	}
private:
	int m_X;
	int m_Y;
};
Բ��
class Circle
{
public:
	void setR(int r)//���ð뾶
	{
		m_R = r;
	}
	int getR()//��ȡ�뾶
	{
		return m_R;
	}
	void setCenter(Point center)//����Բ��
	{
		m_Center = center;
	}
	Point getCenter()//��ȡԲ��
	{
		return m_Center;
	}
private:
	//�����п�������һ������Ϊ�����Ա
	Point m_Center;
	int m_R;
};
#include"Circle.h"
//�жϵ��Բ�Ĺ�ϵ
void IsINcircle(Circle &c, Point &p)
{
	int distance =
		(c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
	int rdistance = c.getR()*c.getR();
	if(distance == rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}
int main()
{
	Circle c;
	c.setR(10);
	Point h;
	h.setX(10);
	h.setY(10);
	c.setCenter(h);
	Point p;
	p.setX(10);
	p.setY(10);
	IsINcircle(c, p);
	return 0;
}
class person
{
public:
	//1.���캯��
	person()
	{
		cout << "person���캯���ĵ���" << endl;
	}
	//2.��������
	~person()
	{
		cout << "person���������ĵ���" << endl;
	}
};
void test01()
{
	person p;//��ջ�ϵ����ݣ�test01ִ����Ϻ�ͻ��ͷ��������
}
int main()
{
	person p;
	//test01();
	system("pause");
	return 0;
}
class person
{
public:
	//���캯��
	person()
	{
		cout << "person�޲ι��캯������" << endl;
	}//�޲ι��캯��Ҳ��Ĭ�Ϲ��캯��
	person(int a)
	{
		age = a;
		cout << "person�вι��캯������" << endl;
	}
	//�������캯��
	person(const person &p)//��const��ֹ�����޸�
	{
		//������Ķ����������Լ�����
		cout << "person�������캯������" << endl;
		age = p.age;
	}
	~person()
	{
		cout << "person������������" << endl;
	}
	int age;
};
//����
void test01()
{
	//1.���ŷ�
	//person p1;//Ĭ�Ϲ��캯������
	//person p2(10);//�вι��캯������
	//person p3(p2);//�������캯������
	//ע������
	//����Ĭ�Ϲ��캯��ʱ����Ҫ��()
	//cout << "age of p2 = " <<p2.age<< endl;
	//cout << "age of p3 = " << p3.age << endl;
	//2.��ʾ��
	//person p1;
	//person p2 = person(10);//�вι���
	//person p3 = person(p2);//��������
	//person(10);//��������  �ص㣺��ǰ��ִ�н���ϵͳ���������յ���������
	//cout << "aaaa" << endl;
	//ע������2����Ҫ���ÿ������캯������ʼ���������󣬱���������Ϊperson��p3��== person p3��
	//3.��ʽת����
	person p4 = 10;//�൱��  д��person p4 = person��10�� ���вι���
	person p5 = p4;//��������
}
int main()
{
	test01();
	return 0;
}
class person
{
public:
	person()
	{
		cout << "personĬ�Ϲ��캯������" << endl;
	}
	person(int age)
	{
		m_age = age;
		cout << "person�вι��캯������" << endl;
	}
	person(const person &p)
	{
		m_age = p.m_age;
		cout << "person�������캯������" << endl;
	}
	~person()
	{
		cout << "person������������" << endl;
	}
	int m_age;
};
//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	person p1(20);
	person p2(p1);
	cout << "age of p2 = " << p2.m_age << endl;
}
//2.ֵ���ݵķ�ʽ������������ֵ
void dowork(person p)
{

}
void test02()
{
	person p;
	dowork(p);
}
//3.��ֵ��ʽ���ؾֲ�����
person dowork2()
{
	person p1;
	cout << &p1 << endl;
	return p1;
	//return����ֵ�ķ�ʽ���أ������᷵��p1�����ǻᰴ��p1����һ���µĶ��󿽱���ȥ
}
void test03()
{
	person p = dowork2();
	cout << &p << endl;
}
int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}


////��ʼ������˳�����Ա��Ѵ��ڣ�1<=i<=ListLength(L)
////�����������L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ���+1
//Status ListInsert(LinkList *L, int i, ElemType e)
//{
//	int j;
//	LinkList p, s;
//	p = *L;
//	j = 1;
//	while (p < &&j < i)//����Ѱ�ҵ�i�����
//	{
//		p = p->next;
//		j++
//	}
//	if (!p || j > i)
//	{
//		return ERROR;
//	}
//	s = (LinkList)malloc(sizeof(Node));
//	s->data = e;
//
//	s->next = p->next;
//	p->next = s;
//	return OK;
//}

//��ʼ������˳�����Ա��Ѵ��ڣ�1<=i<=ListLength(L)
//���������ɾ��L�ĵ�i������Ԫ�أ�����e������ֵ��L�ĳ���-1
Status ListDelete(LinkList *L, int i, ElenType *e)
{
	int j;
	LinkList p, q;
	p = *L;
	j = 1;
	while (p->next && j < i)
	{
		p = p->next;
		++j;
	}
	if (!(p->next) || j > i)
	{
		return ERROR;
	}
	q = p->next;
	p->next = q->next;
	*e = q->data;
	free(q);
	return OK;
}




//ͷ�巨����������ʾ��
void CreateListHead(LinkList *L, int n)
{
	LinkList p;
	int i;
	srand(time(0));//��ʼ�����������
	*L = (ListList)malloc(sizeof(Node));
	(*L)->next = NULL;
	for (i = 0; i < n; i++)
	{
		p = (ListList)malloc(sizeof(Node));//�����½��
		p->data - rand() % 100 + 1;
		p->next = (*L)->next;
		(*L)->next = p;
	}
}

//β�巨����������ʾ��
void CreateListTail(LinkList *L, int n)
{
	LinkList p, r;
	int i;
	srand(time(0));
	*L = (LinkList)malloc(sizeof(Node));
	r = *L;

	for (i = 0; i < n; i++)
	{
		p = (Node *)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		r->next = p;
		r = p;
	}
	r->next = NULL;
}