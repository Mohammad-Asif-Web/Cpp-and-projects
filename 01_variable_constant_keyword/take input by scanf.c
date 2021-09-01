#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);

    printf("Enter the value of c\n");
    scanf("%d", &c);

    printf("the value of a is %d\n", a);
    printf("the value of b is %d\n", b);
    printf("the value of c is %d\n\n", c);

    printf("the multiplying of a and b is %d\n", a*b);
    printf("the add of b and c is %d\n", b + c);
    printf("the substraction of c and a is %d\n", c - a);
    printf("the division of c and a %d\n", c / a);


    return 0;
}
