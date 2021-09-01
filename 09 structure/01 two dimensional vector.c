#include <stdio.h>
#include <string.h>

 struct vector
{
    int x2;
    float y2;
};


int main ()
{
    printf("---------------Creating Two Dimensional Vector---------------\n\n");
    struct vector v1, v2;

    v1.x2 = 30;
    v1.y2 = 50.2;
    printf("In vector 1 x2 is %d and y2 is %0.2f\n\n", v1.x2, v1.y2);

    v2.x2 = 73;
    v2.y2 = 24.93;
    printf("In vector 2 x2 is %d and y2 is %0.2f\n\n", v2.x2, v2.y2);


    return 0;
}
