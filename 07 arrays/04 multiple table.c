#include <stdio.h>

void table(int *mulTable, int num, int n)
{
    printf("the multiplication table of %d is:\n\n", num);
    for(int i=0; i<n; i++)
    {
        mulTable[i]= num*(i+1);
        printf("the multiplication of %dx%d = %d\n", num, i+1, mulTable[i]);
    }
    printf("----------------------------------------\n");
}

int main()
{
    int mulTable[3][10];
    table(mulTable[0], 2, 10);
    table(mulTable[1], 5, 10);
    table(mulTable[2], 8, 10);

    return 0;
}
