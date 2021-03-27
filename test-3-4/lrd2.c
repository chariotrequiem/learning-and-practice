#define _CRT_SECURE_NO_WARNINGS 1
//加在源文件的第一行，防止函数报错
#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	//scanf是c语言提供的；scanf_s是VS编译器提供的，只有VS能够识别
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}