/**
Name- PRIYANSHU MALLICK, Roll No- 13
Q4.Write a program that will input n numbers, calculate the sum of all even numbers and all
odd numbers in the array and print the larger sum.
**/
#include<stdio.h>

int main()
{
    int n, i, a[10];
    int Even_Sum = 0, Odd_Sum = 0, max;

    printf("Enter the Size of an Array : \n");
    scanf("%d", &n);

    printf("Enter the Array Elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // taking initially maxmimum element is the initial value of array
    max = a[0];
    for (i = 0; i < n; i++)
    {
        // checking maximum element
        if (a[i] > max)
        {
            max = a[i];
        }
        // Checking even and odd eleemts and keep sum of those
        if (a[i] % 2 == 0)
        {
            Even_Sum = Even_Sum + a[i];
        }
        else
        {
            Odd_Sum = Odd_Sum + a[i];
        }
    }

    printf("The Sum of Even Numbers in this Array = %d \n", Even_Sum);
    printf("The Sum of Odd Numbers in this Array = %d \n", Odd_Sum);
    printf("The maximum number is : %d\n", max);
    return 0;
}
