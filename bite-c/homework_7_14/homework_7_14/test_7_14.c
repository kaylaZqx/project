#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//�ַ�������ѭ����
//int main()
//{
//	char arr[] = "abcdef"; //[a b c d e f \0]
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 2;  //int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//	printf("%s \n", arr);
//	return 0;
//}

//����
//void reverse(char arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 2;  //int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}

//
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//�ݹ�
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);  //*str=arr[0],*(str+1)=arr[1]
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse(str + 1);
//	}
//	*(str + len - 1) = tmp;
//
//}
//
//int main()
//{
//	char arr[] = "abcdef"; //[a b c d e f \0]
//	//int sz = sizeof(arr) / sizeof(arr[0]);  //sizeof�ں����ⲿ���ַ�������
//	
//	reverse(arr);
//
//	printf("%s \n", arr);
//	return 0;
//}

//void reverse(char arr[], int left, int right)
//{
//	if (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		reverse(arr, left + 1, right - 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg"; //[a b c d e f \0]
//	//int sz = sizeof(arr) / sizeof(arr[0]);  //sizeof�ں����ⲿ���ַ�������
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//
//	reverse(arr,left,right);
//
//	printf("%s \n", arr);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "abcdefg\0";
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//}

//int DigitalSum(n)
//{
//	if (n > 9)
//	{
//		return DigitalSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	int sum = 0;
//	scanf("%d", &num);
//	sum = DigitalSum(num);
//	printf("%d\n", sum);
//	return 0;
//}

//ʵ��n��k�η�
//double Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1 / Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double sum = Pow(n,k);
//	printf("%lf\n", sum);
//	return 0;
//}

//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init()��ʼ������Ϊȫ0
//ʵ��print()��ӡ�����ÿ��Ԫ��
//ʵ��reverse()�����������Ԫ�ص�����

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}

//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	reverse(arr, sz);
//	Print(arr, sz);
//	Init(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//
//int main()
//{
//	//֧�ֱ䳤����ı������ϣ�����Ĵ�С�����Ǳ���
//	//vc������֧�֣�vs��������֧��
//
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];//������鲻�ܳ�ʼ��
//	int i = 0;
//	//����
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//���
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	*p = 'q';
//	printf("%c\n", ch);
//	printf("%c\n", *p);
//	printf("%d\n", sizeof(double *));
//	return 0;
//}


int main()
{
	int arr[5] = { 1,2,3,4,5 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
	printf("%d\n", sizeof(arr));
	printf("%p\n", &arr);
	return 0;
}