#include <stdio.h>

int main()
{
    float physics, chemistry, math;
    float total;


    printf("Enter physics mark: ");
    scanf("%f", &physics);
    printf("Enter chemistry mark: ");
    scanf("%f", &chemistry);
    printf("Enter math mark: ");
    scanf("%f", &math);

    total = physics + chemistry + math/3;

    if(total<=40 || physics<=33 || chemistry<=33 || math<=33 )
    {
        printf("you got %f, you are fail", total);
    }
    else
    {
        printf("you are pass");
    }


    return 0;
}
