#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

//方法1：
char* my_strcpy(char* dest,const char* sour)
{
	assert(dest != NULL);
	assert(sour != NULL);
	char* ret = dest;
	while (*sour != '\0')
	{
		*dest = *sour;
		sour++;
		dest++;
	}
	*dest = *sour;
	return ret;

}

//方法1：简化
char* my_strcpy(char* dest, const char* sour)
{
	assert(dest && sour);
	char* ret = dest;
	while (*dest++ == *sour++)
	{
		;
	}
	return ret;

}

int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}