#include<stdio.h>

//this function calculation for correct calender days of any months of year
int firstDayOfYear(int year){
    int day = (year*365 + ((year-1) / 4) - ((year-1) / 100) + ((year-1) / 400)) % 7;
    return day;
}

int main(){

    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysOfMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, j, Days, week = 0, space = 0, year;

    printf("Enter your Favorite year: \n");
    scanf("%d", &year);
    system("cls");
    printf("_________________Welcome to %d________________", year);

    //code for leap year
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        daysOfMonth[1] = 29;
    }

    // For the First day of any year
    week = firstDayOfYear(year);
    for(i = 0; i < 12; i++)
    {
        printf("\n\n\n-------------------%s--------------------\n", month[i]);
        printf("\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");

        for (space = 1; space <=week; space++)
        {
            printf("      ");
        }

        Days = daysOfMonth[i];
        for (j = 1; j <= Days; j++)
        {
            printf("%6d", j);
            week++;
            if(week > 6){
                week = 0;
                printf("\n");
            }
        }


    }
    printf("\n\n\nMade By Muhammad asif (Web Developer)\n");
    printf("Gmail: alexasifhhossain@gmail.com\n");
    printf("linkedin: mohammadasif10\n");
    printf("Institute of Science & Technology\n\n\n");



    return 0;
}
