#include <stdio.h>
void sort(int a[], int n);
int main()
{
    int a[10], n, i;
    printf("Enter the number of elements in array : \n");
    scanf("%d", &n);

    printf("Enter Elements in array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, n);

    return 0;
}
void sort(int a[], int n)
{

    int j = 0, min, i, temp;
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
}
