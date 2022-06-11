//Name- Priyanshu Mallick, Roll No- 13
/**
Q14. Write a program that will check a number is palindrome or not.
Example: 12321 is a palindrome, but 12345 is not
**/
#include <stdio.h>
int main()
{
    int n, rev=0,s;
    printf("Enter a number\n");
    scanf("%d",&n);
    int t = n;
    while(n!=0)
    {
        s = n%10;
        rev = rev*10+s;
        n = n / 10;
    }
    if (t=s)
    {
        printf(" This is a Palendrum Number\n");
    }
    else
    {
        printf("Not a Palendrum Number\n");
    }

    return 0;
}



