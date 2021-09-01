#include <stdio.h>

void morning();
void afternoon();
void night();

int main()
{
    int a;

    printf("the function initialization starts from here\n");

    morning();
    afternoon();
    night();

    printf("the function finished here");

    return 0;
}

void morning()
{
    printf("this is good morning\n");
}
void afternoon()
{
    printf("this is good afternoon\n");
}
void night()
{
    printf("this is good night\n");
}
