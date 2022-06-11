/**
Name- Priayanshu Mallick, Roll No - 13
Q2. Define a function(pointer as a parameter)that will display
all elements of the array. Call in main()
**/
#include<stdio.h>
void display(int *, int n);
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
    display(a,n);
    return 0;
}
void display(int *a, int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d, ",*(a+i));
    }
    
}