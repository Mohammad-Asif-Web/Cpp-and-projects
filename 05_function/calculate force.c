#include <stdio.h>

float force(float mass);

int main()
{
    int m;

    printf("Enter the number of mass: ");
    scanf("%d", &m);

    printf("the result of force is %.2f", force(m));

    return 0;
}
float force(float mass)
{
    float result;

    result = mass * 9.8;

    return result;
}
