/**
Name- PRIYANSHU MALLICK, Roll No- 13
Q12.Write a program to input two matrices and do the matrix addition after checking suitable
condition.
**/
#include <stdio.h>

int main()
{
    int nr1, nr2, nc1, nc2, i, j, first[10][10], second[10][10], sum[10][10];

    printf("Enter the number of rows and columns of matrix 1:\n");
    scanf("%d%d", &nr1, &nc1);
    printf("Enter the number of rows and columns of matrix 2:\n");
    scanf("%d%d", &nr2, &nc2);

    if (nr1 != nr2 || nc1 != nc2)
    {
        printf("The Matrix addition is not possible !\nEnter valid input!!\n");
    }
    else
    {
        printf("Enter the elements of first matrix\n");
        for (i = 0; i < nr1; i++)
        {
            for (j = 0; j < nc1; j++)
            {
                printf("element - [%d],[%d] : ", i, j);
                scanf("%d", &first[i][j]);
            }
        }
        printf("Enter the elements of second matrix\n");
        for (i = 0; i < nr2; i++)
        {
            for (j = 0; j < nc2; j++)
            {
                printf("element - [%d],[%d] : ", i, j);
                scanf("%d", &second[i][j]);
            }
        }
        printf("Sum of entered matrices:-\n");

        for (i = 0; i < nr1; i++)
        {
            for (j = 0; j < nc1; j++)
            {
                sum[i][j] = first[i][j] + second[i][j];
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}