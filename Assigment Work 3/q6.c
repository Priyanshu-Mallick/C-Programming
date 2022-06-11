//Name- Priyanshu Mallick, Roll No- 13
/**
Q6. Write a program to find the factorial of a number, where the number will be inputted by
the user.
**/
#include <stdio.h>
int main()
{
    int n,i,mul=1;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        mul = mul * i;
    }
     printf("%d! = %d\n",n,mul);
    return 0;
}



