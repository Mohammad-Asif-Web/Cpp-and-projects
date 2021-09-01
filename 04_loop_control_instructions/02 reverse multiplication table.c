#include <stdio.h>

int main()
{
    int m, s, e;

    printf("Enter the Multiplication number: ");
    scanf("%d", &m);
    printf("The Reverse Multiply stars from: ");
    scanf("%d", &s);
    printf("The Multiply Ends at: ");
    scanf("%d", &e);
    printf("\n");

    for(s; s>=e; s--)
    {
        printf("the reverse multiplication of %d * %d is %d\n", m, s, m*s );
    }
}
