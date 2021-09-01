#include<stdio.h>
#include<string.h>

typedef struct date{
    int date;
    int month;
    int year;
}date;

int dateCmp(date d1, date d2){
    // Make decision on the basis of Year comparison
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }

    // Make decision on the basis of Month comparison
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month) {
        return -1;
    }

    // Make decision on the basis of Date comparison
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date) {
        return -1;
    }
    return 0;
}
int main(){
    date a1 = {5, 10, 2020};
    date a2 = {10, 11, 2021};
    printf("the d1 date is: %d/%d/%d\n", a1.date, a1.month, a1.year);
    printf("the d2 date is: %d/%d/%d\n\n", a2.date, a2.month, a2.year);

    int result = dateCmp(a1, a2);
    printf("Date Comparison function returns: %d\n", result);

    return 0;
}
