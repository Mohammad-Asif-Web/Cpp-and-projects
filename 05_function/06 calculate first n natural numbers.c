#include <stdio.h>

int nat(int x);

int main()
{
    int n;

    printf("Enter the number you want to do sum: ");
    scanf("%d", &n);

    printf("the sum is %d", nat(n));

    return 0;
}

int nat(int x)
{
    return x+=1;
}
