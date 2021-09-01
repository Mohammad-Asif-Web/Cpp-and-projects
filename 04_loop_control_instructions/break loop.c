#include <stdio.h>

int main()
{
    int i;

    printf("Enter the value of i: ");
    scanf("%d", &i);

    for(i; i<15; i++)
    {
        printf("%d\n", i);
        if(i==7)
        {
            break;
        }
    }

    return 0;
}
