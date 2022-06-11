/**
 Q7. Write a function that will take a parameter as an integer and return the factorial of that
 number. Prototype of teh function should be: int factorial(int);
 **/
#include <stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter the value of n to find \n");
    scanf("%d", &n);
    printf("%d ! = %d",n,factorial(n));
    return 0;
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}