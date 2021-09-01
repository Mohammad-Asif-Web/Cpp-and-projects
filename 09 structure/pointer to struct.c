#include <stdio.h>
#include <string.h>

struct office
{
    int code;
    float salary;
    char name[200];
};

int main ()
{
    struct office a;
    struct office *ptr;
    ptr = &a;

    (*ptr).code = 101;
    printf("ptr value is %d\n", (*ptr).code);
    printf("%d\n", a.code);


    return 0;
}
