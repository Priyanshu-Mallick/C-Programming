/**
Name- Priayanshu Mallick, Roll No - 13
Q5. WAP that will read n integers dynamically, add them and display the sum.
**/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i, n, *ptr, sum = 0;
    printf("Enter the number of elements.\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr = NULL)
    {
        printf("Error in memory allocation\n");
        exit(0);
    }
    printf("Enter the elements.\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        sum = sum + *(ptr + i);
    }
    printf("Sum =%d", sum);
    free(ptr);

    return 0;
}