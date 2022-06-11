//Name- Priyanshu Mallick, Roll No- 13
//Q8. Write a program that will read two integers and compute the LCM.

#include <stdio.h>
int main()
{
    int i, num1, num2, max, lcm=1;
    printf("Enter any two numbers to find LCM:\n");
    scanf("%d%d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    i = max;

    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm = i;
            break;
        }
        i = max+1;
    }

    printf("LCM of %d and %d = %d", num1, num2, lcm);

    return 0;
}



