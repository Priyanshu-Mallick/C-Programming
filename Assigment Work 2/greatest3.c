//Name - Priyanshu Mallick, Roll No- 13
//Q3. Write a program that will read three numbers and display the greatest one by using nested
//if else statement
#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2)
    {
        if (num1>num3)
        {
            printf("The greatest number among three numbers is: %d",num1);
        }
        else
        {
            printf("The greatest number among three numbers is: %d",num3);
        }
    }
    else
    {
        if (num2>num3)
        {
            printf("The greatest number among three numbers is: %d",num2);
        }
        else
        {
            printf("The greatest number among three numbers is: %d",num3);
        }
    }
    return 0;
}
