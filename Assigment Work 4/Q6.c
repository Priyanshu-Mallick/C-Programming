
/**
Name- PRIYANSHU MALLICK, Roll No- 13
Q6.Write a program to input an array of n elements and apply linear search algorithm to
search an element. Print the position of the element if it is found, otherwise display the
message the element not found.
**/
#include<stdio.h>

int main()
{
    int a[100],i,n,key;
    printf("Enter size of the array : \n");
    scanf("%d",&n);
    printf("Enter Elements in array : \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element that to search! : \n");
    scanf("%d",&key);

    for ( i = 0; i < n; i++)
    {
        // Checking wheather the inputed number is in array or not
        if (a[i]==key)
        {
            printf("Element found at index %d\n",i);
            break;
        }
    }
    if (i=n)
    {
        printf("The element is not found\n");
    }

    return 0;
}
