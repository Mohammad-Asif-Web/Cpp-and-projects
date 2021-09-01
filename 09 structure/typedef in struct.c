#include <stdio.h>
#include <string.h>

//typedef is an alias, like a nick name, which is used for extra variables in data types.

typedef struct office   //declare typedef in structure as extra
{
    int code;
    float salary;
    char name[200];
}extra;                   //extra is typdef custom data type

void show(extra emp)
{
    printf("\n");
    printf("the code of employee is: %d\n", emp.code);
    printf("the salary of employee is: %0.2f\n", emp.salary);
    printf("the name of employee is: %s", emp.name);
    printf("\n");
}

int main ()
{
    printf("---------using typedef in structure------------");

    //struct office a;
    extra a;    //  struct office = extra. replacing struct in typedef custom data type

    a.code = 101;
    a.salary = 3444.50;
    strcpy(a.name, "Muhammad asif");
    printf("\n");

    show(a);


    return 0;
}
