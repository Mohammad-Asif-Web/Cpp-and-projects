#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter value of n: ");
    scanf("%d", &n);

    while(n>=10 && n<=20)
    {
        printf("%d\n", n);
        n++;  //    n++ = Increment Operator
    }

    printf("\n");

    printf("Enter the value of i: ");
    scanf("%d", &i);

    while(i>=20 && i<=30)
    {
        printf("%d\n", i);
        i--;    //    i-- = Decrement Operator
    }

    return 0;
}
