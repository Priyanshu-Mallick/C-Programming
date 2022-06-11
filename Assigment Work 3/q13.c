//Name- Priyanshu Mallick, Roll No- 13
//Q.13 Write a program that will check an inputted number is prime or composite.
#include <stdio.h>
int main()
{
    int n, a=1,c=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(a<=n)
    {
        if(n%a==0)
        {
            c++;
            a++;
        }
        else
        {
            a++;
        }
    }
    if(c==2)
    {
        printf("Prime Number\n");
    }
    else
    {
        printf("Composite Number\n");
    }

    return 0;
}



