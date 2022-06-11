//Name- Priyanshu Mallick, Roll No- 13
/**
Q10.Write a program that will read a number and compute sum of its digits.
Example: If input is 315, then output should be 9
**/
#include <stdio.h>
int main()
{
    int n, sum=0,s;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        s = n%10;
        sum = sum +s;
        n = n / 10;
    }
    printf("The Sum of the digits is: %d\n",sum);
    return 0;
}


