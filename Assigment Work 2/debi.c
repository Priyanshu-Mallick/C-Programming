#include<stdio.h>

int main()
{
    int num, s = 0, r = 0, p = 1;

    printf("Enter a decimal number\n");
    scanf("%d", &num);
    while(num!=0)
    {
        r   = num % 2;
        num = num / 2;
        s = s + (r * p);
        p = p * 10;
    }
    printf("\nBinary equivalent of %d is: %d\n", num, s);

    return 0;
}
