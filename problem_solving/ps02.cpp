#include <stdio.h>
#include <math.h>

int main(){

    double area, pi, r;
    printf("Enter radius\n");
    scanf("%lf", &r);
    pi = acos(-1.);
    area = pi * r * r;
    printf("the area is %lf", area);
    return 0;

}