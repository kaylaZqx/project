#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	/*printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));*/
//	printf("%d\n", sizeof(struct S4));
//	printf("%d\n", offsetof(struct S4, c1));
//	printf("%d\n", offsetof(struct S4, s3));
//	printf("%d\n", offsetof(struct S4, d));
//	return 0;
//}


struct S
{
	int data[1000];
	int num;
};

void print1(struct S ss)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", ss.data[i]);
	}
	printf("%d \n", ss.num);
}

void print2(const struct S* ps)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("%d \n", ps->num);
}

int main()
{
	struct S s = { {1,2,3},100 };
	print1(s);        //传值调用
	print2(&s);       //传址调用
	return 0;
}