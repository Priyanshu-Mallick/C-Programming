#include <stdio.h>

int main()
{
    int i, j, nr, nc, max, min, arr[10][10];
    printf("Enter number of rows of matrix:\n");
    scanf("%d", &nr);
    printf("Enter number of column of matrix:\n");
    scanf("%d", &nc);
    printf("Enter your matrix:\n");
    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Your matirx is:\n");
    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    max = arr[0][0];
    min = arr[0][0];
    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            if(arr[i][j]>max)
            {
                max = arr[i][j];
            }
            if (arr[i][j]<min)
            {
                min = arr[i][j];
            }
        }
    }
    printf("The maximum of the given matrix is %d\n",max);
    printf("The minimum of the given matrix is %d\n",min);
    return 0;
}