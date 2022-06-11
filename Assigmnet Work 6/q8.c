/**
Name- Priayanshu Mallick, Roll No - 13
Q8. WAP to to input a matrix and display it by using pointers.
The program should have two user defined functions which pass
pointer argument for matrix.
**/
#include<stdio.h>
#include<stdlib.h>
void input(int m, int n, int **a);
void display(int m, int n, int **a);
int main()
{
    int m, n;
    printf("Enter numebr of rows and column:\n");
    scanf("%d%d",&m,&n);
    int **a;
    a = (int**)malloc(m*sizeof(int*));
    for (int i = 0; i < m; i++)
    {
        a[i]=(int*)malloc(n*sizeof(int));
    }
    input(m, n, a);
    display(m, n, a);    
    for (int i = 0; i < m; i++)
    {
        free(a[i]);
    }
    free(a);
    return 0;
}
void input(int m, int n, int **a)
{
    printf("Enter matrix elements:\n");
    int i,j;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; i < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void display(int m, int n, int **a)
{
    printf("matrix is:\n");
    int i,j;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; i < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}