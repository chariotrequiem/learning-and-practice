#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

//文件类型
//根据数据的组织形式，数据文件被称为文本文件或者二进制文件
//数据在内存内以二进制的形式存储，如果不加转换的输出到外存，就是二进制文件
//一个数据在内存中是怎么存储的？
//字符一律以ASCII形式存储，数值型数据既可以用ASCII形式存储。也可以使用二进制形式存储
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");//w - 写， b - 二进制
//	fwrite(&a, 4, 1, pf);//二进制形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//文件缓冲区
//ANSIC标准采用“缓冲文件系统”处理数据文件，所谓缓冲文件系统是指系统自动地在内存中为程序中每一个正在使用的文件开辟一块“文件缓冲区”

//文件指针
//缓冲文件系统中，关键的概念是“文件类型指针”，简称文件指针
//每个被使用的文件都在内存中开辟了一个相应的文件信息区，用来存放文件的相关信息（如文件的名字，文件状态及文件当前位置）
//这些信息是保存在一个结构体变量中的，该结构体变量是有系统声明的，取名FILE.
//每当打开一个文件，，系统会根据文件的情况自动创建一个FILE结构的变量，自动填充信息

//在编写程序时，在打开文件的同时，都会返回一个FILE*的指针变量指向该文件。也相当于建立了指针和文件的关系
//ANSIC规定使用fopen函数来打开文件，使用fclose来关闭文件
//FILE * fopen(const char * filename, const char* mode);
//int fclose(FILE * stream);

//int main()
//{
	//打开文件
	//相对路径写法
	//..表示上一级路径
	//. 表示当前路径
	//fopen("../../test.txt", "r");
	//fopen("test.txt", "r");
	//绝对路径写法
	//fopen("C:\Users\AZ\Desktop\code\learning-and-practice\\test-4-14\\test-4-14\\test.txt", "r");

//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开文件
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//字符输入函数 - fgetc
//字符输出函数 - fputc
//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	//关闭文件
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
//	//读文件
//	printf("%c", fgetc(pfRead));//b
//	printf("%c", fgetc(pfRead));//i
//	printf("%c", fgetc(pfRead));//t
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//键盘 - 标准输入设备 - stdin
//屏幕 - 标准输出设备 - stdout
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
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c ", ch);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	ch = fgetc(pf);
//	printf("%c ", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文本行输入函数fgets - 所有输入流
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
//	//读文件
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
//	//读文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//从标准输入流读取
//	//fputs(buf, stdout);//输出到标准输出流
//
//	//与上面写法等价
//	gets(buf);
//	puts(buf);
//	return 0;
//}


//格式化输入函数 - fscanf
//格式化输出函数 - fprintf
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
//	//格式化形式写文件
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
	//把格式化的数据转化成字符串存储到buf
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	//printf("%s\n", buf);

	//从buf中读取格式化的数据到tmp中
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);

	return 0;
}

//  scanf/printf   是针对标准输入流/标准输出流的  格式化输入/输出语句
//  fscanf/fprintf 是针对所有输入流/标准输出流的  格式化输入/输出语句
//  sscanf         是从字符串中读取格式化的数据
//  sprintf        是把格式化数据输出成（存储到）字符串