/**
Name- PRIYANSHU MALLICK, Roll No- 13
Q8.Write a program to insert an element at a certain position in an array of n numbers after
taking suitable user inputs.
**/
#include<stdio.h>

int main()
{
    int a[100], i, n, key, pos;
    printf("Enter the number of elements in array : \n");
    scanf("%d", &n);
    
    printf("Enter Elements in array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element that to insert! and \nthe index where u want to insert that element: \n");
    scanf("%d%d",&key,&pos);
    
    i=n-1;
    while(i>=pos)
    {
        a[i+1]=a[i];
        i--;
    }
    a[pos]=key;
    n++;
    printf("Successfully Inserted!\nNow the array become {");
    for (i = 0; i < n; i++)
    {
        printf("%d,",a[i]);
    }
    printf("}\n");
    return 0;
}