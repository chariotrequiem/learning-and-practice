#include<iostream>
using namespace std;
#include<string>
#include<fstream>

//普通写法
class Calculator
{
public:

	int getresult(string oper)
	{
		if (oper == "+")
		{
			return m_num1 + m_num2;
		}
		else if (oper == "-")
		{
			return m_num1 - m_num2;
		}
		else if (oper == "*")
		{
			return m_num1 * m_num2;
		}
		else if (oper == "/")
		{
			return m_num1 / m_num2;
		}
		//如果想扩展新的功能，需要修改源码
		//在真实开发中，提倡开闭原则
		//开闭原则：对扩展进行开放， 对修改进行关闭
	}
	int m_num1;
	int m_num2;
};

void test01()
{
	//创建计算器对象
	Calculator c;
	c.m_num1 = 10;
	c.m_num2 = 10;
	cout << c.m_num1 << " + " << c.m_num2 << " = " << c.getresult("+") << endl;
	cout << c.m_num1 << " - " << c.m_num2 << " = " << c.getresult("-") << endl;
	cout << c.m_num1 << " * " << c.m_num2 << " = " << c.getresult("*") << endl;
	cout << c.m_num1 << " / " << c.m_num2 << " = " << c.getresult("/") << endl;

}

//利用多态实现计算器
//实现计算器抽象类
class AbstractCalculator
{
public:
	virtual int getresult()
	{
		return 0;
	}
	int m_num1;
	int m_num2;
};
//加法计算器类
class AddCalculator :public AbstractCalculator
{
public:
	int getresult()
	{
		return m_num1 + m_num2;
	}
};
//减法计算器类
class SubCalculator :public AbstractCalculator
{
public:
	int getresult()
	{
		return m_num1 - m_num2;
	}
};
//乘法计算器类
class MulCalculator :public AbstractCalculator
{
public:
	int getresult()
	{
		return m_num1 * m_num2;
	}
};
void test02()
{
	//多态使用条件
	//父类指针或引用指向子类对象

	//加法运算
	AbstractCalculator * abc = new AddCalculator;
	abc->m_num1 = 100;
	abc->m_num2 = 100;
	cout << abc->m_num1 << " + " << abc->m_num2 << " = " << abc->getresult() << endl;
	//用完后记得销毁
	delete abc;
	//减法运算
	abc = new SubCalculator;
	abc->m_num1 = 100;
	abc->m_num2 = 100;
	cout << abc->m_num1 << " - " << abc->m_num2 << " = " << abc->getresult() << endl;
	delete abc;
	//乘法运算
	abc = new MulCalculator;
	abc->m_num1 = 100;
	abc->m_num2 = 100;
	cout << abc->m_num1 << " * " << abc->m_num2 << " = " << abc->getresult() << endl;
	delete abc;

}
int main()
{
	//test01();
	test02();
	return 0;
}


//纯虚函数和抽象类
class Base
{
public:
	//纯虚函数
	//只要有一个纯虚函数，这个类称为抽象类
	//抽象类特点
	//1.无法实例化对象
	//2.抽象类的子类必须重写父类中的纯虚函数，否则也属于抽象类
	virtual void func() = 0;
};
class Son :public Base
{
public:
	virtual void func()
	{
		cout << "func 函数调用" << endl;
	}
};
void test01()
{
	//Base b;//抽象类无法实例化对象
	//new Base;//抽象类无法实例化对象
	//Son s;//抽象类的子类必须重写父类中的纯虚函数，否则也属于抽象类
	Base * base = new Son;
	base->func();
}
int main()
{
	test01();
	return 0;
}




class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void Pouring() = 0;
	//加入辅料
	virtual void Putthing() = 0;
	//制作饮品
	void makedrinking()
	{
		Boil();
		Brew();
		Pouring();
		Putthing();
	}
};
//制作咖啡
class Coffee :public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮自来水" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	virtual void Pouring()
	{
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void Putthing()
	{
		cout << "加糖与牛奶" << endl;
	}
};
//泡茶
class Tea :public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮山泉水" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲茶叶" << endl;
	}
	//倒入杯中
	virtual void Pouring()
	{
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void Putthing()
	{
		cout << "加柠檬" << endl;
	}
};
void dowork(AbstractDrinking * abs)//AbstractDrinking * abs = new Coffee
{
	abs->makedrinking();
	delete abs;//释放-防止堆区数据泄漏
}
void test01()
{
	//制作咖啡
	cout << "制作咖啡:" << endl;
	dowork(new Coffee);
	cout << "------------------------" << endl;
	//制作茶叶
	cout << "制作茶叶:" << endl;
	dowork(new Tea);
}
int main()
{
	test01();
	return 0;
}


//虚析构和纯虚析构
class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}
	//利用虚析构可以解决父类指针释放子类指针对象时不干净的问题
	virtual ~Animal()
	{
		cout << "Animal析构函数调用" << endl;
	}
	//纯虚析构  需要声明也需要实现
	//有了纯虚析构后，这个类页数与抽象类，无法实例化对象
	virtual ~Animal() = 0;
	//纯虚函数
	virtual void speak() = 0;
};
Animal:: ~Animal()
{
	cout << "Animal纯虚析构函数调用" << endl;
}
class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat构造函数调用" << endl;
		m_name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_name << "小猫在说话" << endl;
	}
	~Cat()
	{
		if (m_name != NULL)
		{
			cout << "Cat析构函数调用" << endl;
			delete m_name;
			m_name = NULL;
		}
	}
	string *m_name;
};
void test01()
{
	Animal * animal = new Cat("Tom");
	animal->speak();
	//父类指针在析构时  不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏
	delete animal;
}
int main()
{
	test01();
	return 0;
}

//抽象出每个零件的类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculate() = 0;
};
class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};
class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
};
//电脑类
class Computer
{
public:
	Computer(CPU *cpu, VideoCard *vc, Memory *mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//提供工作函数
	void work()
	{
		//让零件工作起来，调用接口
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	//提供析构函数  释放三个电脑零件
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU *m_cpu;//cpu的零件指针
	VideoCard *m_vc;//显卡零件指针
	Memory *m_mem;//内存条零件指针

};
//每个厂商生产不同的零件
class IntelCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Intel 的CPU开始运行" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
public:
	void display()
	{
		cout<<"Intel 的显卡开始运行" << endl;
	}
};
class IntelMemory :public Memory
{
public:
	void storage()
	{
		cout << "Intel 的内存条开始运行" << endl;
	}
};
class LenovoCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Lenovo 的CPU开始运行" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Lenovo 的显卡开始运行" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	void storage()
	{
		cout << "Lenovo 的内存条开始运行" << endl;
	}
};
void test01()
{
	//第一台电脑
	CPU * intelCPU = new IntelCPU;
	VideoCard * intelcard = new IntelVideoCard;
	Memory * intelmem = new IntelMemory;
	//创建第一台电脑
	Computer * computer1 = new Computer(intelCPU, intelcard, intelmem);
	computer1->work();
	delete computer1;
	//组装第二台电脑
	Computer * computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;
	//组装第三台电脑
	Computer * computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;
}
int main()
{
	test01();
	return 0;
}


//文本文件  写文件
void test01()
{
	//1.包含头文件 fstream

	//2.创建流对象
	ofstream ofs;
	//3.指定打开方式
	ofs.open("test.txt", ios::out);
	//4.写内容
	ofs << "姓名：张三" << endl;
	ofs << "年龄：18" << endl;
	ofs << "姓别：男" << endl;
	//5.关闭文件
	ofs.close();

}
int main()
{
	test01();
	return 0;
}



//文本文件 读文件
void test01()
{
	//1.包含头文件
	//2.创建流对象
	ifstream ifs;
	//3.打开文件  并且判断是否打开成功
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//4.读数据
	//第一种
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	//第二种
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}
	//第三种
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}
	//第四种
	char c;
	while ((c = ifs.get()) != EOF)//EOF - end of file
	{
		cout << c;
	}
	//5.关闭文件
	ifs.close();
}
int main()
{
	test01();
	return 0;
}




//二进制文件写文件
class Person
{
public:
	char m_name[64];
	int m_Age;
};
void test01() 
{
	//1.包含头文件
	//2.创建流对象
	ofstream ofs("person.txt", ios::out | ios::binary);
	//3.打开文件
	//ofs.open("person.txt", ios::out|ios::binary);
	//4.写文件
	Person p = { "张三", 18 };
	ofs.write((const char*)&p, sizeof(Person));

	//5.关闭
	ofs.close();
}
int main()
{
	test01();
	return 0;
}



//二进制读文件
class Person
{
public:
	char m_name[64];
	int m_Age;
};
void test01()
{
	//1.包含头文件
	//2.创建流对象
	ifstream ifs;
	//3.打开文件  判断文件是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//4.读文件
	Person p;
	ifs.read((char *)&p, sizeof(Person));
	cout << "姓名： " << p.m_name << " 年龄： " << p.m_Age << endl;
	//5.关闭文件
	ifs.close();
}
int main()
{
	test01();
	return 0;
}


typedef struct CLinkList
{
	int data;
	struct CLinkList *next;
}node;
//初始化循环链表
void ds_init(node **pNode)
{
	int item;
	node *temp;
	node *target;
	printf("输入结点的值，输入0完成初始化\n");

	while (i)
	{
		scanf("%d", &item);
		fflush(stdin);
		if (item == 0)
			return;
		if ((*pNode) == NULL)
		{
			//循环链表中只有一个结点
			*pNode = (node*)malloc(sizeof(struct CLinkList));
			if (!(*pNode))
				exit(0);
			(*pNode)->data = item;
			(*pNode)->next = *pNode;
		}
		else
		{
			//找到next指向第一个结点的结点
			for (target = (*pNode); target->next != (*pNode); target = target->next)
				;
			//生成一个新的结点
			temp = (node *)malloc(sizeof(struct CLinkList));
			if (!temp)
				exit(0);
			temp->data = item;
			temp->next = *pNode;
			target->next = temp;
		}
	}
}



void ds_insert(node **pNode, int i)
{
	node *temp;
	node *target;
	node *p;
	int item;
	int j = 1;
	printf("输入想要插入结点的值：\n");
	scanf("%d", &item);
	if (i == 1)
	{
		//新插入的结点作为第一个结点
		temp = (node *)malloc(sizeof(struct CLinkList));
		if (!temp)
			exit(0);
		temp->data = item;

		//寻找到最后一个结点
		for (target = (*pNode); target->next != (*pNode); target = target->next)
			;
		temp->next = (*pNode);
		target->next = temp;
		*pNode = temp;
	}
	else
	{
		target = *pNode;
		for (; j < (i - 1); ++j)
		{
			target = target->next;
		}
		temp = (node *)malloc(sizeof(struct CLinkList));
		if (!temp)
			exit(0);
		temp->data = item;
		p = target->next;
		target->next = temp;
		temp->next = p;
	}
}


//删除结点
void ds_delete(node **pNode, int i)
{
	node *target;
	node *temp;
	int j = 1;
	if (i == 1)
	{
		//删除的是第一个结点
		//找到最后一个结点
		for (target = *pNode; target->next != *pNode; target = target->next)
			;
		temp = *pNode;
		*pNode = (*pNode)->next;
		target->next = *pNode;
		free(temp);
	}
	else
	{
		target = *pNode;
		for (; j < i - 1; ++j)
		{
			target = target->next;
		}
		temp = target->next;
		target->next = temp->next;
		free(temp);
	}
}


//返回结点所在位置
int ds_search(node *pNode, int elem)
{
	node *target;
	int i = 1;
	for (target = pNode; target->data != elem && target->next != pNode; ++i)
	{
		target = target->next;
	}
	if (target->next == pNode)//表中不存在该元素
		return 0;
	else
		return 1;
}