#include<stdio.h>

int main()
{
    int i , j, k;
    for (j=0;j<=5;j++)
    {
        for(k=j,i=0;i<=j,k>=0;i++,k--)
            printf("%d",k);
        printf("\n");
    }
    return 0;
}
