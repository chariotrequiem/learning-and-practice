#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

//�ļ�����
//�������ݵ���֯��ʽ�������ļ�����Ϊ�ı��ļ����߶������ļ�
//�������ڴ����Զ����Ƶ���ʽ�洢���������ת�����������棬���Ƕ������ļ�
//һ���������ڴ�������ô�洢�ģ�
//�ַ�һ����ASCII��ʽ�洢����ֵ�����ݼȿ�����ASCII��ʽ�洢��Ҳ����ʹ�ö�������ʽ�洢
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");//w - д�� b - ������
//	fwrite(&a, 4, 1, pf);//��������ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//�ļ�������
//ANSIC��׼���á������ļ�ϵͳ�����������ļ�����ν�����ļ�ϵͳ��ָϵͳ�Զ������ڴ���Ϊ������ÿһ������ʹ�õ��ļ�����һ�顰�ļ���������

//�ļ�ָ��
//�����ļ�ϵͳ�У��ؼ��ĸ����ǡ��ļ�����ָ�롱������ļ�ָ��
//ÿ����ʹ�õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ������������ļ��������Ϣ�����ļ������֣��ļ�״̬���ļ���ǰλ�ã�
//��Щ��Ϣ�Ǳ�����һ���ṹ������еģ��ýṹ���������ϵͳ�����ģ�ȡ��FILE.
//ÿ����һ���ļ�����ϵͳ������ļ�������Զ�����һ��FILE�ṹ�ı������Զ������Ϣ

//�ڱ�д����ʱ���ڴ��ļ���ͬʱ�����᷵��һ��FILE*��ָ�����ָ����ļ���Ҳ�൱�ڽ�����ָ����ļ��Ĺ�ϵ
//ANSIC�涨ʹ��fopen���������ļ���ʹ��fclose���ر��ļ�
//FILE * fopen(const char * filename, const char* mode);
//int fclose(FILE * stream);

//int main()
//{
	//���ļ�
	//���·��д��
	//..��ʾ��һ��·��
	//. ��ʾ��ǰ·��
	//fopen("../../test.txt", "r");
	//fopen("test.txt", "r");
	//����·��д��
	//fopen("C:\Users\AZ\Desktop\code\learning-and-practice\\test-4-14\\test-4-14\\test.txt", "r");

//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ַ����뺯�� - fgetc
//�ַ�������� - fputc
//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	printf("%c", fgetc(pfRead));//b
//	printf("%c", fgetc(pfRead));//i
//	printf("%c", fgetc(pfRead));//t
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//���� - ��׼�����豸 - stdin
//��Ļ - ��׼����豸 - stdout
//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0; 
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c ", ch);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ı������뺯��fgets - ����������
//char *fgets(char *string, int n, FILE* stream)
//int main()
//{
//	char arr[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fgets(arr,1024,pf);
//	printf("%s", arr);
//	fgets(arr, 1024, pf);
//	printf("%s", arr);
//	fgets(arr, 1024, pf);
//	printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char arr[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
//	//fputs(buf, stdout);//�������׼�����
//
//	//������д���ȼ�
//	gets(buf);
//	puts(buf);
//	return 0;
//}


//��ʽ�����뺯�� - fscanf
//��ʽ��������� - fprintf
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	//struct S s = { 100,3.14f,"bit" };
//	//FILE* pf = fopen("test.txt", "w");
//	//if (pf == NULL)
//	//{
//	//	return 0;
//	//}
//	struct S s = { 0 };
//
//	//��ʽ����ʽд�ļ�
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);
//	/*fclose(pf);
//	pf = NULL;*/
//
//	return 0;
//}


struct S
{
	int n;
	float score;
	char arr[10];
};
int main()
{
	struct S s = { 100, 3.14f, "bit" };
	struct S tmp = { 0 };
	char buf[1024] = { 0 };
	//�Ѹ�ʽ��������ת�����ַ����洢��buf
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	//printf("%s\n", buf);

	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);

	return 0;
}

//  scanf/printf   ����Ա�׼������/��׼�������  ��ʽ������/������
//  fscanf/fprintf ���������������/��׼�������  ��ʽ������/������
//  sscanf         �Ǵ��ַ����ж�ȡ��ʽ��������
//  sprintf        �ǰѸ�ʽ����������ɣ��洢�����ַ���