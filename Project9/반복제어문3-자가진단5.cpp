#include <stdio.h>

int main(void)
{
	int num = 0;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		for (int j = num +num -1; j >= i*2+1; j--)
		{
			printf("*");
		}
			printf("\n");
			
			for (int k = 0; k <= i; k++)
			{
				printf(" ");
			}

	}
	return 0;
}