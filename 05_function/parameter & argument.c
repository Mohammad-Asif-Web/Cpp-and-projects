#include <stdio.h>

int sum(int a, int b);  //  Function Decalaration

int main()
{
    int d;

    sum(10, 5); //  10, 5 are the actual value & its called Arguments

    d = sum(10, 5);

    printf("the value is sum is %d", d);


    return 0;
}

int sum(int a, int b)   //  int a, int b are placeholder for function & Parameters
{
    int result;

    result = a + b;

    return result;  //  this function returns integer as an output to main function
}
