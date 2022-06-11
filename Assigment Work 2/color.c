//Name - Priyanshu Mallick, Roll No- 13
/**
Q9. Write a program that will read an integer in the range from 1 to 4 and display the
following colours:
Red for input 1
Green for input 2
Blue for input 3
Black for input 4
Invalid input for input <=0 and >5
**/
#include<stdio.h>
int main()
{
    int c;
    printf("Enter any value between 1-4\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("Red\n");
                break;
        case 2: printf("Green\n");
                break;
        case 3: printf("Blue\n");
                break;
        case 4: printf("Black\n");
                break;
        default: printf("INvalid !");
    }
}
