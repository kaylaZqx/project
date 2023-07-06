////写一个猜数字游戏
////1.自动产生一个1-100之间的随机数
////2.猜数字
////   a.猜对了，游戏结束
////   b.猜错了，告诉猜大了，还是猜小了，继续猜，直到猜对
////3.游戏一直玩，除非退出游戏
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//
//void menu()
//{
//	printf("**********************\n");
//	printf("***** 1.开始游戏 *****\n");
//	printf("***** 0.退出游戏 *****\n");
//	printf("**********************\n");
//	return 0;
//}
//
//void game()
//{
//	//生成随机数 
//	int ret = rand() % 100 + 1;
//
//	int guess = 0;
//	//猜数字
//	while (1)
//	{
//		printf("请猜数字：\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();      //打印菜单
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//最小公倍数=m*n/最大公约数
//找出最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//
//	printf("请输入两个数字：\n");
//	scanf("%d%d", &m, &n);
//	
//	int max = 0;
//	if (m < n)
//	{
//		max = m;
//	}
//	else
//	{
//		max = n;
//	}
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数是：%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}



//找出100-200之间的素数
//素数-质数
//只能被1和自己本身整除的数
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 201; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

#include <string.h>
#include <stdlib.h>
//关机小程序
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again:
//	printf("请注意电脑在一分钟内关机，如果输入，我是猪，停止关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//函数判断，是否为素数
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j < x; j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 201; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int is_leap_year(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}




//函数二分查找

int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < k)
		{
			left = mid + 1;
		}
		else if (a[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
	
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);
	//找到了就返回找到的位置的下标
	//未找到就返回-1
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}