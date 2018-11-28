#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	char psw[10] = {0};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë:");
		scanf("%s", psw);
		if (strcmp(psw, "6666666") == 0)
		{
			printf("ÃÜÂëÕýÈ·£¬µÇÂ¼³É¹¦\n");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó£¬\n");
		}
	}
	if (i == 3)
	{
		printf("Èý´ÎÊäÈë´íÎó£¬ÍË³ö\n");
	}
	
	system("pause");
	return 0;
}