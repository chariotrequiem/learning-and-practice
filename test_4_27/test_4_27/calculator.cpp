#include<iostream>
using namespace std;
#include<string>
#include<fstream>

//��ͨд��
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
		//�������չ�µĹ��ܣ���Ҫ�޸�Դ��
		//����ʵ�����У��ᳫ����ԭ��
		//����ԭ�򣺶���չ���п��ţ� ���޸Ľ��йر�
	}
	int m_num1;
	int m_num2;
};

void test01()
{
	//��������������
	Calculator c;
	c.m_num1 = 10;
	c.m_num2 = 10;
	cout << c.m_num1 << " + " << c.m_num2 << " = " << c.getresult("+") << endl;
	cout << c.m_num1 << " - " << c.m_num2 << " = " << c.getresult("-") << endl;
	cout << c.m_num1 << " * " << c.m_num2 << " = " << c.getresult("*") << endl;
	cout << c.m_num1 << " / " << c.m_num2 << " = " << c.getresult("/") << endl;

}

//���ö�̬ʵ�ּ�����
//ʵ�ּ�����������
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
//�ӷ���������
class AddCalculator :public AbstractCalculator
{
public:
	int getresult()
	{
		return m_num1 + m_num2;
	}
};
//������������
class SubCalculator :public AbstractCalculator
{
public:
	int getresult()
	{
		return m_num1 - m_num2;
	}
};
//�˷���������
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
	//��̬ʹ������
	//����ָ�������ָ���������

	//�ӷ�����
	AbstractCalculator * abc = new AddCalculator;
	abc->m_num1 = 100;
	abc->m_num2 = 100;
	cout << abc->m_num1 << " + " << abc->m_num2 << " = " << abc->getresult() << endl;
	//�����ǵ�����
	delete abc;
	//��������
	abc = new SubCalculator;
	abc->m_num1 = 100;
	abc->m_num2 = 100;
	cout << abc->m_num1 << " - " << abc->m_num2 << " = " << abc->getresult() << endl;
	delete abc;
	//�˷�����
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


//���麯���ͳ�����
class Base
{
public:
	//���麯��
	//ֻҪ��һ�����麯����������Ϊ������
	//�������ص�
	//1.�޷�ʵ��������
	//2.����������������д�����еĴ��麯��������Ҳ���ڳ�����
	virtual void func() = 0;
};
class Son :public Base
{
public:
	virtual void func()
	{
		cout << "func ��������" << endl;
	}
};
void test01()
{
	//Base b;//�������޷�ʵ��������
	//new Base;//�������޷�ʵ��������
	//Son s;//����������������д�����еĴ��麯��������Ҳ���ڳ�����
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
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void Pouring() = 0;
	//���븨��
	virtual void Putthing() = 0;
	//������Ʒ
	void makedrinking()
	{
		Boil();
		Brew();
		Pouring();
		Putthing();
	}
};
//��������
class Coffee :public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "������ˮ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}
	//���뱭��
	virtual void Pouring()
	{
		cout << "���뱭��" << endl;
	}
	//���븨��
	virtual void Putthing()
	{
		cout << "������ţ��" << endl;
	}
};
//�ݲ�
class Tea :public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "��ɽȪˮ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���Ҷ" << endl;
	}
	//���뱭��
	virtual void Pouring()
	{
		cout << "���뱭��" << endl;
	}
	//���븨��
	virtual void Putthing()
	{
		cout << "������" << endl;
	}
};
void dowork(AbstractDrinking * abs)//AbstractDrinking * abs = new Coffee
{
	abs->makedrinking();
	delete abs;//�ͷ�-��ֹ��������й©
}
void test01()
{
	//��������
	cout << "��������:" << endl;
	dowork(new Coffee);
	cout << "------------------------" << endl;
	//������Ҷ
	cout << "������Ҷ:" << endl;
	dowork(new Tea);
}
int main()
{
	test01();
	return 0;
}


//�������ʹ�������
class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯������" << endl;
	}
	//�������������Խ������ָ���ͷ�����ָ�����ʱ���ɾ�������
	virtual ~Animal()
	{
		cout << "Animal������������" << endl;
	}
	//��������  ��Ҫ����Ҳ��Ҫʵ��
	//���˴��������������ҳ��������࣬�޷�ʵ��������
	virtual ~Animal() = 0;
	//���麯��
	virtual void speak() = 0;
};
Animal:: ~Animal()
{
	cout << "Animal����������������" << endl;
}
class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat���캯������" << endl;
		m_name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_name << "Сè��˵��" << endl;
	}
	~Cat()
	{
		if (m_name != NULL)
		{
			cout << "Cat������������" << endl;
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
	//����ָ��������ʱ  �����������������������������������ж������ԣ������ڴ�й©
	delete animal;
}
int main()
{
	test01();
	return 0;
}

//�����ÿ���������
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculate() = 0;
};
class VideoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};
class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};
//������
class Computer
{
public:
	Computer(CPU *cpu, VideoCard *vc, Memory *mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//�ṩ��������
	void work()
	{
		//������������������ýӿ�
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	//�ṩ��������  �ͷ������������
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
	CPU *m_cpu;//cpu�����ָ��
	VideoCard *m_vc;//�Կ����ָ��
	Memory *m_mem;//�ڴ������ָ��

};
//ÿ������������ͬ�����
class IntelCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Intel ��CPU��ʼ����" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
public:
	void display()
	{
		cout<<"Intel ���Կ���ʼ����" << endl;
	}
};
class IntelMemory :public Memory
{
public:
	void storage()
	{
		cout << "Intel ���ڴ�����ʼ����" << endl;
	}
};
class LenovoCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Lenovo ��CPU��ʼ����" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Lenovo ���Կ���ʼ����" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	void storage()
	{
		cout << "Lenovo ���ڴ�����ʼ����" << endl;
	}
};
void test01()
{
	//��һ̨����
	CPU * intelCPU = new IntelCPU;
	VideoCard * intelcard = new IntelVideoCard;
	Memory * intelmem = new IntelMemory;
	//������һ̨����
	Computer * computer1 = new Computer(intelCPU, intelcard, intelmem);
	computer1->work();
	delete computer1;
	//��װ�ڶ�̨����
	Computer * computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;
	//��װ����̨����
	Computer * computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;
}
int main()
{
	test01();
	return 0;
}


//�ı��ļ�  д�ļ�
void test01()
{
	//1.����ͷ�ļ� fstream

	//2.����������
	ofstream ofs;
	//3.ָ���򿪷�ʽ
	ofs.open("test.txt", ios::out);
	//4.д����
	ofs << "����������" << endl;
	ofs << "���䣺18" << endl;
	ofs << "�ձ���" << endl;
	//5.�ر��ļ�
	ofs.close();

}
int main()
{
	test01();
	return 0;
}



//�ı��ļ� ���ļ�
void test01()
{
	//1.����ͷ�ļ�
	//2.����������
	ifstream ifs;
	//3.���ļ�  �����ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//4.������
	//��һ��
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	//�ڶ���
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}
	//������
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}
	//������
	char c;
	while ((c = ifs.get()) != EOF)//EOF - end of file
	{
		cout << c;
	}
	//5.�ر��ļ�
	ifs.close();
}
int main()
{
	test01();
	return 0;
}




//�������ļ�д�ļ�
class Person
{
public:
	char m_name[64];
	int m_Age;
};
void test01() 
{
	//1.����ͷ�ļ�
	//2.����������
	ofstream ofs("person.txt", ios::out | ios::binary);
	//3.���ļ�
	//ofs.open("person.txt", ios::out|ios::binary);
	//4.д�ļ�
	Person p = { "����", 18 };
	ofs.write((const char*)&p, sizeof(Person));

	//5.�ر�
	ofs.close();
}
int main()
{
	test01();
	return 0;
}



//�����ƶ��ļ�
class Person
{
public:
	char m_name[64];
	int m_Age;
};
void test01()
{
	//1.����ͷ�ļ�
	//2.����������
	ifstream ifs;
	//3.���ļ�  �ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//4.���ļ�
	Person p;
	ifs.read((char *)&p, sizeof(Person));
	cout << "������ " << p.m_name << " ���䣺 " << p.m_Age << endl;
	//5.�ر��ļ�
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
//��ʼ��ѭ������
void ds_init(node **pNode)
{
	int item;
	node *temp;
	node *target;
	printf("�������ֵ������0��ɳ�ʼ��\n");

	while (i)
	{
		scanf("%d", &item);
		fflush(stdin);
		if (item == 0)
			return;
		if ((*pNode) == NULL)
		{
			//ѭ��������ֻ��һ�����
			*pNode = (node*)malloc(sizeof(struct CLinkList));
			if (!(*pNode))
				exit(0);
			(*pNode)->data = item;
			(*pNode)->next = *pNode;
		}
		else
		{
			//�ҵ�nextָ���һ�����Ľ��
			for (target = (*pNode); target->next != (*pNode); target = target->next)
				;
			//����һ���µĽ��
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
	printf("������Ҫ�������ֵ��\n");
	scanf("%d", &item);
	if (i == 1)
	{
		//�²���Ľ����Ϊ��һ�����
		temp = (node *)malloc(sizeof(struct CLinkList));
		if (!temp)
			exit(0);
		temp->data = item;

		//Ѱ�ҵ����һ�����
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


//ɾ�����
void ds_delete(node **pNode, int i)
{
	node *target;
	node *temp;
	int j = 1;
	if (i == 1)
	{
		//ɾ�����ǵ�һ�����
		//�ҵ����һ�����
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


//���ؽ������λ��
int ds_search(node *pNode, int elem)
{
	node *target;
	int i = 1;
	for (target = pNode; target->data != elem && target->next != pNode; ++i)
	{
		target = target->next;
	}
	if (target->next == pNode)//���в����ڸ�Ԫ��
		return 0;
	else
		return 1;
}