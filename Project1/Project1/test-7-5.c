#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i < n + 1 ; i++)
//	{
//		sum = sum * i ;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = 0;
//	sz = sizeof(arr);
//	printf("%d\n", sz);
//	int sz1 = 0;
//	sz1 = sizeof(arr[0]);
//	printf("%d\n", sz1);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d ", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����");
//	}
//	return 0;
//}

//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "welcom to cjlu!!!";
//	char arr2[] = "1 2 3";
//	int len = strlen(arr1);
//	printf("%d\n", len);
//	int len2 = sizeof(arr1);
//	printf("%d\n", len2);
//	int len3 = strlen(arr2);
//	printf("%d\n", len3);
//	int len4 = sizeof(arr2);
//	printf("%d\n", len4);
//	//char arr2[] = "#################";
//	//int left = 0;
//	//int right = strlen(arr1) - 1;
//	//while (left<=right)
//	//{
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	printf("%s\n", arr2);
//	//	Sleep(1000);            //����һ��
//	//	system("cls");          //�����Ļ
//	//	left++;
//	//	right--;
//	//}
//	//printf("%s\n", arr2);
//
//	return 0;
//}

#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:");
//		scanf("%s", password);        //scanf��������д\n
//		if (strcmp(password, "123456") == 0)     //�����ַ����Ƚϣ�����ʹ��==��Ӧ��ʹ��strcmp
//		{
//			printf("������ȷ��\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������˳���¼��\n");
//	}
//	return 0;
//}