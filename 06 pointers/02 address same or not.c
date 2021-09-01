#include <stdio.h>

void func(int a)
{

    printf("the address of ab is %u\n", &a);
}

int main()
{
    int i=4;

    printf("the value of i is %d\n", i);

    func(i);
    printf("the address of a is %u", &i);
}
