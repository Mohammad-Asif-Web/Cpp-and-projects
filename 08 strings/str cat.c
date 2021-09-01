#include <stdio.h>
#include <string.h>

int main()
{
    char st1[30] = "Hello ";
    char st2[20] = "Muhammad Asif";

    strcat(st1, st2);
    //strcat add the multiple string to one function..

    printf("%s", st1);
}
