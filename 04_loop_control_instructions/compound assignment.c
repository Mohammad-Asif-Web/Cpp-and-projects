#include <stdio.h>

int main()
{

    int num;

    printf("Enter the value of Number\n");
    scanf("%d", &num);

    num+=1;
    printf("the += operator value is %d\n", num);

     num-=3;
    printf("the -= operator value is %d\n", num);

     num*=2;
    printf("the *= operator value is %d\n", num);

     num/=2;
    printf("the /= operator value is %d\n", num);

     num%=2;
    printf("the %= operator value is %d", num);


    return 0;
}
