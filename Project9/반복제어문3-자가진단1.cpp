#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int count = 0;
	int i = 0;
	int p = 0;
	while(1)
	{
		i++;
		if (i % 2 == 1)
		{
			p = i + p;
			count++;

		}
		if (p >= n)
			break;
		
	}
	printf("%d  %d", count, p);
	return 0;
}