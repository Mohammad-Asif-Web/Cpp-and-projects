#include <stdio.h>

int main()
{

    int income;
    float tax;

    printf("Enter you Monthly Income\n");
    scanf("%d", &income);

    if(income>=250000 && income<=500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if(income>500000 && income<=1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    if(income>1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }



    printf("you have to pay %f monthly tax", tax);

    return 0;
}
