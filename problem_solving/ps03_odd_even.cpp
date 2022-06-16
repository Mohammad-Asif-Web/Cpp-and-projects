#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){
    int a;
    printf("Enter a postive number\n");
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("%d is Even number", a);
    }
    else{
        printf("%d is odd number", a);
    }
}