/**
Name- PRIYANSHU MALLICK, Roll No- 13
Q9.Write a program to delete an element from a certain position in an array of n numbers
after taking suitable user inputs.
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
    printf("Enter the element index want to delete! ");
    scanf("%d"&pos);
    i=pos;
    while(i<=n-1)
    {
        a[i]=a[i+1];
        i++;
    }
    n--;
    printf("Successfully Deleted!\nNow the array become {");
    for (i = 0; i < n; i++)
    {
        printf("%d,",a[i]);
    }
    printf("}\n");
    return 0;
}