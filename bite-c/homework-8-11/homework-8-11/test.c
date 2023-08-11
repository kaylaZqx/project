#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


//1.修改数字，把每一位数字变成0或1.如果某一位是奇数，则变为1；
//如果某一位是偶数，则变为0；
//输出修改后的数字

//int main()
//{
//	int input = 0;
//	int sum = 0;
//	
//	//输入
//	scanf("%d", &input);
//	int i = 0;
//	while (input)
//	{
//		int bit = input % 10;
//		if (bit % 2 == 1)
//		{
//			bit = 1;
//		}
//		else
//		{
//			bit = 0;
//		}
//		sum += bit * pow(10, i);
//		i++;
//		input /= 10;
//	}
//
//	//输出
//	printf("%d\n", sum);
//	return 0;
//}




//2.打印图案，打印用“*”组成的带空格执教三角形图案
//输入：多组输入，一个整数，表示直角三角形直角边的长度，即“*”的数量，也表示输出的行数
//输出：针对每行输入，输出用“*”组成的对应长度的直角三角形，每个“*”后面有一个空格
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
//				if (i + j < n - 1)
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//		break;
//	}
//	return 0;
//}


//网购，11月11日打7折，12月12日打8折，如果有优惠券，可以额外减50，（只能在双11或双12使用），求最终所花的钱
//输入：四个数字，第一个数表示衣服价格，第二个表示月份，第三个表示当天日期，第四个表示优惠券，有为1，无为0
//int main()
//{
//	double price = 0.0;
//	int mon = 0;
//	int day = 0;
//	int flag = 0;
//	//输入
//	scanf("%lf %d %d %d", &price, &mon, &day, &flag);
//	//计算
//	if (mon == 11 && day == 11)
//	{
//		price = price * 0.7 - flag * 50;
//	}
//	else if (mon = 12 && day == 12)
//	{
//		price = price * 0.8 - flag * 50;
//	}
//	//输出
//	if (price < 0.0)
//	{
//		printf("%.2lf\n",0);
//	}
//	else
//	{
//		printf("%.2lf\n", price);
//	}
//	return 0;
//}