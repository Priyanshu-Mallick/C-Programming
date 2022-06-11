//Name - Priyanshu Mallick, Roll No- 13
/**
Q7. An electricity board charges the following rates for the use of electricity.
For the first 200 units Rs:1 per unit
For the next 100 unit Rs: 2 per unit
Beyond three hundred units it charges Rs 3 per unit.
All the users are charged a minimum of Rs 100 as meter charge. If the total amount is
more than 600 then additional surcharge of 15% of total amount is charged. WAP to
read the consumer number and number of units consumed and print the charges with
consumer number.
**/
#include<stdio.h>
int main()
{
    int unit, cn;
    float amt, toamt, surc;
    printf("Enter your consumer number\n");
    scanf("%d",&cn);
    printf("Enter unit consumed\n");
    scanf("%d",&unit);
    if (unit<200)
    {
        amt = unit *1;
        toamt = amt +100;
        printf("%d consumer having %7.2f rupees bill to be paid\n",cn,toamt);
    }
    else if (unit<=300)
    {
        amt = 200 + (unit-200)*2;
        if (amt>600)
        {
            surc = amt * 0.15;
            toamt = amt + surc + 100;
            printf("%d consumer having %7.2f rupees bill to be paid\n",cn,toamt);
        }
        else
        {
            toamt = amt +100;
            printf("%d consumer having %7.2f rupees bill to be paid\n",cn,toamt);
        }
    }
    else
    {
        amt = 400 + (unit -300)*3;
        if (amt>600)
        {
            amt =amt +100;
            surc = amt * 0.15;
            toamt = amt + surc;
            printf("%d consumer having %7.2f rupees bill to be paid\n",cn,toamt);
        }
        else
        {
            toamt = amt +100;
            printf("%d consumer having %7.2f rupees bill to be paid\n",cn,toamt);
        }
    }
    return 0;
}
