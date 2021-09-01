#include <stdio.h>

int main()
{
    int i;

    printf("Enter the value of i: ");
    scanf("%d", &i);
    printf("\n");

    int *ptr = &i;
    int **ptr_ptr = &ptr;

    printf("the value of ptr to ptr is %d\n", **ptr_ptr);
    printf("the value of ptr is %d\n", *ptr);
    printf("\n");
    printf("the address of ptr to ptr is %u\n", &ptr_ptr);
    printf("the address of ptr is %u\n", &ptr);
    printf("\n");



    return 0;
}
