#include <stdio.h>

/*List of Prime Numbers Up to 100. 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37,
41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97*/

int main()
{
    int num, i, prime;
    prime = 1;

    printf("Enter the Number: ");
    scanf("%d", &num);

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            prime = 0;
            break;
        }
    }
    if(prime==0)
    {
        printf("this is not prime number");
    }
    else
    {
        printf("this is prime number");
    }


    return 0;
}
