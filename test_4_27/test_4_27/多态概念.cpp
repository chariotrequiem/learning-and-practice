#include<iostream>
using namespace std;


//��̬
//������
class Animal
{
public:
	//�麯��
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};
//è��
class Cat :public Animal
{
public:
	//��д  ��������ֵ����  ������  �����б���ȫ��ͬ
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};
//����
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//ִ��˵������
//��ַ���  �ڱ���׶ξ�ȷ��������ַ
//�����ִ����è˵������ô���������ַ�Ͳ�����󶨣���Ҫ�����н׶ν��а󶨣���ַ���

//��̬��̬��������
//1.�м̳й�ϵ
//2.����Ҫ��д�����麯��

//��̬��̬ʹ��
//�����ָ���������  ִ���������
void dospeak(Animal &animal)//Animal &animal = cat;
{
	animal.speak();
}
void test01()
{
	Cat cat;
	dospeak(cat);
	Dog dog;
	dospeak(dog);
}
void test02()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}