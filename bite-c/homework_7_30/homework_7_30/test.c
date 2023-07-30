#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//��1��ͳ�ƶ�����1�ĸ���

//����1��
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//����2��
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//����3��
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}

//��2�����������������в�ͬλ�ĸ���
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ��bit����ͬ��

//����1��
//int count_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//����2��
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	//���^������
//	//��ͬΪ0������Ϊ1
//	int ret = m ^ n;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//	return 0;
//}

//��3����ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	//��ȡ����λ
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//��ȡż��λ
//	for (i = 31; i >= 1; i = i - 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}

//��4����ӡͼ��
//���룺һ��������2~20������ʾ�����������Ҳ��ʾ��ɡ�X���ķ�б�ߺ���б�ߵĳ���
//��������ÿ�����룬����á�*����ɵ�X��ͼ��
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
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//		break;
//	}
//	return 0;
//}

//��5�����ĳ��ĳ���ж����죬�����·ݺ���ݣ�������һ��������ж�����

int is_leap_year(int y)
{
	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
}
int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d %d", &y, &m) == 2)
	{
		d = days[m];
		if ((is_leap_year(y) == 1) && (m == 2))
		{
			d++;
		}
		printf("%d\n", d);
		break;
	}
	return 0;
}