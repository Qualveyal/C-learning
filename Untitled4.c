#include <stdio.h>

char E;

void Loop_Or_Not()
{
	printf("\nPress 'e' to exit: ");
	scanf("%c", &E);
}

void main(){
	
	Loop_Or_Not();
	
	if(E != 'e'){
		printf("HI");
	}
}
