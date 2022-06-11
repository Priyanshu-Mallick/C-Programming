/**
Name- PRIYANSHU MALLICK, Roll No- 13
Q10.Write a program that will sort a list of numbers in ascending order by using Selection sort
algorithm
**/
#include <stdio.h>

int main()
{
    int a[10], n, i, j, min, temp;
    printf("Enter the number of elements in array : \n");
    scanf("%d", &n);

    printf("Enter Elements in array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    j = 0;
    while (j < n - 1)
    {
        min = j;
        i = j + 1;
        while (i < n)
        {
            if (a[i] < a[min])
            {
                min = i;
            }
            i++;
        }
        if (min != j)
        {
            temp = a[j];
            a[j] = a[min];
            a[min] = temp;
        }
        j++;
    }
    printf("After Sorting the array according to the ascending order\nNow the array become : {");
    for (i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
    }
    printf("}");

    return 0;
}