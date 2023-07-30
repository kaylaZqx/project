#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//题1：统计二进制1的个数

//方法1：
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//方法2：
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//方法3：
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}

//题2：求两个数二进制中不同位的个数
//两个int（32位）整数m和n的二进制表达中，有多少个位（bit）不同？

//方法1：
//int count_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//方法2：
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	//异或^操作符
//	//相同为0，相异为1
//	int ret = m ^ n;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//	return 0;
//}

//题3：获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	//获取奇数位
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//获取偶数位
//	for (i = 31; i >= 1; i = i - 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}

//题4：打印图案
//输入：一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度
//输出：针对每行输入，输出用“*”组成的X形图案
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//		break;
//	}
//	return 0;
//}

//题5：获得某年某月有多少天，输入月份和年份，计算这一年这个月有多少天

int is_leap_year(int y)
{
	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
}
int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d %d", &y, &m) == 2)
	{
		d = days[m];
		if ((is_leap_year(y) == 1) && (m == 2))
		{
			d++;
		}
		printf("%d\n", d);
		break;
	}
	return 0;
}