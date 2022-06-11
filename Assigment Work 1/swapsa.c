#include<stdio.h>
int main()
{
    char c1, c2, t;
    printf("Enter any value 1 from keyboard\n");
    scanf("%c",&c1);
    printf("Enter any value 2 from keyboard\n");
    scanf(" %c",&c2);
    printf("Before swapping value 1 was: %c and value 2 was: %c\n",c1,c2);
    t = c1;
    c1 = c2;
    c2 = t;
    printf("After swapping value 1 is: %c and value 2 is: %c\n",c1,c2);
    return 0;
}
