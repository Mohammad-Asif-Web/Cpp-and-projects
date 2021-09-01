#include <stdio.h>

int main()
{
    float x, y, z;
    x = 2;
    y = 3;
    z = 4;

    //  Priority        Operators
    //  1st             * / %
    //  2nd             + -
    //  3rd             =

    // *, / Follows left to right associativity in C programming.

    printf("the value of x * y / z is %f\n", x*y/z );
    printf("the value of x / y * z is %f\n\n", x/y*z);
    printf("the value of 3*x - 8*y is %f\n", 3*x - 8*y);
    printf("the value of 3*(x - 8*y) is %f\n\n", 3*(x - 8*y));
    printf("the value of 8*y / 3*x is %f\n", 8*y / 3*x);
    //  24/3*2  ->multiply by 8*y gives 24
    //  8*2     ->divided by 24/3 gives 8
    //  16      ->again multiply by 8*2 gives answer 16.

    return 0;
}
