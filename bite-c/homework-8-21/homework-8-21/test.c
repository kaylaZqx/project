#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//1.写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串
//AABCD左旋一个字符ABCDA;AABCD右旋一个字符DAABC;

//方法1：
//int is_left_move(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		char tmp = arr1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		if (strcmp(arr2, arr1) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
////int is_right_move(char arr1[], char arr3[])//右旋
////{
////	int len = strlen(arr1);
////	int i = 0;
////	for (i = len - 1; i > 0; i-- )
////	{
////		char tmp = arr1[len - 1];
////		int j = 0;
////		for (j = len - 2; j >= 0; j--)
////		{
////			arr1[j + 1] = arr1[j];
////		}
////		arr1[0] = tmp;
////		if (strcmp(arr3, arr1) == 0)
////		{
////			return 1;
////		}
////	}
////	return 0;
////}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	//char arr3[] = "efabcd";
//	//判断arr2中的字符串是否可以通过arr1中的字符串旋转得到
//	int ret1 = is_left_move(arr1, arr2);
//	//int ret2 = is_right_move(arr1, arr3);
//	if (ret1 == 1)
//	{
//		printf("Ok\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	/*if (ret2 == 1)
//	{
//		printf("Ok\n");
//	}
//	else
//	{
//		printf("No\n");
//	}*/
//	return 0;
//}

//方法2：
//int is_left_move(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	strncat(arr1, arr1, len1);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefab";
//	//判断arr2中的字符串是否可以通过arr1中的字符串旋转得到
//	int ret1 = is_left_move(arr1, arr2);
//	if (ret1 == 1)
//	{
//		printf("Ok\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}


//2.矩阵转置
//输入：第一行包含两个整数n和m，表示一个矩阵包含n行m列；
//从2到n+1行，每行输入m个整数，共输入n*m个数，表示第一个矩阵的元素
//输出：输出m行n列，为矩阵转置后的结果，每个数后面有一个空格

//int main()
//{
//	//输入
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	//int arr[n][m];   //变长数组，在c99中使用，变成数组不能被初始化，在vs中不能使用变长数组
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	//输出
//	//列
//	for (i = 0; i < m; i++)
//	{
//		//行
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//3.上三角矩阵判断
//输入：第一行包含1个整数n，表示一个矩阵包含n行n列；
//从2到n+1行，每行输入m个整数，共输入n*n个数，表示第一个矩阵的元素
//输出：如果是上三角矩阵为YES,反之为NO
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flag = 0;
//				goto end;
//			}
//		}
//	}
//end:
//	if (flag == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}


//4.输入一个整数序列，判断是否为有序序列。有序，指序列中的整数从小到大排序或者从大到小排序;相等也是有序
//输入：第一行输入一个整数N；第二行输入N个整数
//输出：有序输出sorted，无序输出unsorted
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int i = 0;
	int flag1 = 0;
	int flag2 = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
			{
				flag1 = 1;
			}
			else if (arr[i] < arr[i - 1])
			{
				flag2 = 1;
			}
			else
			{
				;
			}
		}
	}

	if (flag1 + flag2 <= 1)
	{
		printf("sorted\n");
	}
	else
	{
		printf("unsorted\n");
	}
	return 0;
}