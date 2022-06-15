#include <stdio.h>

//Formula: area = length * Breadth

int main()
{
    int length, breadth, area;

    area = length * breadth;

   printf("Enter the number of length\n");
   scanf("%d", &length);

   printf("Enter the number of breadth\n");
   scanf("%d", &breadth);

    printf("the area of rectangle is %d", length*breadth);

    return 0;
}
