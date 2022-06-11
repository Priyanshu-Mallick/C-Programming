//Name - Priyanshu Mallick, Roll No- 13
/**
Q8 b). Average mark of a student is given as input. The grading is done according to the
following table.
Average Mark Grade
90 -100 O garde
80 - 89 E garde
70 - 79 A grade
60 - 69 B grade
50 - 59 C garde
<50 F grade
Write a program that solves the above problem by using switch case.
**/
#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your mark\n");
    scanf("%d",&mark);
    switch(mark/10)
    {
        case 10:
        case 9: printf("O Grade!");
                break;
        case 8: printf("E Grade!");
                break;
        case 7: printf("A Grade!");
                break;
        case 6: printf("B Grade!");
                break;
        case 5: printf("C Grade!");
                break;
        default: printf("F Grade!");
    }
    return 0;
}
