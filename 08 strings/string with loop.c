#include <stdio.h>

int main()
{
    char str[] = {"harry"};
    char *ptr = str;

    while(*ptr!='\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
}
