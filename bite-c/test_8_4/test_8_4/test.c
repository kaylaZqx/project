#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int test(const char* str)
//{
//	printf("test()\n");
//	return 0;
//}
//int main()
//{
//	//����ָ��---Ҳ��һ��ָ�룬��ָ������ָ��
//	int (*pf)(const char*) = test;
//	(*pf)("abc");
//	pf("abc");
//	test("abc");
//	return 0;
//}
//
//
//����ָ�����;
//
//дһ��������
//�ӡ������ˡ���
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
//		printf("�����룺>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("������2����������>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("������2����������>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("������2����������>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("������2����������>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("Exit!\n");
//			break;
//		default:
//			printf("����������\n");
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
//	printf("������2����������>");
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
//		printf("�����룺>");
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
//			printf("����������\n");
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
//	int (*pf)(int, int) = Add;//pf�Ǻ���ָ��
//	int (*arr[4])(int, int) = { Add,Sub,Mul,Div };//arr�Ǻ���ָ�������
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
//		printf("�����룺>");
//		scanf("%d", &input);
//
//		if (input == 0)
//		{
//			printf("Exit\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������2����������>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d", ret);
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//	} while (input);
//	return 0;
//}
//
////************************************************************************
//int main()
//{
//	//����ָ������
//	int (*pfArr[])(int, int) = { Add,Sub,Mul,Div };
//
//	//ָ�򡾺���ָ�����顿��ָ��
//	int(*(*pfArr)[5])(int, int) = &pfArr;
//
//	return 0;
//}


//ð������
//����1��
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		//һ��ð������Ĺ���
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}