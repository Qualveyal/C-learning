 // Reverses Single Word
// -----------------------

#include <stdio.h>
#include <string.h>

int main()
{
	char String[20];
	int i;
	
	printf("\tInput a string to reverse: ");
	scanf("%s", &String);
	printf("\n\tReverse is: ");
	
	i = strlen(String) - 1;
	
	for(i; i>=0; i--)
	{
		printf("%c", String[i]);
	}

	
	return 0;
}
