////дһ����������Ϸ
////1.�Զ�����һ��1-100֮��������
////2.������
////   a.�¶��ˣ���Ϸ����
////   b.�´��ˣ����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
////3.��Ϸһֱ�棬�����˳���Ϸ
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//
//void menu()
//{
//	printf("**********************\n");
//	printf("***** 1.��ʼ��Ϸ *****\n");
//	printf("***** 0.�˳���Ϸ *****\n");
//	printf("**********************\n");
//	return 0;
//}
//
//void game()
//{
//	//��������� 
//	int ret = rand() % 100 + 1;
//
//	int guess = 0;
//	//������
//	while (1)
//	{
//		printf("������֣�\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		menu();      //��ӡ�˵�
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��С������=m*n/���Լ��
//�ҳ����Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//
//	printf("�������������֣�\n");
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
//			printf("���Լ���ǣ�%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}



//�ҳ�100-200֮�������
//����-����
//ֻ�ܱ�1���Լ�������������
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
//�ػ�С����
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again:
//	printf("��ע�������һ�����ڹػ���������룬������ֹͣ�ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//�����жϣ��Ƿ�Ϊ����
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




//�������ֲ���

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
	//�ҵ��˾ͷ����ҵ���λ�õ��±�
	//δ�ҵ��ͷ���-1
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	return 0;
}