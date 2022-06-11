//Name- Priyanshu Mallick, Roll No- 13
/**
Q12.  Write a program to read a number, count the number of digits and display.
 Example: If input is 3405, then output should be 4
 **/
#include <stdio.h>
int main()
{
    int n, c=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        c=c+1;
        n = n / 10;
    }
    printf("The Sum of the digits is: %d\n",c);
    return 0;
}



