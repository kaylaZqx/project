#define _CRT_SECURE_NO_WARNINGS
//实现一个通讯录-------静态版本
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

#include "contact.h"

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
	Contact con;//通讯录
	//初始化
	InitContact(&con);
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			SortContact(&con);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}

	} while(input);
	return 0;
}