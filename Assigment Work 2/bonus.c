//Name - Priyanshu Mallick, Roll No- 13
/**
Q6. A commercial bank has introduced an incentive policy to give bonus to all its depositors.
The policy is as follows:
A bonus of 5 percent of the balance amount is given to everyone, irrespective of their
balance, and 10 percent is given to female account holders if their balance is more than
Rs:10,000. Write a program that inputs the necessary data and calculate the new balance
of the depositors.
**/
#include<stdio.h>
int main()
{
    int b, bb;
    char g;
    printf("Enter your balance\n");
    scanf("%d",&b);
    printf("Enter your gender as M for male and F for female\n");
    scanf(" %c",&g);
    if (g=='M')
    {
        bb = (b*0.05)+b;
        printf("Your bonus balance is: %d\n",bb);
    }
    else if (g=='F')
    {
        if (b>10000)
        {
            bb = (b*0.1)+b;
            printf("Your bonus balance is: %d\n",bb);
        }
        else
        {
            bb = (b*0.05)+b;
            printf("Your bonus balance is: %d\n",bb);
        }
    }
    else
    {
        printf("Invalid Input !\n");
    }
    return 0;
}
