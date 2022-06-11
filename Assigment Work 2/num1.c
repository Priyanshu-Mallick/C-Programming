#include<stdio.h>
int main()
{
    float num;
    int s, finalNum, t;
    printf("Enter the number: ");
    scanf("%f", &num);
    if(num>0)
    {
        t = num*10;
        s = t%10;
        if(s>=5)
        {
            finalNum = num;
            finalNum++;
        }
        else
        {
            finalNum = num;
        }
        printf("\nWhole number after rounding off the given real number = %d", finalNum);
    }
    else if(num<0)
    {
        num = -(num);
        t = num*10;
        s = t%10;
        if(s>=5)
        {
            finalNum = num;
            finalNum--;
        }
        else
        {
            finalNum = num;
        }
        printf("\nWhole number after rounding off the given real number = -%d", finalNum);
    }
    else
    {
        printf("\nThe given number is 0");
    }
    getch();
    return 0;
}
