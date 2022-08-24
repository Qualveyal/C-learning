#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    int i = 0;
    scanf("%d", &n);

    int best = (n == 0) ? 0 : 9999999;
  
    while( i < 10)
	{
	for (i; i < n; i++)
	    {
	        int temp;
	        scanf("%d", &temp);
	        
	        if  ( (abs(temp) < abs(best)) || ((abs(temp) == abs(best)) && temp > best) )
	        {
	            best = temp;
	        }
	    }
	}
	
    printf("%d\n", best);
    return 0;
}
