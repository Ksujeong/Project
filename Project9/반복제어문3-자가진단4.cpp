#include <stdio.h>

int main(void)
{
	int num = 0;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j > i; j++)
		{
			printf(" ");
		}
		for (int l = num; l > i; l--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}