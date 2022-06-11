/**
Name- PRIYANSHU MALLICK, Roll No- 13
Q5.Write a program to input n elements into an array and then copy the elements to another
array after adding 1 to each of the elements.
**/
#include <stdio.h>

int main()
{
    int a[10], b[10], i, n;
    char c;
    printf("Enter the number of element you want to enter in array 1:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b[i] = a[i] + 1;
    }
    printf("The array 2 is: {");
    for (i = 0; i < n; i++)
    {
        printf("%d,", b[i]);
    }
    printf("}\n");
    return 0;
}