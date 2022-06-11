#include<stdio.h>
void main()
{
    int n, f=0, s=1, g=0, i=1;
    printf("Enter the number of digits of fibonacci series u have to print\n");
    scnaf("%d",&n);
    while(i<=n)
    {
        printf("%d, ",g);
        g=s+f;
        f=s;
        s=g;
        i++;
    }
    //return 0;
}

