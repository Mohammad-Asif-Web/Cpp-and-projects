#include<stdio.h>
#include<stdlib.h>

void main(){

    float x, y;
    char ch, name[20];

    system("cls");
    printf("\t\t---------WELCOME TO DIGITAL ATM SERVICE---------\n\n");
    printf("\t\tEnter Your Account Name: ");
    gets(name);

    system("cls");
    printf("\t\t------------WELCOME TO YOUR ACCOUNT %s-------------\n\n", name);
    printf("\t\tEnter Your Initial Amount: ");
    scanf("\t\t%f", &x);

    void sub_main()
    {
        
        system("cls");
        printf("\t\tCHOOSE YOUR OPTIONS-->\n\n");
        printf("\t\tc for CREDIT\n");
        printf("\t\td for DEBIT\n");
        printf("\t\tb for BALANCE\n");
        printf("\t\tu for DEVELOPER\n");
        scanf("\n%c", &ch);
    }

    sub_main();

    switch (ch)
    {
    case 'c':
        system("cls");
        printf("\nEnter Your CREDIT Amount: ");
        scanf("%f", &y);
        x = x+y;
        printf("your updated amount is %0.2f", x);

        printf("\n\n\t\t------PRESS ANY KEY TO MAIN MENU-------");
        getch();
        break;

    case 'd':
        system("cls");
        printf("\nEnter Your DEBIT Amount: ");
        scanf("%f", &y);
        if(x>=y){
            x = x - y;
            printf("your updated amount is %0.2f", x);
        }
        else{
            printf("Insufficient Balance In Your Account");
        }

        printf("\n\n\t\t------PRESS ANY KEY TO MAIN MENU-------");
        getch();
        break;

    case 'b':
        system("cls");
        printf("\nAccount name: %s\n", name);
        printf("Amount in your Account is %0.2f\n\n", x);
        printf("*****Thanks for Connecting us*****");

        printf("\n\n\t\t------PRESS ANY KEY TO MAIN MENU-------");
        getch();
        
        break;

    case 'u':
        system("cls");
        printf("\nAuthor: Muhammad Asif\n");
        printf("Professional Front-End Engineer\n");
        printf("alexasifhhossain@gmail.com\n");
        printf("Dhaka, Bangladesh");
        printf("\n\n\t\t------PRESS ANY KEY TO MAIN MENU-------");
        getch();
        
        break;

    default:

        printf("\nChoose Other Options\n\n");

        break;
    }


}
