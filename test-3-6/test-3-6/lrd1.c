#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("%c\n", ch);
	return 0;
}






//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ
//	//��һ�ֱ�����������ŵ�ַ�� - ָ�����
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//* - �����ò�����
//	printf("a = %d\n", a);
//	
//	return 0;
//}

//#define �����ʶ������
//#define MAX 100
//#define ���Զ���� - ������
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	int d = redu(b, c);
//	printf("d = %d\n", d);
//	return 0;
//}

//void test()
//{
//	//1.static ���ξֲ�����
//	//�ֲ��������������ڱ䳤
//	//2.static ����ȫ�ֱ���
//	//�ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//	//����Դ�ļ���û����ʹ����
//3.static���κ���
//Ҳ�Ǹı��˺����������� - ��׼ȷ
//�ⲿ�������� -�� �ڲ���������
//	static int a = 1;//a ��һ����̬�ľֲ�����
//	//static
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	//typedef -- ���Ͷ��� -- �����ض���
//	typedef unsigned int u_int;//�� unsigned int �����ض���Ϊ u_int
//	return 0;
//}

//int main()
//{
//	register int a = 10;//�����a����ɼĴ�������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	//exp1 ? exp2 : exp3(��������������exp1Ϊ�棬�����exp2���������exp3) 
//	printf("max= %d\n", max);
//	return 0;
//}

//�� - ��0
//�� - 0
//&& -- �߼��� - ����Ϊ����Ϊ��
//|| -- �߼��� - ��һ��Ϊ����Ϊ��

//int main()
//{
//	int a = 10;
//	int d = 10;
//	int b = a++;//����++����ʹ�ã���++
//	int c = ++d;//ǰ��++����++����ʹ��
//	printf("a = %d b = %d\n", a, b);
//	printf("d = %d c = %d\n", d, c);
//	return 0;
//
//}

////int main()
//{
//	int a = 0;//�ĸ��ֽڣ�32��bitλ
//	int b = ~a;//b���з��ŵ�����
//	//~--Ϊ���������ƣ�λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//ԭ�� --> ���� --> ����
//������ԭ�룬���룬���� ������ͬ
//	//�������ڴ��д洢ʱ���洢���Ƕ����ƵĲ���
//	//11111111111111111111111111111111//����-1�õ�����
//	//11111111111111111111111111111110//����λ���䣬����λȡ���õ�ԭ��
//	//00000000000000000000000000000001//ԭ��
//	printf("%d\n", b);//ʹ�õģ���ӡ�����������ԭ��
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	printf("%d\n", sizeof(arr));//���������С����λ���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//����Ԫ�ظ���
//	return 0;
//}
//MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a;
//	int b;
//	int max;
//	printf("����a= b= \n");
//	scanf("%d%d", &a, &b);
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	//�ַ����Ľ�����־��: '\0'
//	//'\0' - ת���ַ�- 0
//	//'0' - �ַ�0 - 48
//	int a ;
//	int b;
//	printf("����a= b= \n");
//	scanf("%d%d", &a, &b);
//	if (a > b) 
//		printf("�ϴ�ֵΪ: %d\n", a);
//	else
//		printf("�ϴ�ֵΪ: %d\n", b);
//	return 0;
//}