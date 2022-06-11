#include<stdio.h>
int main()
{
    float tf, tc;
    printf("Enter the temperature in fahrenheit:\n");
    scanf("%f",&tf);
    tc = (tf-32)*5/9;
    printf("%7.2f fahrenheit temperature is %7.2f celsius\n",tf,tc);
    return 0;
}
