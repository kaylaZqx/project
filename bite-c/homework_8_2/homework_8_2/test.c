#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//��ѭ��
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("Hello\n");
//	}
//	return 0;
//}

//ģ��strcpy
//#include <assert.h >
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = { 0 };
//	scanf("%s %s", arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿��

//void move_odd_even(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//����������һ��ż����ͣ����
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//����������һ��������ͣ����
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//������ż��
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[6] = { 0 };
//	//����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//����
//	move_odd_even(arr, sz);
//	//���
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d \n", arr[i]);
//	}
//	return 0;
//}


//���������������е����У����������кϲ�Ϊһ���������в����
//����µ����ݣ�������������
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}

	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int j = 0;
	int k = 0;
	while (j < n && k < m)
	{
		if (arr1[j] < arr2[k])
		{
			printf("%d ", arr1[j]);
			j++;
		}
		else
		{
			printf("%d ", arr2[k]);
			k++;
		}
	}
	if (j < n)
	{
		for (; j < n; j++)
		{
			printf("%d ", arr1[j]);
		}
	}
	else
	{
		for (; k < m; k++)
		{
			printf("%d ", arr2[k]);
		}
	}
	return 0;
}