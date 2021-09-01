#include <stdio.h>

int main()
{
    int i;
    i = 30;
    int *j = &i;

    printf("the value of i is %d\n", i);    //declares the integer value of i

    printf("the value of i is %d\n", *j);   //*j stores the i address, so it gives integer i value

    printf("the address of i is %u\n", &i);    //%u uses for &i, it gives the address of &i
                                                //&i is used for memory address of i.

    printf("the address of i is %u\n", j);  //*j is declared as pointer, and it stores the value of i.
                                            //only j is called by %u is the memory address of only i.

    printf("the address of j is %u\n", &j); //&j is give the memory address of just j.

    printf("the value of i is %d\n", i);

    return 0;
}
