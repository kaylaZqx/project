#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//������const
	int num = 10;
	num = 20;
	printf("%d\n", num);

	const int num1 = 10;
	int* p = &num1;
	*p = 20;
	printf("%d\n", num1);
	
	//const ����ָ�����
	//1.const����*�����
	//��˼�ǣ�pָ��Ķ�����ͨ��p���ı䣬����p���������ֵ���Ըı�
	//*p = 20;����
	const int num2 = 10;
	int n = 100;
	//const int* p = &num2;
	int const* p = &num2;
	*p = 20;//err
	p = &n;//ok
	printf("%d\n", num2);
	//2.const����*���ұ�
	//��˼�ǣ�pָ��Ķ����ǿ���ͨ��p���ı�ģ����ǲ����޸�p���������ֵ
	const int num3 = 10;
	int *const p = &num3;
	*p = 0;//ok
	p = &num3;//err
	printf("%d\n", num3);
	return 0;
}