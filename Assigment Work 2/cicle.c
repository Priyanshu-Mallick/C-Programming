//Name - Priyanshu Mallick, Roll No- 13
/**
Q10. Write a menu based program that will read the radius of a circle. Based on the user
choice it will compute the following by using switch case statement:
If choice is 1, then compute area of the circle and display it.
If choice is 2, then compute circumference of the circle and display it
Any other choice, then display “wrong entry”.
**/
#include<stdio.h>
int main()
{
    int r,c;
    float area, cir;
    printf("Enter the radius of the circle\n");
    scanf("%d",&r);
    printf("Enter 1 for finding area and 2 for finding circumference\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: area = 3.14 * r * r;
                printf("Area is %7.2f",area);
                break;
        case 2: cir = 2 * 3.14 * r;
                printf("Circumference is %7.2f\n",cir);
                break;
        default: printf("Wrong Input!");
    }
    return 0;
}
