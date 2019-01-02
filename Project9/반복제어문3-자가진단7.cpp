#include <stdio.h>

int main(void)
{
	int num = 0;
	int k = 1;
	int n = 65;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		for (int j = num; j > i; j--)
		{
			printf("%d ", k);
			k++;
		}
		for (int l = 0; l <= i; l++)
		{
			printf("%c ", n);
			n++;
		}
		printf("\n");
	}
	return 0;
}