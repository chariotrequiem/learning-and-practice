#include<iostream>
using namespace std;


//������
class Animal
{
public:
	int m_Age;
};
//������̳п��Խ�����μ̳е�����
//�̳�֮ǰ�ӹؼ��� virtual�����̳�
//Animal���Ϊ�����
//����
class Sheep : virtual public Animal{};
//����
class Tuo : virtual public Animal{};
//������
class SheeoTuo : public Sheep, public Tuo{};
void test01()
{
	SheeoTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//�����μ̳е�ʱ����������ӵ����ͬ�̳�����Ҫ��������������
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;
	//�������ֻ��һ�ݾͿ����ˣ����μ̳е������������ݣ���Դ�˷�
}
int main()
{
	test01();
	return 0;
}