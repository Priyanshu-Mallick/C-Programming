#include<stdio.h>
int main()
{
    float num1, num2, num3, num4, num5;
    printf("Enter any five floating point numbers between 0.0 to 20.0 :\n");
    scanf("%f%f%f%f%f",&num1,&num2,&num3,&num4,&num5);

    int s1, finalNum1, t1;
    int s2, finalNum2, t2;
    int s3, finalNum3, t3;
    int s4, finalNum4, t4;
    int s5, finalNum5, t5;
    if(num1>0)
    {
        t1 = num1*10;
        s1 = t1%10;
        if(s1>=5)
        {
            finalNum1 = num1;
            finalNum1++;
        }
        else
        {
            finalNum1 = num1;
        }
        for(int i = 1; i<=finalNum1; i++)
        {
            printf("*");
        }
        printf("%.1f", num1);
    }
    else
    {
        printf("The given number is 0");
    }
    if(num2>0)
    {
        t2 = num2*10;
        s2 = t2%10;
        if(s2>=5)
        {
            finalNum2 = num2;
            finalNum2++;
        }
        else
        {
            finalNum2 = num2;
        }
        for(int i = 1; i<=finalNum2; i++)
        {
            printf("*");
        }
        printf("%.1f", num2);
    }
    else
    {
        printf("\nThe given number is 0");
    }
    if(num3>0)
    {
        t3 = num3*10;
        s3 = t3%10;
        if(s3>=5)
        {
            finalNum3 = num3;
            finalNum3++;
        }
        else
        {
            finalNum3 = num3;
        }
        for(int i = 1; i<=finalNum3; i++)
        {
            printf("*");
        }
        printf("%.1f", num3);
    }
    else
    {
        printf("\nThe given number is 0");
    }
    if(num4>0)
    {
        t4 = num4*10;
        s4 = t4%10;
        if(s4>=5)
        {
            finalNum4 = num4;
            finalNum4++;
        }
        else
        {
            finalNum4 = num4;
        }
        for(int i = 1; i<=finalNum4; i++)
        {
            printf("*");
        }
        printf("%.1f", num4);
    }
    else
    {
        printf("\nThe given number is 0");
    }
    if(num5>0)
    {
        t5 = num5*10;
        s5 = t5%10;
        if(s5>=5)
        {
            finalNum5 = num5;
            finalNum5++;
        }
        else
        {
            finalNum5 = num5;
        }
        for(int i = 1; i<=finalNum5; i++)
        {
            printf("*");
        }
        printf("%.1f", num5);
    }
    else
    {
        printf("\nThe given number is 0");
    }
    getch();
    return 0;
}

