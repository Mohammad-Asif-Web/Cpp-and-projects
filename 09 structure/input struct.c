#include <stdio.h>
#include <string.h>

struct student
{
    char name[30], group[30];
    int roll;
    int fee;
};

int main()
{
    struct student a, b, c;

    printf("Enter the name of student: ");
    gets(a.name);
    puts(a.name);
    printf("Enter the roll number: ");
    scanf("%d", &a.roll);
    printf("Enter the student monthly fee: ");
    scanf("%d", &a.fee);
    printf("\n");


    printf("Enter the name of student: \n");
    gets(b.name);
    puts(b.name);
    printf("Enter the roll number: ");
    scanf("%d", &b.roll);
    printf("Enter the student monthly fee: ");
    scanf("%d", &b.fee);
    printf("\n");


    printf("Enter the name of student: ");
    gets(c.name);
    printf("Enter the roll number: ");
    scanf("%d", &c.roll);
    printf("Enter the student monthly fee: ");
    scanf("%d", &c.fee);


}
