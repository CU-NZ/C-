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
		printf("请猜数字：\n");
		scanf("%d", &n);
		if (n == ret)
		{
			printf("猜对了！\n");
			break;
		}
		else if (n < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜大了\n");
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择：\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("玩游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
		}
	
	} while (input);
	system("pause");
	return 0;


}
