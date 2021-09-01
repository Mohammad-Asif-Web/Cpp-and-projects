#include <stdio.h>

int main(){

    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    if(num<=12){
        printf("now you are a Kid\n");
        printf("you can not drive");
    }
    else if(num>=12 && num<=17){
        printf("now you are a Teen\n");
        printf("keep learning driving");
    }
    else if(num>=18 && num<=30){
        printf("now you are an adult\n");
        printf("you can drive");
    }
    else{
        printf("you are older than 30\n");
        printf("you must know drive");
    }




    return 0;

}
