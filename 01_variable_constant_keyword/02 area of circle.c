#include <stdio.h>


// Formula: Area = pi * r * r

//volume of a cylinder Formula: V = pi * r * r *h

int main()
{
    int radius, height;
    float pi;
    pi = 3.1416;

    printf("Enter the value of radius\n");
    scanf("%d", &radius);

    printf("the area of circle is %f\n\n", pi*radius*radius);

    printf("What is the height?\n");
    scanf("%d", &height);

    printf("the volume of a cylinder is %f", pi * radius * radius * height);
    return 0;
}
