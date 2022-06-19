#include <stdio.h>
#include <iostream>

int main(){

    // making PIRAMID by stars taking equal sapces to both sides
    // int row, col, n;

    // printf("Enter the no. of n_");
    // scanf("%d", &n);
    // for(row = 1; row <= n; row++){
    //     for(col = 1; col <= n - row; col++){
    //         printf(" ");
    //     }
    //     for(col = 1; col <= 2 * row - 1; col++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // making PIRAMID BY character strings %c
    // int row, col, n;

    // printf("Enter the no. of n_");
    // scanf("%d", &n);
    // for(row = 1; row <= n; row++){
    //     for(col = 1; col <= n - row; col++){
    //         printf(" ");
    //     }
    //     for(col = 1; col <= 2*row -1; col++){
    //         printf("%c", col+64);
    //     }
    //     printf("\n");
    // }


    // making PIRAMID BY character in A, ABC, ABCDE Format
    // int row, col, n;

    // printf("Enter the no. of n_");
    // scanf("%d", &n);
    // for(row = 1; row <= n; row++){
    //     for(col = 1; col <= n - row; col++){
    //         printf(" ");
    //     }
    //     for(col = 1; col <= 2*row -1; col++){
    //         printf("%c", 'A' + col -1);
    //     }
    //     printf("\n");
    // }


    // making PIRAMID BY CHARACTER IN A, BB, CCC format
    int row, col, n;
    
    printf("Enter the no. of n_");
    scanf("%d", &n);
    for(row = 1; row <= n; row++){
        for(col = 1; col <= n - row; col++){
            printf(" ");
        }
        for(col = 1; col <= 2*row -1; col++){
            printf("%c", 'A' -1 + row);
        }
        printf("\n");
    }
}
