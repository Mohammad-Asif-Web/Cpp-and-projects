#include <stdio.h>
#include <string.h>

int main()
{
    char st1[30] = "Hello";
    char st2[20] = "Asif";

    int comp = strcmp(st1, st2);
    //strcom compares the ascii value of two strings...

    printf("the compare betwn st1 and st2 is %d", comp);
}
