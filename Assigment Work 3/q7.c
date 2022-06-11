//Name- Priyanshu Mallick, Roll No- 13
//Q7. Write a program that will read two integers and compute the GCD.
#include <stdio.h>
int main()
{
    int num1, num2, r1, r2, t;
    printf("Enter any two numbers to find LCM:\n");
    scanf("%d%d",&num1,&num2);
    r1=num1;
    r2=num2;
    while(r2!=0)
    {
        t = r1 % r2;
        r1 = r2;
        r2 = t;
    }
    printf("GCD of %d and %d = %d", num1, num2, r1);
    return 0;
}
