#include<iostream>
using namespace std;
#include<string>

class Building;
class goodgay
{
public:
	goodgay();

	void visit();//��visit���Է���Building��˽�г�Ա
	void visit2();//��visit2�����Է���Building��˽�г�Ա
	Building * building;
};
class Building
{
	//���߱�������good gay���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա
	friend void goodgay::visit();
public:
	Building();

public:
	string m_sittingroom;
private:
	string m_bedroom;
};
//����ʵ�ֳ�Ա����
Building::Building()
{
	m_sittingroom = "����";
	m_bedroom = "����";
}
goodgay::goodgay()
{
	building = new Building;
}

void goodgay::visit()
{
	cout << "visit �������ڷ��ʣ�" << building->m_sittingroom << endl;
	cout << "visit �������ڷ��ʣ�" << building->m_bedroom << endl;

}
void goodgay::visit2()
{
	cout << "visit2 �������ڷ��ʣ�" << building->m_sittingroom << endl;
	//cout << "visit2 �������ڷ��ʣ�" << building->m_bedroom << endl;
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
//	void visit();//�ιۺ��� ����Building�е�����
//	Building * building;
//};
//class Building
//{
//	//goodgay�Ǳ���ĺ����ѣ����Է���˽�г�Ա
//	friend class goodgay;
//public:
//	Building();
//public:
//	string m_sitttingroom;
//private:
//	string m_bedroom;
//};
////����д��Ա����
//Building::Building()
//{
//	m_sitttingroom = "����";
//	m_bedroom = "����";
//}
//goodgay::goodgay()
//{
//	//����һ�����������
//	building = new Building;
//}
//void goodgay::visit()
//{
//	cout << "�û��������ڷ���" << building->m_sitttingroom << endl;
//	cout << "�û��������ڷ���" << building->m_bedroom << endl;
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
//	//���߱�������goodgayȫ�ֺ����� Building��ĺ����ѣ����Է�������˽������
//	friend void goodgay(Building *building);
//
//public:
//	Building()
//	{
//		m_sittingRoom = "����";
//		m_Bedroom = "����";
//	}
//public:
//	string m_sittingRoom;
//private:
//	string m_Bedroom;
//
//};
////ȫ�ֺ���
//void goodgay(Building *building)
//{
//	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ���" <<building->m_sittingRoom<< endl;
//
//	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ���" << building->m_Bedroom << endl;
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