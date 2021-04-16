#define _CRT_SECURE_NO_WARNINGS 1
#include<stdint.h>
#include<string.h>
#include<stdio.h>

//fwrite函数
//size_t fwrite(const void* buffer, size_t size, size_t count, FILE* stream)
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	//struct S s = { "张三", 20, 55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制形式写文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	//fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fseek函数 - 通过文件指针的位置和偏移量来定位文件指针
//int fseek(FILE *stream, long int offset, int origin)
//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, -2, SEEK_END);
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ftell函数
//返回文件指针相对于起始位置的偏移量
//long int ftell(FILE* stream)
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, -2, SEEK_END);
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束
//feof函数是应用于当文件读取结束的时候，判断是文件读取失败还是遇到文件尾结束
//文本文件读取是否结束，判断返回值是否为EOF（fgetc），或者NULL（fgets）
//二进制文件的读取结束判断，判断返回值是否小于实际要读的个数 --- fread判断返回值是否小于实际要读的个数
//EOF  -  end of file文件结束标志


//perror函数 - 返回错误码
//int main()
//{
//	//strerror - 把错误码对应的错误信息的字符串地址返回
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
	//读文件
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
