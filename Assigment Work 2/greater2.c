//Name - Priyanshu Mallick, Roll No- 13
//Q2. Write a program that will read two numbers and display the greater one.

#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    if (num1>num2)
    {
        printf("The greater number is: %d\n",num1);
    }
    else if(num2>num1)
    {
        printf("The greater number is: %d\n",num2);
    }
    else
    {
        printf("Both numbers are equal !\n");
    }
    return 0;
}
