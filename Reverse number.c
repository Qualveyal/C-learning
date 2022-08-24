#include <stdio.h>
 
int main()
{
   int n, reverse = 0;
 
   printf("Enter a number to reverse\n");
   scanf("%d", &n);
 
   while (n != 0)
   {
/*1*/	reverse = reverse * 10;
/*2*/	reverse = reverse + n%10;  
/*3*/  	n       = n/10;
   }
 
   printf("Reverse of entered number is = %d\n", reverse);
   
 
   return 0;
}


/*
What the code does:
Loop 1: (n=12)
Step 1: reverse = 0 * 10 = 0
Step 2: reverse = 0 + 12%10 = 2 ('%' is modulus)
Step 3: n = 12/10 (12/10=1.2 but as n in int type, this is counted as 1)

loop 2: (n=1)
Step 1: reverse = 2 * 10 = 20
Step 2: reverse = 20 + 1%10 = 21 ('%' is modulus. 1%10=1)
Step 3: n = 1/10 (1/10=0.1 but as n in int type, this is counted as 0)

Loop terminates.
*/


