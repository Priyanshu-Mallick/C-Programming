//Name - Priyanshu Mallick, Roll No- 13
/**
Q8 a). Average mark of a student is given as input. The grading is done according to the
following table.
Average Mark Grade
90 -100 O garde
80 - 89 E garde
70 - 79 A grade
60 - 69 B grade
50 - 59 C garde
<50 F grade
Write a program that solves the above problem by using if else ladder
**/
#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your mark\n");
    scanf("%d",&mark);
    if (mark>=90 && mark<100)
    {
        printf("O Grade!");
    }
    else if(mark>=80)
    {
        printf("E Grade!");
    }
    else if(mark>=70)
    {
        printf("A Grade!");
    }
    else if(mark>=60)
    {
        printf("B Grade!");
    }
    else if(mark>=50)
    {
        printf("C Grade!");
    }
    else
    {
        printf("F Grade!");
    }
    return 0;
}
