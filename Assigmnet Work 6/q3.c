/**
Name- Priayanshu Mallick, Roll No - 13
Q3. Define a function(pointer as a parameter)that reverses (in place)
the elements of a given array. Call it in main()
**/
#include<stdio.h>
void rev(int *, int n);
int main()
{
    int a[10], n, i;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    printf("Enter the elements in array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    rev(a,n);
    return 0;
}
void rev(int *a, int n)
{
    int rev[10], i, j;
    j = n-1;
    for ( i = 0; i < n-1; i++)
    {
        rev[i]=a[j];
        j--;
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%d, ",*(rev+i));
    }
}
