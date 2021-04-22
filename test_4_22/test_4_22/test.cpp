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
//占位参数
//占位参数也可以有默认参数
void func(int a, int )
{
	cout << "this is a function" << endl;
}
int main()
{
	func(10, 10);
	return 0;
}
//函数重载
//可以让函数名相同，提高复用性

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
void func(int &a)//若int &a = 10；不合法
{
	cout << "func(int &a)jump" << endl;
}
void func(const int &a)//const int &a = 10；合法，编译器自动优化，创建临时变量空间
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
	func2(10);//函数重载碰到默认参数会出现二义性
	return 0;
}
const double pi = 3.14;
class circle 
{
	//访问权限
public://公共权限
	//属性
	double m_r;
	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * pi * m_r;
	}
};
int main()
{
	//通过圆 类创建具体的圆（对象）
	circle C1;
	//给圆对象 的属性进行赋值
	C1.m_r = 10;
	cout << "圆的周长为： " << C1.calculateZC() << endl;
	return 0;
}
学生类
class student
{
public://公共权限
	//属性
	string m_name;
	int m_ID;
	//行为
	void show()
	{
		cout << "姓名为： " <<m_name << endl;
		cout << "学号为： " << m_ID << endl;
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
	s1.setname("张三");
	s1.show();
	return 0;
}


访问权限
1.public 公共权限       成员  类内可以访问 类外可以访问
2.protected 保护权限    成员  类内可以访问 类外不可访问    子类可以访问父类中的保护内容
3.private 私有权限      成员  类内可以访问 类外不可访问    子类不可以访问父类中的私有内容
class person
{
public:
	//公共权限
	string m_name;
protected:
	string m_car;
private:
	int m_password;
public:
	void func()
	{
		m_name = "张三";
		m_car = "大众";
		m_password = 123456;
	}
};
int main()
{
	person p1;
	p1.m_name = "李四";
	//p1.m_car = "奔驰";//保护权限内容类外访问不到
	//p1.m_password = 123;//私有权限内容类外访问不到  
	p1.func();
	return 0;
}
class c1
{
	int m_a;//默认权限  是私有
};
struct c2
{
	int m_b;//默认权限  是公共
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
	//设置姓名
	void setname(string name)
	{
		m_name = name;
	}
	//获取姓名
	string getname()
	{
		return m_name;
	}
	//获取年龄
	int getage()
	{
		m_age = 0;//初始化为0岁
		return m_age;
	}
	//设置情人
	void setlover(string lover)
	{
		m_lover = lover;
	}
	//设置金钱
	void setmoney(int money)
	{
		if (money < 0)
		{
			cout << "穷鬼怎么还欠债？" << endl;
			return;
		}
		else if (money > 10000)
		{
			cout << "做梦呢？" << endl;
			return;
		}
		m_money = money;
	}
	//获取金钱
	int getmoney()
	{
		return m_money;
	}
private:
	string m_name;//姓名 可读可写
	int m_age;//年龄  只读 不写 
	string m_lover;//情人  只写
	int m_money;//金钱 可读可写
};
int main()
{
	Person p;
	p.setname("张三");
	cout << "姓名为： " << p.getname() << endl;
	cout << "年龄为： " << p.getage() << endl;
	//设置情人为苍井
	p.setlover("苍井");
	//cout << "情人为： " << p.getLover() << endl;//是不可能访问到
	p.setmoney(1000);
	cout << "金钱为：" << p.getmoney() << endl;
	return 0;
}
class Cube
{
public:
	//设置立方体长
	void setLength(double l)
	{
		if (l <= 0)
		{
			cout << "长度不能为负，请重新输入" << endl;
			return;
		}
		else
		{
			m_L = l;
		}
	}
	//设置立方体宽
	void setWidth(double w)
	{
		if (w <= 0)
		{
			cout << "宽度不能为负，请重新输入" << endl;
			return;
		}
		else
		{
			m_W = w;
		}
	}
	//设置立方体高
	void setHeight(double h)
	{
		if (h <= 0)
		{
			cout << "高度不能为负，请重新输入" << endl;
			return;
		}
		else
		{
			m_H = h;
		}
	}
	//获取立方体长
	double getLength()
	{
		return m_L;
	}
	//获取立方体宽
	double getWidth()
	{
		return m_W;
	}
	//获取立方体高
	double getHeight()
	{
		return m_H;
	}
	//获取立方体体积
	double calculateV()
	{
		return m_L*m_W*m_H;
	}
	//获取立方体面积
	double calculateS()
	{
		return 2 * m_L*m_W + 2 * m_L*m_H + 2 * m_W*m_H;
	}
	//利用成员函数来判断两个立方体是否相等
	bool isSame_by_class(Cube &c)//此处只传一个就可以了，因为另一个可以直接在类内调用
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
//利用全局函数判断  两个立方体是否相等
bool isSame(Cube &c1, Cube &c2)//引用的方式传递
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
	cout << "c1的面积为： " << c1.calculateS() << endl;
	cout << "c1的体积为： " << c1.calculateV() << endl;
	//创建第二个立方体
	Cube c2;
	c2.setHeight(10);
	c2.setLength(10);
	c2.setWidth(10);
	//利用全局函数判断
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1和c2是相等的" << endl;
	}
	else
	{
		cout << "c1和c2不相等" << endl;
	}
	//利用成员函数判断
	ret = c1.isSame_by_class(c2);
	if (ret)
	{
		cout << "c1和c2是相等的" << endl;
	}
	else
	{
		cout << "c1和c2不相等" << endl;
	}
	return 0;
}
点类
class Point
{
public:
	void setX(int x)//设置x
	{
		m_X = x;
	}
	int getX()     //获取x
	{
		return m_X;
	}
	void setY(int y)//设置y
	{
		m_Y = y;
	}
	int getY()	   //获取y
	{
		return m_Y;
	}
private:
	int m_X;
	int m_Y;
};
圆类
class Circle
{
public:
	void setR(int r)//设置半径
	{
		m_R = r;
	}
	int getR()//获取半径
	{
		return m_R;
	}
	void setCenter(Point center)//设置圆心
	{
		m_Center = center;
	}
	Point getCenter()//获取圆心
	{
		return m_Center;
	}
private:
	//在类中可以让另一个类作为本类成员
	Point m_Center;
	int m_R;
};
#include"Circle.h"
//判断点和圆的关系
void IsINcircle(Circle &c, Point &p)
{
	int distance =
		(c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
	int rdistance = c.getR()*c.getR();
	if(distance == rdistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rdistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
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
	//1.构造函数
	person()
	{
		cout << "person构造函数的调用" << endl;
	}
	//2.析构函数
	~person()
	{
		cout << "person析构函数的调用" << endl;
	}
};
void test01()
{
	person p;//在栈上的数据，test01执行完毕后就会释放这个对象
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
	//构造函数
	person()
	{
		cout << "person无参构造函数调用" << endl;
	}//无参构造函数也叫默认构造函数
	person(int a)
	{
		age = a;
		cout << "person有参构造函数调用" << endl;
	}
	//拷贝构造函数
	person(const person &p)//加const防止自身被修改
	{
		//将传入的东西拷贝到自己身上
		cout << "person拷贝构造函数调用" << endl;
		age = p.age;
	}
	~person()
	{
		cout << "person析构函数调用" << endl;
	}
	int age;
};
//调用
void test01()
{
	//1.括号法
	//person p1;//默认构造函数调用
	//person p2(10);//有参构造函数调用
	//person p3(p2);//拷贝构造函数调用
	//注意事项
	//调用默认构造函数时，不要加()
	//cout << "age of p2 = " <<p2.age<< endl;
	//cout << "age of p3 = " << p3.age << endl;
	//2.显示法
	//person p1;
	//person p2 = person(10);//有参构造
	//person p3 = person(p2);//拷贝构造
	//person(10);//匿名对象  特点：当前行执行结束系统会立即回收掉匿名对象
	//cout << "aaaa" << endl;
	//注意事项2：不要利用拷贝构造函数来初始化匿名对象，编译器会认为person（p3）== person p3；
	//3.隐式转换法
	person p4 = 10;//相当于  写了person p4 = person（10） ：有参构造
	person p5 = p4;//拷贝构造
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
		cout << "person默认构造函数调用" << endl;
	}
	person(int age)
	{
		m_age = age;
		cout << "person有参构造函数调用" << endl;
	}
	person(const person &p)
	{
		m_age = p.m_age;
		cout << "person拷贝构造函数调用" << endl;
	}
	~person()
	{
		cout << "person析构函数调用" << endl;
	}
	int m_age;
};
//1.使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	person p1(20);
	person p2(p1);
	cout << "age of p2 = " << p2.m_age << endl;
}
//2.值传递的方式给函数参数传值
void dowork(person p)
{

}
void test02()
{
	person p;
	dowork(p);
}
//3.以值方式返回局部对象
person dowork2()
{
	person p1;
	cout << &p1 << endl;
	return p1;
	//return是以值的方式返回，并不会返回p1，而是会按照p1拷贝一个新的对象拷贝出去
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


////初始条件：顺序线性表已存在，1<=i<=ListLength(L)
////操作结果：在L中第i个位置之前插入新的数据元素e，L的长度+1
//Status ListInsert(LinkList *L, int i, ElemType e)
//{
//	int j;
//	LinkList p, s;
//	p = *L;
//	j = 1;
//	while (p < &&j < i)//用于寻找第i个结点
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

//初始条件：顺序线性表已存在，1<=i<=ListLength(L)
//操作结果：删除L的第i个数据元素，并用e返回其值，L的长度-1
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




//头插法建立单链表示例
void CreateListHead(LinkList *L, int n)
{
	LinkList p;
	int i;
	srand(time(0));//初始化随机数种子
	*L = (ListList)malloc(sizeof(Node));
	(*L)->next = NULL;
	for (i = 0; i < n; i++)
	{
		p = (ListList)malloc(sizeof(Node));//生成新结点
		p->data - rand() % 100 + 1;
		p->next = (*L)->next;
		(*L)->next = p;
	}
}

//尾插法建立单链表示例
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