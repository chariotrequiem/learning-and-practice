//����һ����stdio.h���ļ�
//std-��׼ standard input output
//#include <stdio.h>
//int�����͵���˼
//mainǰ���int��ʾmain�������ú󷵻�һ������ֵ
//void main��������д���Ѿ���ʱ
//int main()//������-��������-main�������ҽ���һ��
//{
//	printf-�⺯��-c�����ṩ�����ǵĺ���
//	#include
//	printf("hello world\n");//����������񣨴�ӡhello world��
//	\n��ʾ�����Ҫ����
//	return 0;//���� 0
//%c--��ӡ�ַ���ʽ�����ݣ�%f--��ӡС����%p--�Ե�ַ��ʽ���д�ӡ
//%d--��ӡ����ʮ�������ݣ�%x--��ӡʮ�����ƣ�%o������
//int--���ͣ�char--�ַ��ͣ�float--�����ȸ����ͣ�short--�����ͣ�long--�����ͣ�long long--����������
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));//1���ֽ�
//	printf("%d\n", sizeof(short));//2���ֽ�
//	printf("%d\n", sizeof(long));//4/8���ֽ�
//	printf("%d\n", sizeof(int));//4���ֽ�
//	printf("%d\n", sizeof(float));//4���ֽ�
//	printf("%d\n", sizeof(double));//8���ֽ�
//	printf("%d\n", sizeof(long long));//8���ֽ�
//	/*return 0;
//}*/
//#include <stdio.h>
//int num = 20;//ȫ�ֱ���--�����ڴ���飨{}��֮��ı���
//    //�ֲ�������ȫ�ֱ���һ�㲻��ͬ�����ֲ�������ȫ�ֱ���������ͬʱ���ֲ���������
//int main()
//{
//	short age = 20;//���ڴ�����2���ֽ�=16bitλ���������20
//	float weight = 45.6f��//�ֲ�����
//	return 0;
//}
#include <stdio.h>
int main()
{
	//ȡ�������ĺ�
	int num1 = 0;
	int num2 = 1;
	//��������--ʹ�����뺯��scanf(��VS2015��Ӧʹ��scanf_s)
	scanf_s("%d%d", &num1, &num2);//ȡ��ַ����&
	int sum = 0;
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}