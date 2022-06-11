#include<stdio.h>

int main()
{
    int i =1;
    while (i<=10)
    {
        if (i%5==0)
        {
            i++;
            continue;
        }
        printf("%d",i);
        i++;
    }
    printf("\nNow out of the loop\n");

    return 0;
}
