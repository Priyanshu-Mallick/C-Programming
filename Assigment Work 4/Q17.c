#include <stdio.h>

int main()
{
    int i, j, nr, nc, temp, n1, n2, arr[10][10];
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
    printf("Enter two row numbers to be exchanged:\n");
    scanf("%d%d", &n1, &n2);
    for (i = 0; i < nr; i++)
    {
        temp = arr[n1 - 1][i];
        arr[n1 - 1][i] = arr[n2 - 1][i];
        arr[n2 - 1][i] = temp;
    }
    printf("After Modification your matrix is:\n");
    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}