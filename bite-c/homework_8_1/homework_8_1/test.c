#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>

//�Ѿ�������������a,b,c���ж��ܷ���������Σ�������������Σ��ж������ε�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if ((a+b>c) && (a+c>b) && (b+c>a))
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b) || (a == c) || (b == c))
//			{
//				printf("lsosceles triangle!\n");
//			}
//			else
//			{
//				printf("Oridinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//		//break;
//	}
//	return 0;
//}

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//дһ����������������һ���ַ���������
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//
//	//����
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//�������
//���磺Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
//2+22+222+2222+22222

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//��ӡˮ�ɻ���
//��0~100000֮�������ˮ�ɻ��������
//ˮ�ɻ���ָһ��nλ�������λ���ֵ�n�η�֮�͵��ڸ�������
//�磺153=1^3+5^3+3^3,��153��һ��ˮ�ɻ���
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100001; i++)
//	{
//		//�ж�
//		//1.����i�Ǽ�λ��
//		int tmp = i;
//		int n = 1;//�κ�һ����������һλ��
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2.�õ�i��ÿһλ������n�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d \n", i);
//		}
//	}
//	return 0;
//}

//��ӡ����
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ���ƿ��ˮ
//
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	//�û�
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//������A��������B����С��������ָ�ܱ�A��B��������С��������ֵ����A��B����С������
// ����1��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//	while (1)
//	{
//		if ((m % a == 0) && (m % b == 0))
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d\n", m);
//	return 0;
//}

////����2��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d\n", a * i);
//	return 0;
//}

//�����ʽ��е��ã������Ų�����
#include <assert.h>
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	//����
	char arr[101] = { 0 };
	gets(arr);
	//����
	//1.����
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//2.ÿ����������
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != '\0')
		{
			end++;
		}
		start = end;
	}
	//���
	printf("%s\n", arr);
	return 0;
}