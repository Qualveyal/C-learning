// Grid

#include <stdio.h>

int i, j, n;

void Scan_Combo()		//To ask user to input number of rows which is equal to number of columns.
{
	printf("Enter n = ");
	scanf("%d", &n);
}

void Dash()		//First line.
{
	printf("\n");
	for(i = 1; i <= n; i++)
	{
		printf(" __");
	}
}

void Box()		//The boxes
{
	for(i = 1; i <= n; i++)
	{
		printf("|__|");		//First box of row.
		
		for(j = 1; j < n; j++)
		{
			printf("__|");
		}
		printf("\n");
	}
}

int main()
{
	Scan_Combo();
	
	if(n < 0 || n > 39)
	{
		printf("ERROR");
	}
	else 
	{
		Dash();
		printf("\n");
		Box();
		printf("\nBoxes = %d\n", n*n);
	}
	
	main();	
	
	return 0;
}
