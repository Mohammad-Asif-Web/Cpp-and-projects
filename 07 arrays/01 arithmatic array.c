#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr = &arr[0];
    ptr = ptr + 2;

    if(ptr == &arr[2])
    {
        printf("the points to the same location");
    }
    else
    {
        printf("this do not points to the same location");
    }
}
