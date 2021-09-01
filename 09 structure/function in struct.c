#include <stdio.h>
#include <string.h>

 struct office
{
    int code;
    float salary;
    char name[200];
};

void show(struct office emp)
{
    printf("\n");
    printf("the code of employee is: %d\n", emp.code);
    printf("the salary of employee is: %0.2f\n", emp.salary);
    printf("the name of employee is: %s", emp.name);
    printf("\n");
}

int main ()
{
    printf("---------using show function in structure------------");

    struct office a;

    a.code = 101;
    a.salary = 3444.50;
    strcpy(a.name, "Muhammad asif");
    printf("\n");

    show(a);


    return 0;
}
