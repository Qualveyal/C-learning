// Calculator 2

#include <stdio.h>

int main(void)
{
	float a;
	char b;
	float c;
	
	Begin:                                                              // So that the calculator can be cleared.
	
	printf("\n\tEnter equation (x, /, +, -)(C0 for clear):\n\n\t");     //Multiplication is 'x'.
	scanf("%f", &a);                                                   //Input the first number.

	while(1)                                                         //Start of While loop so that the result can be operated on.
	{
		scanf("%c %f", &b, &c);                                          //Input the symbol and second number.
		
		/*Prints the result for the specified operation*/ 
		switch(b)
		{
		
		case 'x':
			printf("\t=\n\t%f", a*c);
			a*=c;
			break;
		
		case '/':	
			printf("\t=\n\t%f", a/c);
			a/=c;
			break;
		
		case '+':
			printf("\t=\n\t%f", a+c);
			a+=c;
			break;
		
		case '-':
			printf("\t=\n\t%f", a-c);
			a-=c;
			break;
			
		case 'C':
			goto Begin;
			break;
	
		//Prints 'ERROR' if b isn't an operation symbol or 'C'.
		default:
			printf("\tERROR");                                 
			goto Begin; 
				
		}
	}
	
	return 0;
}