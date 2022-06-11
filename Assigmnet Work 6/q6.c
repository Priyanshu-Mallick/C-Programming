/**
Name- Priayanshu Mallick, Roll No - 13
Q6. WAP that will read n integers dynamically,
and sort them in ascending order.
**/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a, n, i, j, t;
    printf("How many numbers you want to be sorted: \n");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter %d Numbers: \n", n);
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", (a + i));
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (*(a + i) < *(a + j))
            {
                t = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = t;
            }
        }
    }
    printf("After Sorting in Ascending Order: \n");
    for (i = 0; i < n; i++)
        printf("%d, ", *(a + i));
    return 0;
}