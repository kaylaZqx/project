//дһ����������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.������
//   a.�¶��ˣ���Ϸ����
//   b.�´��ˣ����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
//3.��Ϸһֱ�棬�����˳���Ϸ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("**********************\n");
	printf("***** 1.��ʼ��Ϸ *****\n");
	printf("***** 0.�˳���Ϸ *****\n");
	printf("**********************\n");
	return 0;
}

void game()
{
	//��������� 
	int ret = rand() % 100 + 1;

	int guess = 0;
	//������
	while (1)
	{
		printf("������֣�\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
		menu();      //��ӡ�˵�
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}