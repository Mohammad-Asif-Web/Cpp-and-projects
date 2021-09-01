#include <stdio.h>

int main(){

    char word;

    printf("Enter your character\n");
    scanf("%c", &word);

    if(word>=65 && word<=90){
        printf("this is Uppercase character");
    }
    else{
        printf("this is Lowercase character");
    }

return 0;
}
