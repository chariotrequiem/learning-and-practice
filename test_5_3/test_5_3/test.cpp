# include<iostream>
using namespace std;
#include"MyArray.h"
#include<string>

int 




void printArray(MyArray <int>&arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}
void test01()
{
	MyArray <int>arr1(5);
	for (int i = 0; i < 5; i++)
	{
		����β�巨�������в�������
		arr1.Insert(i);
    }
	printArray(arr1);
	cout << arr1.getCapacity() << endl;
	cout << arr1.getSize() << endl;

	cout << "��������arr2: " << endl;
	MyArray <int>arr2(arr1);
	printArray(arr2);

	βɾ
	arr2.Delete();	
	cout << "arr2βɾ��" << endl;
	cout << arr2.getCapacity() << endl;
	cout << arr2.getSize() << endl;
	printArray(arr2);

}


�����Զ�����������
class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;

};


void printPersonArray(MyArray <Person>&arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "������" << arr[i].m_Name << "\t���䣺" << arr[i].m_Age << endl;
	}
}
void test02()
{
	MyArray<Person>arr(10);
	Person p1("�����", 999);
	Person p2("����", 30);
	Person p3("槼�", 20);
	Person p4("����", 25);
	Person p5("������", 27);

	�����ݲ��뵽������
	arr.Insert(p1);
	arr.Insert(p2);
	arr.Insert(p3);
	arr.Insert(p4);
	arr.Insert(p5);

	��ӡ����
	printPersonArray(arr);

	�������
	cout << arr.getCapacity() << endl;
	�����С
	cout << arr.getSize() << endl;

}
int main()
{
	test01();
	test02();
	return 0;
}