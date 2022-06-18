#include <stdio.h>
#include <math.h>
#include <iostream>


int main(){

    // print 1 to 10
    int a;
    for(a = 1; a <= 10; a++){
        printf("%d\n", a);
    }


    //print 10 to 1
    printf("this is reverse\n");
    for (a; a >= 1; a--){
        printf("%d\n", a);
    }


    // print odd number from 1 to 10
    int odd;
    for(odd = 1; odd < 10; odd++){
        if(odd % 2 != 0){
            printf("%d\n", odd);
        }
    }


    //counts how many 2 divides 100
    int x, cnt;
    x = 100;
    cnt = 0;
    while(x % 2 == 0)
    {
        x = x / 2;
        cnt++;
        printf("%d: x = %d\n", cnt, x);
    }


    // print odd numbers from 1 to 10
    int odd;
    for(odd = 1; odd < 10; odd++){
        if(odd % 2 == 0){
            continue; 
            // continue works like - where the condition is matched, it will skip those numbers. 
        }
        printf("%d\n", odd);
    }


    // prints only 1, 2, 3
    for(int i = 1; i < 10; i++){
        if (i > 3){
            break;
        }
        printf("%d\n", i);
    }


    // takes input untill the input is 0
    int a;
    while(scanf("%d", &a)){
        if(a == 0){
            break;
        }
        printf("the number is %d\n", a);
    }


    // loop into the loop and the sum all numbers
    int i,j, sum, n;
    sum = 0;
    n = 15;
    for(i = 0; i < n; i++){
        for(j = 0; j <= 1; j++){
            sum += j;
            printf("%d\n", sum);
        } 
    }


    // print the series 1+(1+2)+(1+2+3)+(1+2+3+4)
    int i,j,n;
    printf("no. of nth number_");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("(");

        for(j=1;j<=i; j++){
        printf("%d",j);
        if (j<i)
        printf("+");
        else if(j=i)
        printf(")");
      }
        if (i<n)
        printf("+");
        else if(i=n)
        printf(" ");
   }
}


