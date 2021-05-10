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
	ElemType data[MAXSIZE];//数组存储数据元素，最大值为MAXSIZE
	int length;//线性表当前长度
}sqlist;

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
/*Status是函数的类型，其值是函数结果状态代码，如OK等
初始条件：顺序线性表已存在，1<<i<<ListLength(L)
操作结果：用e返回L中第i个数据元素的值*/
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
