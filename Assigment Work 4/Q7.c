
/**
Name- PRIYANSHU MALLICK, Roll No- 13
Q7. Write a program to input an array of n elements and apply binary search algorithm to
search an element. Print the position of the element if it is found, otherwise display the
message the element not found.
**/
#include <stdio.h>

int main()
{
    int a[100], i, n, key, low, high, mid;
    printf("Enter size of the array : \n");
    scanf("%d", &n);
    
    printf("Enter Elements in array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element that to search! : \n");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    
    while (low <= high)
    {
        // Checking wheather the inputed number is in array or not
        mid = (low + high) / 2;
        if (a[mid] < key)
        {
            low = mid + 1;
        }
        else if (a[mid] > key)
        {
            high = mid - 1;
            mid = (low + high) / 2;
        }
        else
        {
            printf("The key is found at index %d\n", mid);
            break;
        }
    }
    if (i=n)
    {
        printf("The element is not found\n");
    }

    return 0;
}