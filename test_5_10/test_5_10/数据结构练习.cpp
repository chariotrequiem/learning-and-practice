#include<iostream>
using namespace std;
#define MAXSIZE 20

//int main()
//{
//	int sum = 0, n = 100;
//	for (int i = 0; i <= n; i++)
//	{
//		sum += i;
//	}
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}

typedef int ElemType;
typedef class
{
public:
	ElemType data[MAXSIZE];//����洢����Ԫ�أ����ֵΪMAXSIZE
	int length;//���Ա�ǰ����
}sqlist;

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
/*Status�Ǻ��������ͣ���ֵ�Ǻ������״̬���룬��OK��
��ʼ������˳�����Ա��Ѵ��ڣ�1<<i<<ListLength(L)
�����������e����L�е�i������Ԫ�ص�ֵ*/
Status GetElem(sqlist L, int i, ElemType *e)
{
	if (L.length == 0 || i<1 || i>L.length)
		return ERROR;
	*e = L.data[i - 1];
	return OK;
}
int main()
{
	sqlist L;
	for (int i = 0; i < MAXSIZE; i++)
	{
		L.data[i] = i;
		L.length++;
	}
	for (int i = 0; i < MAXSIZE; i++)
	{
		cout << L.data[i] << endl;
	}
	ElemType *e;
	int ret = GetElem(L, 5, e);
	cout << ret << endl;
	return 0;
}
