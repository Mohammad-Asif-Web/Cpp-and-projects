#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>                  //for linux user use this
#define CYCLE 60
//#define sleep(x) Sleep(x*1000)    //for windows user use this

int main()
{
    int hour, minute, second;
    int h = 0, m = 0, s = 0;
    printf("Enter hour: \n");
    scanf("%d", &hour);
    printf("Enter minute: \n");
    scanf("%d", &minute);
    printf("Enter second: \n");
    scanf("%d", &second);

    while(1)
    {
        printf("\n\n---------------DIGITAL STOP WATCH------------------\n\n");
        printf("                    %.2d:%.2d:%.2d\n                 \n", h, m, s);
        printf("###################################################");

        if(h == hour && m == minute && s == second)
        {
            break;
        }
        else
        {
            system("cls");
        }
        s++;
        sleep(1);
        if(s == CYCLE)
        {
            m++;
            s = 0;
        }
        if(m == CYCLE)
        {
            h++;
            m = 0;
        }

    }
    printf("\n\nMade By Muhammad asif (Web Developer)\n");
    printf("Gmail: alexasifhhossain@gmail.com\n");
    printf("linkedin: mohammadasif10\n");
    printf("Institute of Science & Technology\n\n");

    return 0;

}
