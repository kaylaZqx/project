#define _CRT_SECURE_NO_WARNINGS
//ʵ��һ��ͨѶ¼
//�˵���Ϣ��
//����
//����
//�Ա�
//�绰
//��ַ
//1.���100���˵���Ϣ
//2.������ϵ��
//3.ɾ��ָ����ϵ��
//4.������ϵ��
//5.�޸���ϵ��
//6.����
//7.��ʾ��ϵ��

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