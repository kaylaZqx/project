#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1.猜名次
//5位运动员参加了10米台跳水比赛，有人让他们猜测比赛结果：
//A说：B第二，我第三；
//B说：我第二，E第四；
//C说：我第一，D第二；
//D说：C最后，我第三；
//E说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，确定比赛名次

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b < +5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120 && a + b + c + d + e == 15)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//2.排查确定凶手必为4个嫌疑犯的一个，以下为4个嫌疑犯供词
//A：不是我；B：是C
//C：是D；  D：C在胡说
//已知3个人说真话，1个人说假话，确定谁是凶手？
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		//判断
//		if ((killer != 'a') + (killer == 'c') 
//			+ (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}


//3.打印杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][0] = 1;
//			}
//			if (i == j)
//			{
//
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//4.字符串左旋
//实现一个函数，可以左旋字符串中的k个字符
//e.g.:   ABCD左旋两个字符CDAB
//#include <string.h>

//方法1：
//void left_rotate(char arr[],int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	for (i = 0; i < k; i++)
//	{
//		//旋转1个字符
//		//1
//		char tmp = arr[0];
//		//2
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//3
//		arr[len - 1] = tmp;
//	}
//}


//方法2：
//#include <assert.h>
//void reverse(char* left,char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr, arr + k - 1);//左
//	reverse(arr + k, arr + len - 1);//右
//	reverse(arr, arr + len - 1);//整个
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}



//4.杨氏矩阵
//有一个数学矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在
//要求：时间复杂度小于O(N)

//方法1：
struct point
{
	int x; 
	int y;
};

//struct point find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	struct point p = { -1,-1 };
//	while (x <= r - 1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	struct point ret = find_num(arr, 3, 3, k);
//	printf("%d %d\n", ret.x, ret.y);
//	return 0;
//}

//方法2：
int find_num(int arr[3][3], int *px, int *py, int k)
{
	int x = 0;
	int y = *py - 1;
	struct point p = { -1,-1 };
	while (x <= *px - 1 && y >= 0)
	{
		if (k < arr[x][y])
		{
			y--;
		}
		else if (k > arr[x][y])
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	*px = -1;
	*py = -1;
	return 0;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", &k);
	int a = 3;//行
	int b = 3;//列
	int ret = find_num(arr, &a, &b, k);
	if (ret == 1)
	{
		printf("%d %d\n", a, b);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}