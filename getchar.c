// getchar() function example

#include <stdio.h>

int main(void)
{	
	int i = 7, j = 7;

	while( (i > 5) && (j > 5) )
	{
		printf("i: %d\t", i--);
	
		printf("j: %d\n", --j);
	}
	
	printf("\ni: %d\tj: %d\n", i, j);
	
	getchar(); /* pause */ 
	return 0;
}


