#include <stdio.h>

int main()
{

    int one, two, three, four;

    printf("Enter your first number: ");
    scanf("%d", &one);
    printf("Enter your second number: ");
    scanf("%d", &two);
    printf("Enter your third number: ");
    scanf("%d", &three);
    printf("Enter your fourth number: ");
    scanf("%d", &four);
    printf("\n");
    if(one>two)
    {
        printf("the first number %d is greatest number\n", one);
    }
    if(two>one && two>three)
    {
        printf("the second number %d is greatest number\n", two);
    }
    if(three>one && three>two && three>four)
    {
        printf("the third number %d is greatest number\n", three);
    }
    if(four>one && four>two && four>three)
    {
        printf("the fourth number %d is the greatest number\n", four);
    }

    return 0;
}
