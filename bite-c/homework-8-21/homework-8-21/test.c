#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//1.дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
//AABCD����һ���ַ�ABCDA;AABCD����һ���ַ�DAABC;

//����1��
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
////int is_right_move(char arr1[], char arr3[])//����
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
//	//�ж�arr2�е��ַ����Ƿ����ͨ��arr1�е��ַ�����ת�õ�
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

//����2��
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
//	//�ж�arr2�е��ַ����Ƿ����ͨ��arr1�е��ַ�����ת�õ�
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


//2.����ת��
//���룺��һ�а�����������n��m����ʾһ���������n��m�У�
//��2��n+1�У�ÿ������m��������������n*m��������ʾ��һ�������Ԫ��
//��������m��n�У�Ϊ����ת�ú�Ľ����ÿ����������һ���ո�

//int main()
//{
//	//����
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	//int arr[n][m];   //�䳤���飬��c99��ʹ�ã�������鲻�ܱ���ʼ������vs�в���ʹ�ñ䳤����
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
//	//���
//	//��
//	for (i = 0; i < m; i++)
//	{
//		//��
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//3.�����Ǿ����ж�
//���룺��һ�а���1������n����ʾһ���������n��n�У�
//��2��n+1�У�ÿ������m��������������n*n��������ʾ��һ�������Ԫ��
//���������������Ǿ���ΪYES,��֮ΪNO
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


//4.����һ���������У��ж��Ƿ�Ϊ�������С�����ָ�����е�������С����������ߴӴ�С����;���Ҳ������
//���룺��һ������һ������N���ڶ�������N������
//������������sorted���������unsorted
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