#include <stdio.h>

int main()
{
    int n, i, fac;
    fac = 1;

    printf("Enter the Factorial number: ");
    scanf("%d", &i);
    printf("\n");

    for(n=1; n<=i; n++)
    {
        fac*=n;     //  factorial = factorial * n
    }
    printf("the value of %d factorial number is %d\n",i, fac);

    return 0;
}
