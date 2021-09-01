#include <stdio.h>

int main()
{
    int i, j, k;
    int arr[2][3][4];

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; j<4; j++)
            {
                printf("the address of %d %d %d is %u\n", i, j, k, &arr[i][j][k]);
            }
        }
    }
}
