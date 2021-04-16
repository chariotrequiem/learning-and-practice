#define _CRT_SECURE_NO_WARNINGS 1
#include<stdint.h>
#include<string.h>
#include<stdio.h>

//fwrite����
//size_t fwrite(const void* buffer, size_t size, size_t count, FILE* stream)
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	//struct S s = { "����", 20, 55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��������ʽд�ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	//fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fseek���� - ͨ���ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//int fseek(FILE *stream, long int offset, int origin)
//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END);
//	//2.��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ftell����
//�����ļ�ָ���������ʼλ�õ�ƫ����
//long int ftell(FILE* stream)
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END);
//	//2.��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//���ļ���ȡ�����У�������feof�����ķ���ֱֵ�������ж��ļ����Ƿ����
//feof������Ӧ���ڵ��ļ���ȡ������ʱ���ж����ļ���ȡʧ�ܻ��������ļ�β����
//�ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�ΪEOF��fgetc��������NULL��fgets��
//�������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ��� --- fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ���
//EOF  -  end of file�ļ�������־


//perror���� - ���ش�����
//int main()
//{
//	//strerror - �Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//	//printf("%s\n", strerror(errno));
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("open file test.txt");
		return 0;
	}
	//���ļ�
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	printf("\n");
	if (feof(pf))
	{
		printf("end of file\n");
	}

	fclose(pf);
	pf = NULL;
	return 0;
}
