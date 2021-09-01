#include <stdio.h>

int main()
{
    int p;
    p = 30;
    int *ptr = &p;

    printf("the address of variable is %u\n", &p);

    printf("the value of this variable is %d", *ptr);

    return 0;
}
