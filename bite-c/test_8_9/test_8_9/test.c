#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	//sizeof(������)
//	printf("%d\n", sizeof(arr + 0));//4/8
//	//arr+0��������Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));//1
//	//*arr�����������Ԫ�أ���С��1�ֽ�
//	//*arr -----> arr[0]
//	//*(arr+0) ------> arr[0]
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	//&arr������ĵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	//&arr+1�������ĵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	//&arr[0]+1�ǵڶ���Ԫ�صĵ�ַ
//
//
//	printf("%d\n", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr + 0));//���ֵ
//	//printf("%d\n", strlen(*arr));//--->strlen('a');---->strlen(97);Ұָ�룬���򱨴�
//	//printf("%d\n", strlen(arr[1]));//--->strlen('b');---->strlen(98);����
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//
//	return 0;
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	// [a b c d e f \0]
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	//strlen�����ַ������ȵģ���ע�����ַ����е�\0���������\0֮ǰ���ֵ��ַ��ĸ���
//	//strlen�ǿ⺯����ֻ����ַ���
//	//stringֻ��עռ���ڴ�ռ�Ĵ�С�����ں��ڴ��зŵ���ʲô
//	//sizeof�ǲ�����
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}
//
//
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8
//	printf("%d\n", sizeof(p + 1));//4/8
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4/8
//	printf("%d\n", sizeof(&p + 1));//4/8
//	printf("%d\n", sizeof(&p[0] + 1));//4/8
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//
//
//	return 0;
//}
//
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	//a[0]�ǵ�һ�����һά���������������������sizeof�ڲ�,a[0]��ʾ��һ���������һά����
//	//sizeof(a[0])������ǵ�һ�еĴ�С
//	printf("%d\n", sizeof(a[0] + 1));//4
//	//a[0]��û�е�������sizeof�ڲ���Ҳû��ȡ��ַ��a[0]�ͱ�ʾ��Ԫ�صĵ�ַ
//	//���ǵ�һ�����һά����ĵ�һ��Ԫ�صĵ�ַ��a[0] + 1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	//a[0] + 1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	//*(a[0] + 1)���ǵ�һ�еڶ���Ԫ��
//	printf("%d\n", sizeof(a + 1));//4/8
//	//a��Ȼ�Ƕ�ά����ĵ�ַ�����ǲ�û�е�������sizeof�ڲ���Ҳûȡ��ַ
//	//a��ʾ��Ԫ�صĵ�ַ����ά�������Ԫ�������ĵ�һ��,a���ǵ�һ�еĵ�ַ
//	//a+1����������һ�У���ʾ�ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));//16
//	//*(a + 1)�ǶԵڶ��е�ַ�Ľ����ã��õ����ǵڶ���
//	//*(a+1)-------->a[1]
//	//sizeof(*(a+1))--------->sizeof(a[1])
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	//&a[0]---�Ե�һ�е�������ȡ��ַ���ó����ǵ�һ�еĵ�ַ
//	//&a[0]+1----�õ����ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	//a��ʾ��Ԫ�صĵ�ַ�����ǵ�һ�еĵ�ַ
//	//*a���ǶԵ�һ�е�ַ�Ľ����ã��õ��ľ��ǵ�һ��
//	printf("%d\n", sizeof(a[3]));
//
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}


struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;

int main()
{
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);
	return 0;
}
