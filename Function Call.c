//Function Call Example

#include <stdio.h>

double Divide(double value)
{
    return (double) value/2;
}

int main ()
{
    int a=5, b=2;
    double c;
    c = (double) a/b;
    printf("%f\n", c);

    c = Divide(a);
    printf("%f\n", c);

    return 0;
}


