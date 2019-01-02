#include <stdio.h>

int main(void)
{
	int num = 0;
	scanf("%d", &num);
	int i = 0, j = 0;

	for (int i = 0; i < num; i++)
	{
		for (int j = num; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j <= i; j++) 
		{		
			printf("*");
	}
	printf("\n");
			
	}

	return 0;
}