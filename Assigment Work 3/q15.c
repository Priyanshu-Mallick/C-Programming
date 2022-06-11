//Name- Priyanshu Mallick, Roll No- 13
/**
Q15. Write a program that will print sum of the following series
Sum = 1+ 1/2! + 1/3! + …..1/n!
**/
#include <stdio.h>
int main()
{
    float n,i,mul=1,sum=0;
    printf("Enter the value of n:\n");
    scanf("%f",&n);
    for (i=1;i<=n;i++)
    {
        mul = mul * 1/i;
        sum = sum+mul;
    }
     printf("%.1f",sum);
    return 0;
}
