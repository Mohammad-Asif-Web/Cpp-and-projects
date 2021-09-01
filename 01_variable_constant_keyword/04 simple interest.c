#include <stdio.h>

int main()
{
    int principal, year;
    float rate, simpleInterest;

    printf("Enter the number of Principal Amount\n");
    scanf("%d", &principal);

    printf("Enter the number of Year\n");
    scanf("%d", &year);

    printf("Enter the amount of Rate per Year\n");
    scanf("%f", &rate);

    simpleInterest = (principal * year * rate)/100;

    printf("The value of Simple Interest is %f", simpleInterest);

    return 0;
}
