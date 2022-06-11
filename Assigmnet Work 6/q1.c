/**
Name- Priayanshu Mallick, Roll No - 13
Q1. WAP using function that will swap two numbers.
The function shoud pass pointer argumens.
**/
#include<stdio.h>
void swap(int *, int *);
int main()
{
    int x, y;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("A = %d, B = %d",*x,*y);
}
