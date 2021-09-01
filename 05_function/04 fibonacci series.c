#include <stdio.h>

int fib(int x);

int main()
{
    int n;

    printf("Enter the number you want to see Fibonacci series: ");
    scanf("%d", &n);

    for(n; n>=0; n--)
    {

        printf("the Fibonacci number %d is %d\n", n, fib(n));
    }


    return 0;
}

int fib(int x)
{
    if(x==0)
    {
        return 0;
    }
    if(x==1)
    {
        return 1;
    }

    return fib(x-1) + fib(x-2);
}
