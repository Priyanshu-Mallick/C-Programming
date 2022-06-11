/**
Name- PRIYANSHU MALLICK, Roll No- 13
Q2.Write a program that will input n numbers and display the minimum.
**/
#include<stdio.h>

int main()
{
    int arr[10],i,n,l=0;
    printf("Enter how many numbers you are going to enter:\n");
    scanf("%d",&n);
    
    printf("Enter some numbers:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i = 1; i < n; i++)
        if (arr[i] < arr[l])
        l = i;

    printf("The minimum is %d.\n", arr[l]);
    return 0;
}