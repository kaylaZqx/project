#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	//测试无const
//	int num = 10;
//	num = 20;
//	printf("%d\n", num);
//
//	const int num1 = 10;
//	int* p = &num1;
//	*p = 20;
//	printf("%d\n", num1);
//	
//	//const 修饰指针变量
//	//1.const放在*的左边
//	//意思是：p指向的对象不能通过p来改变，但是p变量本身的值可以改变
//	//*p = 20;出错
//	const int num2 = 10;
//	int n = 100;
//	//const int* p = &num2;
//	int const* p = &num2;
//	*p = 20;//err
//	p = &n;//ok
//	printf("%d\n", num2);
//	//2.const放在*的右边
//	//意思是：p指向的对象是可以通过p来改变的，但是不能修改p变量本身的值
//	const int num3 = 10;
//	int *const p = &num3;
//	*p = 0;//ok
//	p = &num3;//err
//	printf("%d\n", num3);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));//*(parr[i]+j)==parr[i][j]
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int(*p2)[10] = &arr;
//
//	char* arr1[5] = { 0 };
//	char* (*parr)[5] = &arr1;
//
//	char ch = 'w';
//	char* p1 = &ch;
//	char** p3 = &p1;
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p + i));
//		//p是指向数组的，*p其实就相当于数组名，数组名又是数组首元素的地址
//		//所以*p本质上是数组首元素的地址
//	}
//	return 0;
//}

//int main()
//{
//	const char* pstr = "hello";
//	printf("%s\n", pstr);
//	return 0;
//}