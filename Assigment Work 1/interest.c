#include<stdio.h>
int main()
{
    float p, r, i;
    int t;
    printf("Enter principal amount, time and rate of interest respectively:\n");
    scanf("%f%d%f",&p,&t,&r);
    i = (p * t * r)/100;
    printf("Your simple interest is: %7.2f rupees only\n",i);
    return 0;
}
