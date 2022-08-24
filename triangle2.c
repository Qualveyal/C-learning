// Triangle 2

#include <stdio.h>

int main()
{
	int n, i, j;
	
	printf("n = ");
	scanf("%d", &n);
	
	for(i = 1; i < n; i++)
	{
		for(j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(j = 1; j <= n; j++)
	{
		printf("*");
	}
	
	printf("\n");
	
	for(i = 1; i < n; i++)
	{
		for(j = i; j < n; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
