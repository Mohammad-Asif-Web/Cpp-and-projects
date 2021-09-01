#include <stdio.h>
#include <string.h>

struct employ
{
    int code;
    char name[20];
    float salary;
};

int main()
{
    struct employ e1;
        e1.code = 1540;
        strcpy(e1.name, "Muhammad Asif");
        e1.salary = 25000;


    printf("the Employer code is %d\n", e1.code);
    printf("the Employer name is %s\n", e1.name);
    printf("the Employer salary is %0.2f", e1.salary);
    printf("\n\n");

    return 0;
}
