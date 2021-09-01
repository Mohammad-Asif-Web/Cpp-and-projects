#include <stdio.h>

int main(){

    int mark;

    printf("Enter your rating number from (1-5)\n");
    scanf("%d", &mark);

    switch(mark){
        case c1= 90-100:
            printf("your rating is A+");
            break;
        case 80-89:
            printf("your rating is A");
            break;
        case 3:
            printf("your rating is 3");
            break;
        case 4:
            printf("your rating is 4");
            break;
        case 5:
            printf("your rating is 5");
            break;
        default:
            printf("Invalid rating");
            break;
    }
    return 0;
}
