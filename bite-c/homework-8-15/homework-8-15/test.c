#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1.������
//5λ�˶�Ա�μ���10��̨��ˮ���������������ǲ²���������
//A˵��B�ڶ����ҵ�����
//B˵���ҵڶ���E���ģ�
//C˵���ҵ�һ��D�ڶ���
//D˵��C����ҵ�����
//E˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬ȷ����������

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


//2.�Ų�ȷ�����ֱ�Ϊ4�����ɷ���һ��������Ϊ4�����ɷ�����
//A�������ң�B����C
//C����D��  D��C�ں�˵
//��֪3����˵�滰��1����˵�ٻ���ȷ��˭�����֣�
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		//�ж�
//		if ((killer != 'a') + (killer == 'c') 
//			+ (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}


//3.��ӡ�������
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


//4.�ַ�������
//ʵ��һ�����������������ַ����е�k���ַ�
//e.g.:   ABCD���������ַ�CDAB
#include <string.h>

void left_rotate(char arr[],int k)
{
	int i = 0;
	int len = strlen(arr);
	k %= len;
	for (i = 0; i < k; i++)
	{
		//��ת1���ַ�
		//1
		char tmp = arr[0];
		//2
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		//3
		arr[len - 1] = tmp;
	}
}

int main()
{
	char arr[] = "abcdef";
	int k = 0;
	scanf("%d", &k);
	left_rotate(arr, k);
	printf("%s\n", arr);
	return 0;
}