#include <stdio.h>

void sumavg(int a, int b, int *sum, float *avg);


int main()
{
    int x, y, sum;
    float avg;

    printf("Enter the value of a: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    printf("\n");

    sumavg(x, y, &sum, &avg);
    printf("the sum of a & b is %d\n", sum);
    printf("the average of a & b is %f\n", avg);
    printf("\n");

    return 0;
}
void sumavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum/2;
}
