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
    struct office employ[10];

    printf("Enter employer name: ");
    gets(employ[0].name);
    printf("Enter employ code: ");
    scanf("%d", &employ[0].code);
    printf("Enter the amount of salary: ");
    scanf("%f", &employ[0].salary);

    printf("\n");

    printf("Enter employer name: ");
    gets(employ[1].name);
    puts(employ[1].name);
    printf("Enter employ code: ");
    scanf("%d", &employ[1].code);
    printf("Enter the amount of salary: ");
    scanf("%f", &employ[1].salary);


    return 0;
}
