#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){
    int year;
    printf("Enter your desire year ");
    scanf("%d", &year);
    if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)){
        printf("%d is a leap year", year);
    }
    else{
        printf("%d is not a leap year", year);
    }
    return 0;
}