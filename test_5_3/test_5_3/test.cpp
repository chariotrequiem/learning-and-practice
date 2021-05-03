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
		利用尾插法像数组中插入数据
		arr1.Insert(i);
    }
	printArray(arr1);
	cout << arr1.getCapacity() << endl;
	cout << arr1.getSize() << endl;

	cout << "拷贝构造arr2: " << endl;
	MyArray <int>arr2(arr1);
	printArray(arr2);

	尾删
	arr2.Delete();	
	cout << "arr2尾删后" << endl;
	cout << arr2.getCapacity() << endl;
	cout << arr2.getSize() << endl;
	printArray(arr2);

}


测试自定义数据类型
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
		cout << "姓名：" << arr[i].m_Name << "\t年龄：" << arr[i].m_Age << endl;
	}
}
void test02()
{
	MyArray<Person>arr(10);
	Person p1("孙悟空", 999);
	Person p2("韩信", 30);
	Person p3("妲己", 20);
	Person p4("赵云", 25);
	Person p5("安其拉", 27);

	将数据插入到数组中
	arr.Insert(p1);
	arr.Insert(p2);
	arr.Insert(p3);
	arr.Insert(p4);
	arr.Insert(p5);

	打印数组
	printPersonArray(arr);

	输出容量
	cout << arr.getCapacity() << endl;
	输出大小
	cout << arr.getSize() << endl;

}
int main()
{
	test01();
	test02();
	return 0;
}