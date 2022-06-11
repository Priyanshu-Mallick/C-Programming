//Name - Priyanshu Mallick, Roll No- 13
/**
Q4. Write a program that takes input as a year and check the inputted year is leap year or
not. Note: A year is a leap year if it is divisible by 4 but not divisible by 100 or only
divisible by 400(Example: 1900, 2100 are not leap year, but 1600, 2000 are leap years).
**/
#include<stdio.h>
int main()
{
    int y;
    printf("Enter a year\n");
    scanf("%d",&y);
    if (y%100==0)
    {
        if (y%4==0)
        {
            printf("This is a leap year !\n");
        }
        else
        {
            printf("This is not a leap year !\n");
        }
    }
    else
    {
        if (y%4==0)
        {
            printf("This is a leap year !\n");
        }
        else
        {
            printf("This is not a leap year !\n");
        }
    }
    return 0;
}
