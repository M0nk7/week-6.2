#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	if(num<0) printf("error");
	else
	{
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}