#include<iostream>
using namespace std;


//动物类
class Animal
{
public:
	int m_Age;
};
//利用虚继承可以解决菱形继承的问题
//继承之前加关键字 virtual变成虚继承
//Animal类成为虚基类
//羊类
class Sheep : virtual public Animal{};
//驼类
class Tuo : virtual public Animal{};
//羊驼类
class SheeoTuo : public Sheep, public Tuo{};
void test01()
{
	SheeoTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//当菱形继承的时候，两个父类拥有享同继承域，需要加以作用域区分
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;
	//这份数据只有一份就可以了，菱形继承导致数据有两份，资源浪费
}
int main()
{
	test01();
	return 0;
}