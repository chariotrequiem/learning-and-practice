#define _CRT_SECURE_NO_WARNINGS 1
#include<typeinfo.h>
int _tmain(int argc, _TCHAR* argv[])
{
	char *p1 = "hello";
	char *p2 = "world";
	char *p3 = "a piece of cake";
	char *str[] = { p1, p2, p3 };
	cout << sizeof(*str[0]) << " " << typeid(str[0]).name() << " " << *(str[0] + 1) << endl;//typeid������
	cout << sizeof(*&str[0]) << " " << typeid(&str[0]).name() << " " << *(&str[0] + 1) << endl;
	cout << sizeof(*str) << " " << typeid(str).name() << " " << *(str + 1) << endl;
	cout << sizeof(*&str) << " " << typeid(&str).name() << " " << *(&str + 1) << endl;
	return 0;
}
//���н����
//1 char * e
//4 char * * world
//4 char *[3] world
//12 char * (*)[3] 00F7F734
//�ܿ���������֪���ˣ�����ط� + 1��ʱ����˵��������������˵ + 1ǰ���������� ��ָ��� �������͵ĳ��ȣ����� &str[0]������char * * ��ָ�����char * ������ָ��ĳ��ȣ���ͬ������ͬ��