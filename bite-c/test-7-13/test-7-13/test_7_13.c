#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////形参是数组的形式
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp=arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
// 

//形参是指针形式
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	//把数组的数据排成升序
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0;i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//arr就是首元素的地址
//	printf("%p\n", arr+1);
//	printf("----------------\n");
//	printf("%p\n", &arr[0]);//首元素的地址
//	printf("%p\n", &arr[0]+1);
//	printf("----------------\n");
//	printf("%p\n", &arr);//数组的地址
//	printf("%p\n", &arr+1);
//}

int main()
{
	int arr[3][4];
	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);
}