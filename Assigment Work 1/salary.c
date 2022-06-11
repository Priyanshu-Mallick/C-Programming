#include<stdio.h>
int main()
{
    float bs, gs, da, hra;
    printf("Enter your salary:\n");
    scanf("%f",&bs);
    da = bs * 0.6;
    hra = bs * 0.15;
    gs =  bs + da + hra;
    printf("Your gross salary is: %7.2f rupees only\n",gs);
    return 0;
}
