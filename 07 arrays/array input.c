#include <stdio.h>

int main()
{
    int arr[4];

   /* arr[0] = 49;
    arr[1] = 90;
    arr[2] = 20;
    arr[3] = 60;*/

    printf("Enter the number of student 1 marks:");
    scanf("%d", &arr[0]);
    printf("Enter the number of student 2 marks:");
    scanf("%d", &arr[1]);
    printf("Enter the number of student 3 marks:");
    scanf("%d", &arr[2]);
    printf("Enter the number of student 4 marks:");
    scanf("%d", &arr[3]);

    printf("the marks of students are %d %d %d and %d", arr[0], arr[1], arr[2], arr[3]);

    return 0;
}
