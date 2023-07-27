#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//小乐乐上课需要走n阶台阶，因为腿长，所以每次可以选择走一阶或两阶，
//一共有多少种走法？

//int fib(int n)    //计算走n个台阶的走法
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);
//	//计算
//	int m = fib(n);
//	//输出
//	printf("%d\n", m);
//	return 0;
//}

//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列
//序列中未被删除数字的前后位置没有发生改变
//数据范围：序列长度和序列中的值都满足1≤n≤50
//输入描述：
//第一行输入一个整数（0≤n≤50）
//第二行输入N个整数，输入用空格分隔的N个整数
//第三行输入想要进行删除的一个整数
//输出描述：
//输出为一行，删除指定数字之后的序列

//int main()
//{
//	int n = 0;
//	//输入一个整数
//	scanf("%d", &n);
//	int arr[50];
//	//输入N个整数
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	//输入想要删除的值
//	scanf("%d", &del);
//
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];  //等同于arr[j]=arr[i];j++;
//		}
//	}
//
//	//输出
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//输入n个成绩，换行输入n个成绩中最高分数和最低分数的差
//输入：第一行为n,表示n个成绩，不会大于10000
//第二行为n个成绩（整数表示，范围0~100）,以空格隔开
//输出：一行，输出n个成绩中最高分数和最低分数的差

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10000];
//	int i = 0;
//	
//	//输入
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		
//	}
//	
//	////找出最大值
//	//int max = arr[0];
//	//for (i = 1; i < n; i++)
//	//{
//	//	if (arr[i] > max)
//	//	{
//	//		max = arr[i];
//	//	}
//	//}
//	////找出最小值
//	//int min = arr[0];
//	//for (i = 1; i < n; i++)
//	//{
//	//	if (arr[i] < min)
//	//	{
//	//		min = arr[i];
//	//	}
//	//}
//
//
//	int max = arr[0];
//	//找出最小值
//	int min = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	
//	printf("%d\n", max - min);
//	return 0;
//}

//完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写；
//反之则转换为小写
//输入：多组输入，每一行输入一个字母
//输出：针对每组输入，输出单独占一行，输出字母的对应形式

//int main()
//{
//	//char ch = 0;
//
//	//scanf读取成功的时候，返回的是读取的数据的个数
//	//scanf读取失败的时候，返回的是EOF
//	//while(scanf("%c", &ch)!=EOF)
//	/*while (scanf("%c", &ch)==1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		
//	}*/
//
//	//while (scanf("%c", &ch) == 1)
//	//{
//	//	if (ch >= 'a' && ch <= 'z')
//	//	{
//	//		printf("%c\n", ch - 32);
//	//	}
//	//	else 
//	//	{
//	//		printf("%c\n", ch + 32);
//	//	}
//	//	getchar();//处理\n
//	//}

//	return 0;
//}


int main()
{

	int n = 0;
	scanf("%d", &n);
		
	printf("%d\n", n);
	char ch[10];
	int i = 0;
		
		
	for (i = 0; i < n; i++)
	{
		scanf(" %c",&ch[i]);
	}
////		
//		for (i = 0; i < n; i++)
//				{
//					
//					
//						if (ch[i] >= 'a' && ch[i] <= 'z')
//						{
//							printf("%c\n", ch[i] - 32);
//						}
//						else
//						{
//							printf("%c\n", ch[i] + 32);
//						}
//					
//				}
		i = 0;
		while (i<n)
		{
			if (ch[i] >= 'a' && ch[i] <= 'z')
			{
				printf("%c\n", ch[i] - 32);
			}
			else
			{
				printf("%c\n", ch[i] + 32);
			}
			i++;
		}
}