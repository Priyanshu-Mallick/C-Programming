#include<stdio.h>

int main()
{
    int i, j , nr, nc, arr[10][10];
    printf("Enter number of rows of matrix:\n");
    scanf("%d",&nr);
    printf("Enter number of column of matrix:\n");
    scanf("%d",&nc);
    printf("Enter your matrix:\n");
    for ( i = 0; i < nr; i++)
    {
        for ( j = 0; j < nc; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your matirx is:\n");
    for ( i = 0; i < nr; i++)
    {
        for ( j = 0; j < nc; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("After Modification your matrix is:\n");
    for ( i = 0; i < nr; i++)
    {
        for ( j = 0; j < nc; j++)
        {
            if (i==j)
            {
                arr[i][j]=0;
            }
            else
            {
                arr[i][j]=1;
            }
        }
    }
    for ( i = 0; i < nr; i++)
    {
        for ( j = 0; j < nc; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}