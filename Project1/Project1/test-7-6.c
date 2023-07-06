//写一个猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
//   a.猜对了，游戏结束
//   b.猜错了，告诉猜大了，还是猜小了，继续猜，直到猜对
//3.游戏一直玩，除非退出游戏
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("**********************\n");
	printf("***** 1.开始游戏 *****\n");
	printf("***** 0.退出游戏 *****\n");
	printf("**********************\n");
	return 0;
}

void game()
{
	//生成随机数 
	int ret = rand() % 100 + 1;

	int guess = 0;
	//猜数字
	while (1)
	{
		printf("请猜数字：\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
	return 0;
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();      //打印菜单
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}