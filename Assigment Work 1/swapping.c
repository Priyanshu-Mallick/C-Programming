#include<stdio.h>
int main()
{
    int a = 5, b=7, t;
    printf("Before swapping the value 1 was: %d, and value 2 was: %d\n",a,b);
    t = a;
    a = b;
    b = t;
    printf("After swapping the value 1 was: %d, and value 2 was: %d\n",a,b);
    return 0;
}
