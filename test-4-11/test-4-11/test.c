#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ���ϱ������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������
//����ѧ�������� - ���� - �绰 - �Ա�
//struct stu
//{
//	char name[20];//����
//	char tle[12];//�绰
//	char sex[10];//�Ա�
//	int age;//�Ա�
//}s4,s5,s6;
//struct stu s3;//ȫ�ֱ���
//int main()
//{
//	//�����ṹ�����
//	struct stu s1;
//	struct stu s2;
//
//	return 0;
//}

//�����ṹ������
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], *p;
//struct
//{
//	int a;
//	char c;
//}sa;
//struct
//{
//	int a;
//	char c;
//}* psa;
//int main()
//{
//	psa = &sa;//�Ƿ�,�������ᵱ����������
//	return 0;
//}

//�ṹ��������
//struct Node
//{
//	int data;
//	struct Node n;//����д�����ṹ�嶨��ʱ�����ܰ����Լ�
//};
//struct Node
//{
//	int data;//4
//	struct Node* next;//4/8
//};
//int main()
//{
//	sizeof(struct Node);
//	return 0;
//}

//�ṹ��������
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	Node n1;
//	struct Node n2;
//	return 0;
//}

//�ṹ���ʼ��
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = { 'c', 100,3.14,"hello" };//�ṹ�������ʼ����{}
//	//printf("%c %d %lf %s", s.c, s.a, s.d, s.arr);//�ṹ�����
//	struct S s = { 'c',{55.6, 30},100,3.14,"hello" };
//	printf("%c %lf %d %d %lf %s", s.c,s.st.weight,s.st.age, s.a, s.d, s.arr);
//	return 0;
//}

//�ṹ���ڴ����
//�ṹ���ڴ����
//1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
//2.������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ��
//������ = ������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ��VSĬ��Ϊ8��
//3.�ṹ���ܴ�СΪ����������ÿ����Ա��������һ����������
//4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ���Ӧ���Լ����������������������ṹ��������С����������������
//����Ƕ�׽ṹ��Ķ���������������
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;	
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));//16
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));//16
//	return 0;
//}
//Ϊʲô�����ڴ����
//1.ƽ̨ԭ����ֲԭ�򣩣��������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵģ�ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣
//2.����ԭ�����ݽṹ��������ջ��Ӧ�þ����ܵ�����Ȼ�߽��϶��롣ԭ�����ڣ�Ϊ�˷���δ������ڴ棬��������Ҫ�������ڴ���ʣ���������ڴ����ֻ��һ�η���
//�ṹ����ڴ��������ÿռ任ʱ�������
//Ĭ�϶����������޸ģ�һ������Ϊ2^n��
//#pragma pack(4)//����Ĭ�϶�����Ϊ4
//#pragma pack()//ȡ�����õ�Ĭ�϶�����

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
////��ֵ
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
////��ַ�����ã�
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s;
//	Init(&s);//����ַ
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
//��������ʱ����������Ҫѹջ�ģ�����ʱ��Ϳռ��ϵ�ϵͳ������
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
//���ۣ��ṹ�崫��ʱ��Ҫ���ṹ���λ��

//λ�� - ������λ
//λ�ε�������ṹ�����Ƶ���������ͬ��
//1.λ�εĳ�Ա������int�� unsigned int��signed int
//2.λ�εĳ�Ա�������һ��ð�ź�һ�����֡�
//struct S
//{
//	int a : 2;//aֻ��Ҫ2��bitλ
//	int b : 5;//bֻ��Ҫ5��bitλ
//	int c : 10;
//	int d : 30;
//};
//47bit - 6���ֽ�*8 = 48bit
//λ���ڴ����
//λ�εĳ�Ա������int unsigned int signed int������char���������ͼ��壩����
//λ�εĿռ����ǰ�����Ҫ��4���ֽڣ�int������1���ֽڣ�char���ķ�ʽ�����ٵ�
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}
//λ�ο�����ṹ�ﵽ��ͬ��Ч�������Ժܺý�ʡ�ռ䣬���Ǵ��ڿ�ƽ̨����

//ö�� - �ѿ��ܵ�ȡֵһһ�о�
//ö�ٵ��ŵ㣺
//1.���Ӵ���Ŀɶ��ԺͿ�ά����
//2.��#define����ı�ʶ����ö�������ͼ�飬�����Ͻ�
//3.��ֹ��������Ⱦ����װ��
//4.���ڵ���   5.ʹ�÷��㣬 һ�ο��Զ���������
//enum Day
//{
//	Monday,
//	Tuesday,
//	Wednesday,
//	Thursday,
//	Friday,
//	Saturday,
//	Sunday
//};
//enum Sex//ö������
//{
//	//ö�ٵĿ���ȡֵ - ����
//	Male,
//	Female,
//	Secret
//};
//int main()
//{
//	/*enum Sex s = Male;*/
//	printf("%d%d%d", Male,Female, Secret);
//	return 0;
//}

//���� - ������ - ������
//����Ҳ��һ��������Զ������� �������Ͷ���ı���Ҳ����һϵ�еĳ�Ա�� ��������Щ��Ա����ͬһ��ռ䣨������Ҳ�й����壩
//���ϵĳ�Ա����ͬһ��ռ䣬����һ�����ϱ����Ĵ�С������������Ա�Ĵ�С����Ϊ��������ٵ����������������Ǹ���Ա��
//���ϴ�С�ļ���
//1.���ϵĴ�С����������Ա�ô�С
//2.������Ա��С��������������������ʱ����Ҫ���뵽����������������
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i))��
//	return 0;
//}

//��⵱ǰϵͳ��С�˴洢
//int check_sys()
//{
//	int a = 1;
//	//����1��ʾС��
//	//����0��ʾ���
//	return *(char*)&a;
//}
int check_sys()
{
	union
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int a = 1;
	int ret = check_sys();
	if (1 == ret)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}