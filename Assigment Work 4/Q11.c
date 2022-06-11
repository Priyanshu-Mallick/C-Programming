/**
Name- PRIYANSHU MALLICK, Roll No- 13
Q11.Write a program that will read a 2D array and display it in matrix format.
**/
#include <stdio.h>

void main()
{
    int arr[10][10], i, j, nr, nc;
    printf("Enter number of rows and column:\n");
    scanf("%d%d", &nr, &nc);
    printf("Input elements in the matrix :\n");
    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe matrix is : \n");
    for (i = 0; i < nr; i++)
    {     
        for (j = 0; j < nc; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
