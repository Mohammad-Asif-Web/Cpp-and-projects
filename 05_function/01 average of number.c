#include <stdio.h>

float average();

int main()
{
    float result;

    result = average()/3;

    printf("the average of three number is %f", result);

    return 0;
}

float average(int one, int two, int three, int sum)
{
    printf("Enter your first number:\n");
    scanf("%d", &one);
    printf("Enter your second number:\n");
    scanf("%d", &two);
    printf("Enter your third number:\n");
    scanf("%d", &three);

    sum = one + two + three;

    return sum;
}
