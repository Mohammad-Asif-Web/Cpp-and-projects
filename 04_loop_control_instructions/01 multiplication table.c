#include <stdio.h>

int main()
{
    int m, s, e;  //m=multiplication; s=start; e=end;
    printf("Enter the Multiplication number: ");
    scanf("%d", &m);
    printf("Your Multiply number starts from: ");
    scanf("%d", &s);
    printf("Your Multiply number Ends at: ");
    scanf("%d", &e);
    printf("\n");

    for(s; s<=e; s++)
    {
        printf("the Multiplication of %d * %d is %d\n",m, s, m*s);
    }

    return 0;
}
