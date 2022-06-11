//Name - Priyanshu Mallick, Roll No- 13
//Q1. Write a program to input a number and check whether it is even or odd.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("This is an even number\n");
    }
    else
    {
        printf("This is an odd number\n");
    }
    return 0;
}
