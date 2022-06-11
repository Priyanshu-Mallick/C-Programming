/**
Name- PRIYANSHU MALLICK, Roll No- 13
Q3.Write a program that will input n numbers and display the minimum and maximum.
**/
#include<stdio.h>

int main()
{
    int arr[100];
    int i, max, min, n;

    printf("Enter size of the array: \n");
    scanf("%d", &n);

    printf("Enter elements in the array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Assume first element as maximum and minimum
    max = arr[0];
    min = arr[0];

    for(i=1; i<n; i++)
    {
        // If current element is greater than max
        if(arr[i] > max)
        {
            max = arr[i];
        }
        // If current element is smaller than min 
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    return 0;
}