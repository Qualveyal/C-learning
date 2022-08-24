#include <stdio.h>

int a, b;
char X;

void FA()
{
	a*=a;
}

void FB()
{
	a += 8;
	a*=a;
}

void FC()
{
	do
	{
		a*=a;
		a+=b;
		b--;
	} while(a<100000);
}

void FD()
{
	for(b; b<a; b=b*b*b)
	{
		a+=b;
	}
}

int main()
{	
	a=7;
	b=a*a*a;
	X = X;
	
	puts("Enter X = ");
	
	while(X!='Q')
	{
		scanf("%c", &X);
				
		FA();
		FB();
		FC();
		FD();
		printf("%d", a);
		scanf("%c", &X);
	}
	return a*a;
}
