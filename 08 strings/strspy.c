#include <stdio.h>
#include <string.h>

int main()
{
    char *first = "Muhammad Asif";
    char second[30];

    strcpy(second, first);  // strcpy is copy the first string to second
    printf("now the second string is %s", second);
}
