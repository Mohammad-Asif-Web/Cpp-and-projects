#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter your natural number: ");
    scanf("%d", &n);
    printf("Enter your increment number: ");
    scanf("%d", &i);

    do{

        printf("%d\n", n);
        n++;
    }while(n<=i);

    printf("Enter your natural number: ");
    scanf("%d", &n);
    printf("Enter your decrement number: ");
    scanf("%d", &i);

    do{

        printf("%d\n", n);
        n--;
    }while(n>=i);

    return 0;
}
