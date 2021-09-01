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
    struct office employ = {100, 3444.50, "Asif"};

    printf("your code is %d\n", employ.code);
    printf("your salary is %0.2f\n", employ.salary);
    printf("your name is %s", employ.name);
    printf("\n");

    return 0;
}
