#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("***** 1.play *****\n");
	printf("***** 0.exit *****\n");
}
void game()
{
	int ret = 0;
	int n = 0;
	ret = rand() % 100;
	while (1)
	{
		printf("������֣�\n");
		scanf("%d", &n);
		if (n == ret)
		{
			printf("�¶��ˣ�\n");
			break;
		}
		else if (n < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�´���\n");
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("��ѡ��\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("����Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
		}
	
	} while (input);
	system("pause");
	return 0;


}
