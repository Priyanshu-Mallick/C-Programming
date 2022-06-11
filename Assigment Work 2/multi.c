#include<stdio.h>
int main()
{
    int num1, num2, sum1, sum2;
    printf("Enter First two-digit Number:\n");
    scanf("%d",&num1);
    printf("Enter second two-digit number:\n");
    scanf("%d",&num2);
    int n2=num2/10;
    int n1=num2%10;
    sum1=n1*num1;
    sum2=n2*num1;
    printf("The Multiplication is:\n");
    printf("\t\t\t %d\n",num1);
    printf("\t\tX\t %d\n",num2);
    printf("\t\t-------------------\n");
    printf("%dX%d is\t\t\t %d\n",n1,num1,sum1);
    printf("%dX%d is\t\t\t%d\n",n2,num1,sum2);
    printf("\t\t-------------------\n");
    printf("\tTotal\t\t%d\n",num1*num2);
    return 0;
}
