// Calculator

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
		scanf(" %c", &b);                                          //Input the symbol
		scanf(" %f", &c);                                         //and second number.
		
		/*Prints the result for the specified operation*/ 
		if(b=='x')
		{
			printf("\t=\n\t%f", a*c);
			a*=c;
		} else
		
		if(b=='/')
		{	
			printf("\t=\n\t%f", a/c);
			a/=c;
		} else
		
		if(b=='+')
		{
			printf("\t=\n\t%f", a+c);
			a+=c;
		} else
		
		if(b=='-')
		{
			printf("\t=\n\t%f", a-c);
			a-=c;
		} else
		
		if(b=='C' && c==0)
		{
			goto Begin;                                      //To clear the calculator.
		} else
		
		{
			printf("\tERROR");                             //Prints 'ERROR' if b isn't an operation symbol.
		}
	}
	return 0;
}
