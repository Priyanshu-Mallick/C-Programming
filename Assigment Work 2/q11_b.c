#include<stdio.h>
int main()
{
    int a =10, b=20;
    if (a || b++)
    printf("a= %d b= %d",a,b);

    return 0;
}
