#include <stdio.h>

int main(){

    int year;

    printf("Enter the year\n");
    scanf("%d", &year);

    if(year%4==0){
        printf("%d is the leap year", year);
    }
    else{
        printf("%d is not the leap year", year);
    }





}
