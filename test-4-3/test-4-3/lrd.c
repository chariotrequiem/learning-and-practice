#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//char* my_strcpy(char* dest, const char* src)
//{
//
//}
////1.дһ������ָ��pf���ܹ�ָ��my_strcpy
////
////2.дһ������ָ������pfArr���ܹ�����ĸ�my_strcpy�����ĵ�ַ
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pfArr[4])(char*, const char*) = my_strcpy;
//	return 0;
//}
//void menu()
//{
//	printf("***************************************\n");
//	printf("**********1. add*******2. sub**********\n");
//	printf("**********3. mul*******4. div**********\n");
//	printf("***             0. exit             ***\n");
//	printf("***************************************\n");
//}
//double Add(double x, double y)
//{
//	return x + y;
//}
//double Sub(double x, double y)
//{
//	return x - y;
//}
//double Mul(double x, double y)
//{
//	return x * y;
//}
//double Div(double x, double y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	double x, y;
//	//pfArr ��һ������ָ������ - ת�Ʊ�4
//	double(*pfArr[5])(double, double) = { 0,Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("��ѡ�� ");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������ ");
//			scanf("%lf%lf", &x, &y);
//			double ret = pfArr[input](x, y);
//			printf("%lf\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}

//�ص�����
//�ص���������һ��ͨ������ָ����õĺ���������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ�������������ָ�뱻������������ָ��ĺ���ʱ
//����˵����ǻص��������ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼�������������Ӧ
//void calc(double(*pf)(double, double))
//{
//	double x, y;
//	printf("������������������ ");
//	scanf("%lf%lf", &x, &y);
//	printf("%lf", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ�� ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	double x, y;
//	do
//	{
//		menu();
//		printf("��ѡ�� ");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������ ");
//			scanf("%lf%lf", &x, &y);
//		}
//		switch (input)
//		{
//		case 1 :
//			printf("%lf\n", Add(x, y));
//			break;
//		case 2:
//			printf("%lf\n", Sub(x, y));
//			break; 
//		case 3:
//			printf("%lf\n", Mul(x, y));
//			break;
//		case 4:
//			printf("%lf\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//	int(*pf)(int, int);//����ָ��
//	int(*pfArr[4])(int, int);//pfArr��һ������ - ����ָ�������
//	//ָ����ָ�������ָ�룬ָ��ָ��һ�����飬�����Ԫ�ض��Ǻ���ָ��
//	//ppfArr��һ��ָ��[����ָ������]��ָ��
//	int (*(*ppfArr)[4])(int,int) = &pfArr;
//	//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ�������ÿ��Ԫ��������һ������ָ��int(*)(int,int)
//	return 0;
//}

//void print(char* str)
//{
//	printf("hehe: %s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	
//	test(print);
//	return 0;
//}

//void Bubblesort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j <sz - i -1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}			
//		}
//	}
//}
//struct stu
//{
//	char name[20];
//	int age;
//};

//int main()
//{
//	//ð��������
//	//ð��������ֻ��������������
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct stu s[] = { {"zhangszn", 20},{"lisi", 25},{"wangwu", 52} };
//	float f[] = { 5.6,6.5,23.5,3.2,5.4 };
//	qsort(arr, sz, sizeof(arr[0]),  );
//	/*Bubblesort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	return 0; 
//}
//qsort - ���������������͵����� - �⺯�� - ����
//quick sort
//void qsort(void *base,//Ŀ��������ʼλ�� - ������
//           size_t num,//�м���Ԫ�� - sz
//		   size_t width,//Ԫ�ش�С���ֽڣ� - sizeof(arr[0])
//		   int(*cmp)(const void *e1, const void *e2)//�ȽϺ���
//			);
//void*���͵�ָ�� ���Խ����������͵ĵ�ַ
//void*���͵�ָ�� ���ܽ��н����ò���
//void*���͵�ָ�� ���ܽ���+-�����Ĳ���


struct stu 
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//�Ƚ����־��ǱȽ��ַ������ַ����Ƚϲ���ֱ����><=���Ƚ�
	//Ӧ����strcmp����
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test2()
{
	struct stu s[3] = { {"zhangsan", 50}, {"lisi", 80}, {"wangwu", 30} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}
int main()
{
	//test();
	test2();
	return 0;
}