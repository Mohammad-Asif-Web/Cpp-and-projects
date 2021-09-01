#include <stdio.h>

int main()
{
    int i, d;

    //for(initialize; test; increment/decrement)

    //initialize = setting a loop counter to an initial value ;
    //Test = checking a condition;
    //Increment = updating the loop counter;

    //incrementing the numbers
    printf("Enter the number for increment: ");
    scanf("%d", &i);

    for(i; i<10; i++)
    {
        printf("%d\n", i);
    }


    //decrementing the numbers
    printf("Enter the number for decrement: ");
    scanf("%d", &d);

    for(d; d>5; d--)
    {
        printf("%d\n", d);
    }

    return 0;
}
