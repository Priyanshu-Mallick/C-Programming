//Name- Priyanshu Mallick, Roll No- 13
/**
Q3. Write a program that will print the numbers between m and n, where the value of m and n
will be inputted by the user.
**/
#include <stdio.h>
int main()
{
    int m,n,i;
    printf("Enter the value of m and n:\n");
    scanf("%d%d",&m,&n);
    for (i=m;i<=n;i++)
    {
        printf("%d, ",i);
    }
    return 0;
}

