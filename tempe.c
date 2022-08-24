// Temperature on CodinGame 
// https://www.codingame.com/training/easy/temperatures

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, av, av1, rv, rv1, turns;		// av = absolute value & rv = real value
	scanf("%d", &n);
    int T[n];   

    for (int i = 0; i < n; i++)	{	//Enters the data in the array
        int t;
        scanf("%d", &t);
        T[i] = t;
    }
    
    T[n] = T[0];		/* makes array's final value equal to its first value. So that there won't be
						   a random number in T[n] as it wasn't given a value in the last 'for' loop.    */

    for(int x = 0, u = 0, turns = 0; turns <= n; turns++)		//Checks which value is closer to 0
    {
		/*The absolute value of the 1st number is compared with it self (so that the code still works when n =1);
		  u is inceased. The function loops and compares 1st with 2nd number. This continues untill turns = n   */

        av = abs(T[x]);
        av1 = abs(T[x+u]);

    	rv = T[x];
		rv1 = T[x+u];

		if(av < av1)       { u++; }		//the next loop compares T[x] with the next number in the list
		else if(av > av1)  { x += u; u = 1; } 		//T[x+u] is made into T[x]. The former T[x] is no longer needed.
            
		else // av == av1
		{
        	if( rv >= rv1) 		//the next loop compares T[x] with the next number in the list
                {
                    u++;
                }
            else 		//rv < rv1. T[x+u] is made into T[x]. The former T[x] is no longer needed.
            {
                x += u;
                u = 1;
            }
    	}
    }

    printf("%d\n", n? rv : 0); 		//prints rv is n!=0. If n == 0, prints 0.

    return 0;
}
