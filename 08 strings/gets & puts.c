#include <stdio.h>

int main()
{
    char s[30];

    printf("Enter your name: ");
    gets(s);

    printf("mobile no: ");
    gets(s);
    puts(s);
    //printf("your name is %s", s);

    return 0;
}
