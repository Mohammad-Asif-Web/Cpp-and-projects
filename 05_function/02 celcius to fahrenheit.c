#include <stdio.h>

float faren(float faren);   // Function Declareation

int main()
{
    int c;

    printf("Enter the number of celsius: ");
    scanf("%d", &c);
    printf("\n");

    printf("the result of fahrenheit is %.2f", faren(c));    // Function Call
    printf("\n");

    return 0;
}
float faren(float cel)  // Function Definition
{
    float result;
    result = (cel * 1.8) + 32;

    return result;
}

