#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int test(const char* str)
//{
//	printf("test()\n");
//	return 0;
//}
//int main()
//{
//	//函数指针---也是一种指针，是指向函数的指针
//	int (*pf)(const char*) = test;
//	(*pf)("abc");
//	pf("abc");
//	test("abc");
//	return 0;
//}
//
//
//函数指针的用途
//
//写一个计算器
//加、减、乘、除
//void menu()
//{
//	printf("*******************************\n");
//	printf("*****   1. add  2. sub    *****\n");
//	printf("*****   3. mul  4. div    *****\n");
//	printf("*****   0. exit           *****\n");
//	printf("*******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请输入：>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("请输入2个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入2个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入2个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入2个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("Exit!\n");
//			break;
//		default:
//			printf("请重新输入\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}

//void menu()
//{
//	printf("*******************************\n");
//	printf("*****   1. add  2. sub    *****\n");
//	printf("*****   3. mul  4. div    *****\n");
//	printf("*****   0. exit           *****\n");
//	printf("*******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入2个操作数：>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("请输入：>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("Exit!\n");
//			break;
//		default:
//			printf("请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add;//pf是函数指针
//	int (*arr[4])(int, int) = { Add,Sub,Mul,Div };//arr是函数指针的数组
//	return 0;
//}
//
////*********************************************************************************
//void menu()
//{
//	printf("*******************************\n");
//	printf("*****   1. add  2. sub    *****\n");
//	printf("*****   3. mul  4. div    *****\n");
//	printf("*****   0. exit           *****\n");
//	printf("*******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请输入：>");
//		scanf("%d", &input);
//
//		if (input == 0)
//		{
//			printf("Exit\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d", ret);
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//
//	} while (input);
//	return 0;
//}
//
////************************************************************************
//int main()
//{
//	//函数指针数组
//	int (*pfArr[])(int, int) = { Add,Sub,Mul,Div };
//
//	//指向【函数指针数组】的指针
//	int(*(*pfArr)[5])(int, int) = &pfArr;
//
//	return 0;
//}


//冒泡排序
//方法1：
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//一趟冒泡排序的过程
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//
////方法1改进：
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 0;//假设数组是排好序的
//		int j = 0;
//		//一趟冒泡排序的过程
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)                //进行优化，效率有所提升
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//方法2：
//qsort库函数，使用快速排序的思想实现一个排序函数
//qsort--该函数可以排序任意类型的数据
//void qsort(void* base,    //要排序的数据的起始位置
//	       size_t num,    //待排序的数据元素的个数
//	       size_t width,  //待排序的数据元素的大小（单位是字节） 
//	       int(* compare)(const void* elem1, const void* elem2)//函数指针--比较函数
//          );


//比较2个整型元素
//e1指向一个整数
//e2指向另外一个整数
//int cmp_int(const void* e1, const void* e2)     //void*是无具体类型的指针，可以接收任意类型的地址，但不能解引用操作，也不能加减整数
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//

int cmp_int(const void* e1, const void* e2)     //void*是无具体类型的指针，可以接收任意类型的地址，但不能解引用操作，也不能加减整数
{
	return (*(int*)e1 - *(int*)e2);
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;

		buf1++;
		buf2++;
	}
}

//修改bubble_sort函数，写出类似qsort函数
void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 0;//假设数组是排好序的
		int j = 0;
		//一趟冒泡排序的过程
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)                //进行优化，效率有所提升
		{
			break;
		}
	}
}

void test1()
{
	//qsort排序整型数据
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, sz, sizeof(arr[0]), cmp_int);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//strcmp------返回的值为>0,<0,==0
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test2()
{
	//测试使用qsort排序结构数据
	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

void test3()
{
	//qsort排序整型数据
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test4()
{
	//测试使用 bubble_sort排序结构数据
	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}