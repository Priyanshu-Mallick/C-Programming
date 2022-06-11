//Name- Priyanshu Mallick, Roll No- 13
/**
Q5. Write a program to find the sum and average of numbers from 1 to n, where the value of n
will be inputted by the user.
**/
#include <stdio.h>
int main()
{
    int n,i,sum=0;
    float avg;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum = sum + i;
    }
     avg = sum/n;
     printf("%d\n",sum);
     printf("%.2f\n",avg);
    return 0;
}


