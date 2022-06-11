#include<stdio.h>
int main()
{
    int x;
    for (x =-1; x<=8;x++)
    {
        if(x<5)
            continue;
        printf("India\n");
    }
    printf("Out of the loop\n");
    return 0;
}
