#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<ctime>
#include<math.h>
using namespace std;

//int main()
//{
	//��������sizeof�������������ռ���ڴ��С
	/*short num1 = 10;
	cout << sizeof(num1) << endl;
	int num2 = 10;
	cout << sizeof(num2) << endl;
	long num3 = 10;
	cout << sizeof(num3) << endl;
	long long num4 = 10;
	cout << sizeof(num4) << endl;*/
	//Ĭ����������һ��С��������ʾ6λС��
	//float f1 = 3.1415926f;
	//cout << f1 << endl;
	//double d1 = 3.1415926;
	//cout << d1 << endl;
	//float f2 = 3e2;
	//cout << f2 << endl;
	//float f3 = 3e-2;
	//cout << "f3 =" << f3 << endl;
	//char ch = 'a';
	//cout << ch << endl;
	//cout << sizeof(char) << endl;
	//cout << (int)ch << endl;
	//cout <<(int) 'A' << endl;
	//ת���ַ�
	//cout << "hello world\n";
	//cout << "\\" << endl;
	////\t  ˮƽ�������
	//cout << "aaaaa\thello world" << endl;
	//cout << "aaa\thello world" << endl;
	//cout << "a\thello world" << endl;
	//char arr[] = "hello eorld";
	//cout << arr << endl;
	//string arr1 = "hello world";
	//cout << arr1 << endl;
	//bool flag = true;
	//cout << flag << endl;
	//flag = false;
	//cout << flag << endl;
	//1.���͸�ֵ
	//int num;
	//cin >> num;
	//cout << num << endl;
	////2.�����͸�ֵ
	//float num2;
	//cin >> num2;
	//cout << num2 << endl;
	////3.�ַ��͸�ֵ
	//char ch;
	//cin >> ch;
	//cout << ch << endl;
	////4.�ַ����͸�ֵ
	//string arr;
	//cin >> arr;
	//cout << arr << endl;
	////5��������
	//bool flag;
	//cin >> flag;
	//cout << flag << endl;
	//int num1 = 10;
	//int num2 = 3;
	//cout << num1 + num2 << endl;
	//cout << num1 - num2 << endl;
	//cout << num1 * num2 << endl;
	//cout << num1 / num2 << endl;
	//cout << num1 % num2 << endl;
	//int a = 2;
	//int b = 2;
	//b = a++;//�ȸ�ֵ����Ӽ�
	//cout << a << endl;
	//cout << b << endl;
	//b = ++a;//�ȼӼ�����ֵ
	//cout << a << endl;
	//cout << b << endl;
	//cout << ++num1 << endl;
	//cout << num1++ << endl;
	//cout << --num1 << endl;
	//cout << num1-- << endl;

	//int a;
	//a = 10;
	//a += 2;//a=a+2;
	//cout << a << endl;
	//a = 10;
	//a -= 2;//a=a-2;
	//cout << a << endl;
	//a = 10;
	//a *= 2;//a=a*2;
	//cout << a << endl;
	//a = 10;
	//a /= 2;//a=a/2;
	//cout << a << endl;
	//a = 10;
	//a %= 2;//a=a%2;
	//cout << a << endl;
	//int a = 10;
	//int b = 20;
	//cout << (a == b) << endl;
	//cout << (a != b) << endl;
	//cout << (a < b) << endl;
	//cout << (a > b) << endl;
	//cout << (a <= b) << endl;
	//cout << (a >= b) << endl;
 //   int a = 10;
	//int b = 5;
	//int c = 0;
	//cout << (!a) << endl;
	//cout << a << endl;
	//cout << (a&&b) << endl;
	//cout << (a&&c) << endl;
	//cout << (a || b) << endl;
	//cout << (a || c) << endl;
 //   int score = 0;
	//cin >> score;
	//if (score > 600)
	//{
	//	cout << "����һ����ѧ" << endl;
	//}
//	return 0;
//}
//int main()
//{
//	int score = 0;
//	cin >> score;
//	if (score >= 600)
//	{
//		cout << "����һ��" << endl;
//	}
//	else
//	{
//		cout << "������һ��" << endl;
//	}
//}


//int main()
//{
//	int score = 0;
//	cout << "������߿�����: " << endl;
//	cin >> score;
//	if (score >= 600)
//	{
//		if (score > 700)
//		{
//			cout << "���Կ��뱱��" << endl;
//		}
//		else if (score >= 650)
//		{
//			cout << "���Կ����廪" << endl;
//		}
//		else
//		{
//			cout << "���Կ����˴�" << endl;
//		}
//	}
//	else if (score >= 500)
//	{
//		cout << "���϶���" << endl;
//	}
//	else if (score >= 400)
//	{
//		cout << "��������" << endl;
//	}
//	else
//	{
//		cout << "������˼��û����" << endl;
//	}
//	return 0;
//}

//int main()
//{
//	//������ֻ�������
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	cout << "��������ֻ�������:" ;
//	cin >> num1;
//	cin >> num2;
//	cin >> num3;
//	//�ж���֪����
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//		{
//			cout << "С��A����" << endl;
//		}
//		else
//		{
//			cout << "С��C����" << endl;
//		}
//	}
//	else
//	{
//		if (num2 > num3)
//		{
//			cout << "С��B����" << endl;
//		}
//		else
//		{
//			cout << "С��C����" << endl;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = (a > b ? a : b);
//	cout <<"c = " << c << endl;
//	//C++����Ŀ���㷵�ص��Ǳ��������Լ̸�ֵ
//	(a > b ? a : b) = 100;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

//int main()
//{
//	int score = 0;
//	cout << "��Ե�Ӱ���" << endl;
//	cin >> score;
//	switch (score)
//	{
//	case 10:
//		cout << "��������" << endl;
//		break;
//	case 9:
//		cout << "�����糱" << endl;
//		break;
//	case 8:
//		cout << "���º���" << endl;
//		break;
//	case 7:
//		cout << "��ͨ��Ӱ" << endl;
//		break;
//	case 6:
//		cout << "��ǿ����" << endl;
//		break;
//	default:
//		cout << "��Ƭ" << endl;
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	//����Ļ�ϴ�ӡ0-9ʮ������
//	int i = 0;
//	while (i < 10)
//	{
//		cout << i << endl;
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//�����������ӣ����õ�ǰʱ�����������
//	srand((unsigned int)time(NULL));
//	//1.ϵͳ���������
//	int num = rand() % 1000 + 1;//rand()%1000����0-999�����
//	//2.��ҽ��в²�
//	int val = 0;
//	//3.�ж�
//	while (1)
//	{
//		cin >> val;
//		if (val > num)
//		{
//			cout << "�²����" << endl;
//		}
//		else if (val < num)
//		{
//			cout << "�²��С" << endl;
//		}
//		else
//		{
//			cout << "��ϲ�㣬�¶���" << endl;
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		cout << i << endl;
//		i++;
//	} while (i < 10);
//	return 0;
//}
//int main()
//{
//	int i = 100;
//	do 
//	{
//		int a = i % 10;//��λ
//		int b = i / 10 % 10;//ʮλ
//		int c = i / 100;//��λ
//		if (a*a*a +b*b*b + c*c*c == i)
//		{
//			cout << i << endl;
//		}		
//		i++;
//	} while (i < 1000);
//
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		cout << i << endl;
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i < 100; i++)
//	{
//		if ((i % 7 == 0) || (i / 10 == 7) || (i % 10 == 7))
//		{
//			cout <<"������ " <<i<< endl;
//		}
//		else
//		{
//			cout << i << endl;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << "* ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j << "*" << i << "=" << i*j<<"  ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 20; i++)
//	{
//		//ż�������
//		if (i % 2 == 0)
//		{
//			continue;//ִ�е��˾Ͳ���ѭ��
//		}
//		cout << i << endl;
//	}
//	return 0;
//}

//int main()
//{
//	cout << "1.xxxxxx" << endl;
//	cout << "2.xxxxxx" << endl;
//	goto FLAG;
//	cout << "3.xxxxxx" << endl;
//	FLAG:
//	cout << "4.xxxxxx" << endl;
//
//	return 0;
//}

//int main()
//{
//	int sum = 0, n = 100;
//	sum = (n + 1)*n / 2;
//	cout << sum << endl;
//	return 0;
//}