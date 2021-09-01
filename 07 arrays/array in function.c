#include <stdio.h>

void printArray(int *ptr, int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("the value of element %d is %d\n", i+1, *(ptr+i));
    }
}

int main()
{
    int arr[] = {1,39,9, 49,94,28,10};

    printArray(arr, 7);

    return 0;
}
