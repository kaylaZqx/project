#define _CRT_SECURE_NO_WARNINGS
//实现一个通讯录
//人的信息：
//名字
//年龄
//性别
//电话
//地址
//1.存放100个人的信息
//2.增加联系人
//3.删除指定联系人
//4.查找联系人
//5.修改联系人
//6.排序
//7.显示联系人

void menu()
{
	printf("***********************************\n");
	printf("***** 1. add         2.de1    *****\n");
	printf("***** 3. search      4.modify *****\n");
	printf("***** 5. show        6.sort   *****\n");
	printf("***** 0. exit                 *****\n");
	printf("***********************************\n");
}

int main()
{
	int input = 0;

	scanf("%d", &input);
	do
	{
		menu();

	} while();
	return 0;
}