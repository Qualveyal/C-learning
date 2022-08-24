 //	C Program to Reverse given String
//	----------------------------------

#include <stdio.h>
#include <string.h>
 
int main()
{
	int i, x, last, j = 0, k = 0;
    char str[100], str1[10][20], temp;

    printf("Enter the string: ");
    scanf("%[^\n]s", str);

/*
Reads into 2D character array */
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str1[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            str1[k][j] = str[i];
            j++;
        }
    }
    str1[k][j] = '\0';

/*
Reverses each word */
	for (i = 0; i <= k; i++)
	{	
		last = strlen(str1[i]);
		
		for(j = 0, x = last - 1; j < x; x--, j++)
		{
			temp = str1[i][j];
			str1[i][j] = str1[i][x];
			str1[i][x] = temp;
		}
	}
	
	printf("\nReversed string is: ");
	
/* Prints the reversed words from last to first, so entire string is reversed */
    for (k; k >=0; k--)
    {
        printf("%s ", str1[k]);
    }
    return 0;
}
