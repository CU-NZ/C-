#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#define n 10
int main()
{
	int i = 0;
	int j = 0;
	int a[n][n];
	for (i = 0; i < n; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < n; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (2 * n - 2 * i); j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}