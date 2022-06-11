//Name- Priyanshu Mallick, Roll No- 13
/**
Q11.Write a program that will reverse a number inputted by the user.
Example: If number is 3456 then its reverse should be 6543
**/
#include <stdio.h>
int main()
{
    int n, rev=0,s;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        s = n%10;
        rev = rev*10+s;
        n = n / 10;
    }
    printf("The Sum of the digits is: %d\n",rev);
    return 0;
}



