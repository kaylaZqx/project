#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////输入1234，按顺序打印1 2 3 4 
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);

	return 0;
}

//编写函数不允许创建临时变量，求字符串长度
//int my_strlen(char* str)
//{
//	int count = 0;   //count计数，临时变量
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归求解
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int len = my_strlen("abc");
//	/*char arr[] = "abc";
//	int len = my_strlen(arr);*/
//
//	printf("%d\n", len);
//	return 0;
//}

//斐波那契数
//递归
//int fib(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(x - 1) + fib(x - 2);
//	}
//}

//循环（不考虑溢出）
//int fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (x >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	int ret = fib(n);
//	printf("%d\n", ret);
//
//	return  0;
//}

//九九乘法表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//打印9行
//	for (i = 1; i < 10; i++)
//	{
//		//打印1行
//		for (j = 1; j < i + 1; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}