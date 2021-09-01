#include <stdio.h>

int main()
{
    int n,i, sum;

    printf("Enter the number you want to start sum: ");
    scanf("%d", &n);
    printf("How much do you want to run sum: ");
    scanf("%d", &i);
    printf("\n");

    while(n<=i)
    {
        sum+=n;
        n++;
    }

    printf("the number you entered total sum is %d\n",sum);

    return 0;
}
