// Words in their own line

#include <stdio.h>

void main()
{
	char sen[100];
	int i;
	
	printf("Enter sentence: ");
	scanf("%[^\n]s", sen);
	puts("\nEach word in its own line:");
	
	for(i = 0; sen[i] != '\0'; i++)
	{
		if(sen[i] == ' ')
		{	
			printf("\n");
		} 
		else
		{
			printf("%c", sen[i]);
		}
	}
}
