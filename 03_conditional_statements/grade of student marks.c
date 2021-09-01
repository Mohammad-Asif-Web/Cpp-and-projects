#include <stdio.h>

int main()
{
    int mark;

    printf("Enter the Student Mark: ");
    scanf("%d", &mark);

    if(mark>=90 && mark<=100)
    {
        printf("you got A+");
    }
    if(mark>=80 && mark<90)
    {
        printf("you got A");
    }
    if(mark>=70 && mark<80)
    {
        printf("you got B");
    }
    if(mark>=60 && mark<70)
    {
        printf("you got C");
    }
    if(mark>=50 && mark<60)
    {
        printf("you got D");
    }
    if(mark<50)
    {
        printf("you are fail");
    }

    return 0;
}
