#include <stdio.h>

int i, j, n, q;

void space(void)
{
	for(i = 1; i < q; i++)
	{
		printf(" ");
	}	
}

int main()
{
	printf("Enter n = ");
	scanf("%d", &n);

	for(q = n, j = 1; j <= n; j++, q--)
	{
		printf("\t");
	
		space();
		
		for(i = 1; i <= 2*j - 1; i++)
		{
			printf("*");
		}
	
		printf("\n");
	}

	return 0;
}
