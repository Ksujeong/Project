#include <stdio.h>

int main(void)
{
	int num = 0;
	scanf("%d", &num);
	int k = 65;
	for (int i = 0; i < num; i++)
	{
		for (int j = num; j > i; j--)
		{
			printf("%c", k);
			k++;
		}
		printf("\n");
	}
	return 0;
}