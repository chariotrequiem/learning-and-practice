#include<iostream>
using namespace std;
#include<string>

class Building;
class goodgay
{
public:
	goodgay();

	void visit();//让visit可以访问Building中私有成员
	void visit2();//让visit2不可以访问Building中私有成员
	Building * building;
};
class Building
{
	//告诉编译器，good gay类下的visit成员函数作为本类的好朋友，可以访问私有成员
	friend void goodgay::visit();
public:
	Building();

public:
	string m_sittingroom;
private:
	string m_bedroom;
};
//类外实现成员函数
Building::Building()
{
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}
goodgay::goodgay()
{
	building = new Building;
}

void goodgay::visit()
{
	cout << "visit 函数正在访问：" << building->m_sittingroom << endl;
	cout << "visit 函数正在访问：" << building->m_bedroom << endl;

}
void goodgay::visit2()
{
	cout << "visit2 函数正在访问：" << building->m_sittingroom << endl;
	//cout << "visit2 函数正在访问：" << building->m_bedroom << endl;
}
void test01()
{
	goodgay gg;
	gg.visit();
	gg.visit2();
}
int main()
{
	test01();
	return 0;
}
//class Building;
//class goodgay
//{
//public:
//	goodgay();
//	void visit();//参观函数 访问Building中的属性
//	Building * building;
//};
//class Building
//{
//	//goodgay是本类的好朋友，可以访问私有成员
//	friend class goodgay;
//public:
//	Building();
//public:
//	string m_sitttingroom;
//private:
//	string m_bedroom;
//};
////类外写成员函数
//Building::Building()
//{
//	m_sitttingroom = "客厅";
//	m_bedroom = "卧室";
//}
//goodgay::goodgay()
//{
//	//创建一个建筑物对象
//	building = new Building;
//}
//void goodgay::visit()
//{
//	cout << "好基友类正在访问" << building->m_sitttingroom << endl;
//	cout << "好基友类正在访问" << building->m_bedroom << endl;
//}
//void test01()
//{
//	goodgay gg;
//	gg.visit();
//}
//int main()
//{
//	test01();
//	return 0;
//}





//class Building
//{
//	//告诉编译器，goodgay全局函数是 Building类的好朋友，可以访问类中私有内容
//	friend void goodgay(Building *building);
//
//public:
//	Building()
//	{
//		m_sittingRoom = "客厅";
//		m_Bedroom = "卧室";
//	}
//public:
//	string m_sittingRoom;
//private:
//	string m_Bedroom;
//
//};
////全局函数
//void goodgay(Building *building)
//{
//	cout << "好基友的全局函数 正在访问" <<building->m_sittingRoom<< endl;
//
//	cout << "好基友的全局函数 正在访问" << building->m_Bedroom << endl;
//
//}
//void test01()
//{
//	Building building;
//	goodgay(&building);
//}
//int main()
//{
//	test01();
//	return 0;
//}