#include<stdio.h>
int main()
{
    int h, m, s = 3665;
    h = s / 3600;
    m = (s % 3600)/60;
    s = (s % 3600)%60;
    printf("%d Hours %d minutes %d seconds\n",h,m,s);
    return 0;
}
