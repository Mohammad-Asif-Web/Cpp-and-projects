#include <stdio.h>

// Formula: (0°C × 9/5) + 32

int main()
{
    int cel, add;
    float temp;
    temp = 1.8;
    add = 32;

    printf("Enter the number of Celsius\n");
    scanf("%d", &cel);

    printf("the Fahrenheit is %f", (cel*temp)+add);


    return 0;
}
