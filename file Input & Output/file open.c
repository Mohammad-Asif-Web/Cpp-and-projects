#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    char car;
    ptr = fopen("simple.txt", "r"); // "r" for reading the file

    fscanf(ptr, "%d", &num );
    printf("the value of num is %d\n", num);
    fscanf(ptr, "%s", &car);
    printf("the word is %s", car);

    return 0;
}
