#include <stdio.h>

int main()
{
    int students, subjects;
    students = 3;
    subjects = 5;

    int marks[3][5];
    for(int i=0; i<students; i++)
    {
        for(int j=0; j<subjects; j++)
        {
            printf("Enter the no. of student %d in subjects %d: ", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\n");

    for(int i=0; i<students; i++)
    {
        for(int j=0; j<subjects; j++)
        {
            printf("the student %d in subjects %d marks is %d\n", i+1, j+1, marks[i][j]);

        }
    }
}
