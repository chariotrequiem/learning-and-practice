#include<iostream>
using namespace std;
//ȫ�ֱ���
//int g_a = 10;
//int g_b = 10;
//const int c_g_a = 10;
//const int c_g_b = 10;
//int main()
//{
//	//ȫ��������ȫ�ֱ�������̬����������
//	int a = 10;
//	int b = 10;
//	cout << "�ֲ�����a�ĵ�ַΪ��  " << &a << endl;
//	cout << "�ֲ�����b�ĵ�ַΪ��  " << &b << endl;
//	cout << "ȫ�ֱ���g_a�ĵ�ַΪ��" << &g_a << endl;
//	cout << "ȫ�ֱ���g_b�ĵ�ַΪ��" << &g_b << endl;
//	//��̬������������ͨ����ǰ��static�����ھ�̬����
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "��̬����s_a�ĵ�ַΪ��" << &s_a << endl;
//	cout << "��̬����s_b�ĵ�ַΪ��" << &s_b << endl;
//	//����
//	//�ַ�������
//	cout << "�ַ���������ַΪ��   " << &"hello world" << endl;
//	//const���εı���
//	//const���ε�ȫ�ֱ�����const���εľֲ�����
//	cout << "ȫ�ֳ���c_g_a��ַΪ��" << &c_g_a << endl;
//	cout << "ȫ�ֳ���c_g_b��ַΪ��" << &c_g_b << endl;
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "�ֲ�����c_l_a��ַΪ��" << &c_l_a << endl;
//	cout << "�ֲ�����c_l_b��ַΪ��" << &c_l_b << endl;
//	return 0;
//}


//ջ������ע�������������Ҫ���ؾֲ������ĵ�ַ
//ջ���������ɱ����������ٺ��ͷ�

//int* func(int b)//�β�����Ҳ�����ջ��
//{  
//	b = 100;
//	int a = 10;//�ֲ�����  �����ջ����ջ���������ں���ִ�����Զ��ͷ�
//	return &a;//���ؾֲ�������ַ
//
//}
//int main()
//{
//	//����func��������ֵ
//	int* p = func(1);
//	cout << *p << endl;
//	cout << *p << endl;
//	return 0;
//}

//int* func()
//{
//	//����new�ؼ��֣����Խ����ݿ��ٵ�����
//	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣������ݷ��ڶ���
//	int * p = new int(10);
//	return p;
//}
//int main()
//{
//	//�ڶ�����������
//	int *p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	return 0;
//}
//int *func()
//{
//	//�ڶ���������������
//	//new���ص��� ���������͵�ָ��
//	int * p = new int(10);
//	return p;
//}//�˴���ָ��p���ź���������ͻ��Զ��ͷ�
//void test01()
//{
//	int *ps = func();//psָ�������������
//	cout << *ps << endl;
//	cout << *ps << endl;
//	cout << *ps << endl;
//	//�����������ɳ���Ա�����٣�����Ա�����ͷ�
//	//������ͷţ����ùؼ���delete
//	delete ps;
//	//cout << *ps << endl;//�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ����ᱨ��
//}
//int main()
//{
//	test01();
//	return 0;
//}
//void test02()
//{
//	//�ڶ�������10�������ݵ�����
//	int * arr = new int[10];//10������10��Ԫ��
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;//��10��Ԫ�ظ�ֵ100~109
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//�ͷŶ�������
//	//�ͷ�����ʱ��Ҫ��[]�ſ���
//	delete[] arr;
//}
//int main()
//{
//	test02();
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//���á����������� &���� = ԭ��
//	int &b = a;
//	cout << b << endl;
//	cout << a << endl;
//	b = 20;
//	cout << b << endl;
//	cout << a << endl;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int &b = a;
//	//int %c//�������ñ����ʼ��
//	int c = 20;
//	b = c;//��ֵ�����������Ǹ�������
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//
//	return 0;
//}
//
//void swap01(int a, int b)
//{
//	a += b;
//	b = a - b;
//	a -= b;
//	cout <<"a = "<< a << endl;
//	cout <<"b = "<< b << endl;
//}
//void swap02(int *a, int *b)
//{
//	*a += *b;
//	*b = *a - *b;
//	*a -= *b;
//	cout << "a = " << *a << endl;
//	cout << "b = " << *b << endl;
//}
//void swap03(int &a,int &b)//�˴���int &a,int &b�ֱ���a��b�ı���
//{
//	a += b;
//	b = a - b;
//	a -= b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//swap01(a, b);//ֵ���ݣ��ββ�������ʵ��
//	//swap02(&a, &b);//ַ����,�βλ�����ʵ��
//	swap03(a, b);//���ô��ݣ��βλ�����ʵ��
//	cout << a << endl;
//	cout << b << endl;
//	return 0;
//}


//��������������ֵ
//1.��Ҫ���ؾֲ�����������
//int& test01()
//{
//	int a = 10;//�ֲ���������������е� ջ��
//	return a;
//}
////2.�����ĵ��ÿ�����Ϊ��ֵ
//int& test02()
//{
//	static int a = 10;//��̬�����������ȫ������ȫ�����ϵ������ڳ��������ϵͳ�ͷ�
//	return a;
//}
//int main()
//{
//	int &ref = test01();
//	cout << ref << endl;//��һ�ν����ȷ����Ϊ���������˱���
//	cout << ref << endl;//�ڶ��ν��������Ϊa���ڴ��Ѿ��ͷ�
//	int &ref2 = test02();
//	cout << ref2 << endl;
//	cout << ref2 << endl;
//	test02() = 100;//��������ķ���ֵ�����ã�������ÿ�����Ϊ��ֵ
//	cout << ref2 << endl;
//	cout << ref2 << endl;
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int &b = a;
//	int &c = b;
//	cout << a;
//	cout << b;
//	cout << c;
//}

//���������ã�ת��Ϊint * const ref = &a;
//void func(int& ref)
//{
//	ref = 100;//ref�����ã�ת��Ϊ*ref = 100
//}
//int main()
//{
//	int a = 10;
//	//�Զ�ת��Ϊ int* const ret = &a;ָ�볣����ָ��ֻ�벻�ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
//	int &ref = a;
//	ref = 20;//�ڲ�����ref�����ã��Զ�ת��Ϊ��*ref = 20;
//	cout << "a: " << a << endl;
//	cout << "ref: " << ref << endl;
//	func(a);
//	return 0;
//}

//��ӡ���ݺ���
//void showvalue(const int& val)
//{
//	//val = 1000;//err����val���ɱ�
//	cout << "val= " << val << endl;
//}
//int main()
//{
//	//int a = 10;
//	//int& ref = 10;//err�������ñ�������һ��Ϸ����ڴ�ռ�
//	//true��������const�󣬱������������޸�Ϊ��int temp = 10;const int& ref = temp;
//	//const int& ref = 10;
//	//ref = 20;//err��������const֮���Ϊֻ���������޸�
//
//	//���������ó������÷�ֹ������޸�ʵ��
//	int a = 100;
//	showvalue(a);
//	cout << "a= " << a << endl;
//	return 0;
//}





