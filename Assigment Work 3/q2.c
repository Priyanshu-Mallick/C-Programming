//Name- Priyanshu Mallick, Roll No- 13
/**
Q2. Write a program that will print the numbers from 1 to n, where the value of n will be
inputted by the user.
**/
#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter the value of n\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d, ",i);
    }
    return 0;
}

