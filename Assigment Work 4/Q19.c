/**
Name- PRIYANSHU MALLICK, Roll No- 13
Q14.Write a program to input a matrix and transpose it.
**/
#include <stdio.h>
int main()
{
    int arr[20][20], tr[20][20], i, j, m, n;
    printf("\nEnter the Number of Rows and Coloumns : \n");
    scanf("%d%d", &m, &n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr[i][j]);
            tr[j][i] = arr[i][j];
        }
    }
    printf("The entered matrix is: \n");
    for (i = 0; i < m; i++)
    {
       
        for (j = 0; j < n; j++)
        {
            printf("%d ",arr[i][j]);
        }
         printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j]!=arr[j][i])
            {
                printf("This is a not symetrical matrix\n");
                return 0;
            }
        }
    }
    printf("This is a symentrical matrix\n");
    return 0;
}