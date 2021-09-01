#include <stdio.h>

int main()
{
    int mul[10];
    int n;

    printf("------------Multiplication Table of Numbering------------\n");
    printf("\n");

    printf("Enter the value of numbering table: ");
    scanf("%d", &n);

    printf("\n");

    for(int i=0; i<10; i++)
    {
        mul[i] = n*(i+1);
        printf("The Multiplication of %dx%d = %d\n",n, i+1, mul[i]);
    }
    printf("\n");
    return 0;
}
