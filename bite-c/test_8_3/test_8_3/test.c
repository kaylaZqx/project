#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//测试无const
	int num = 10;
	num = 20;
	printf("%d\n", num);

	const int num1 = 10;
	int* p = &num1;
	*p = 20;
	printf("%d\n", num1);
	
	//const 修饰指针变量
	//1.const放在*的左边
	//意思是：p指向的对象不能通过p来改变，但是p变量本身的值可以改变
	//*p = 20;出错
	const int num2 = 10;
	int n = 100;
	//const int* p = &num2;
	int const* p = &num2;
	*p = 20;//err
	p = &n;//ok
	printf("%d\n", num2);
	//2.const放在*的右边
	//意思是：p指向的对象是可以通过p来改变的，但是不能修改p变量本身的值
	const int num3 = 10;
	int *const p = &num3;
	*p = 0;//ok
	p = &num3;//err
	printf("%d\n", num3);
	return 0;
}