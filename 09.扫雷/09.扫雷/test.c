#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include<stdlib.h>
void menu()
{
	printf("*********��ӭ����ɨ��***********\n");
	printf("********************************\n");
	printf("************ 1.play*************\n");
	printf("************ 0.exit*************\n");
	printf("********************************\n");

}
void game()
{
		char mine[ROWS][COLS] = { 0 };
		char show[ROWS][COLS] = { 0 };
		InitBoard(mine, ROWS, COLS, '0');//��ʼ�����������
		InitBoard(show, ROWS, COLS, '*');//��ʼ���������
		SetMine(mine, ROW, COL);//����
	//	DisplayBoard(mine, ROW, COL);//��ӡ���������(���ܸ���ҿ������Բ���ӡ)
		DisplayBoard(show, ROW, COL);//��ӡ�������
		SafeMine(mine, show, ROW, COL);//��һ�β�ը��
		FindMine(mine, show, ROW, COL);//����
	
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();
	printf("��ѡ��");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		game();
		break;
	case 0 :
		printf("�˳���Ϸ\n");
		break;
	default :
		printf("ѡ�����\n");
		break;
	}
	system("pause");
	return 0;
}