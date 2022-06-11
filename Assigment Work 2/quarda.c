//Name - Priyanshu Mallick, Roll No- 13
/**
Q5. Write a program to compute the roots of the equation ax2 + bx + c = 0 and print using
three-decimal places. The user should input the coefficients and the program should take
care of 3 possible cases of the discriminant (D = b2 − 4ac) and display the result
accordingly.
Test data and expected output:
Enter a, b, c: 0 2 3
Linear equation: root=-1.500
Enter a, b, c: 1 3 2
The roots are real: -1.000 and -2.000
Enter a, b, c: 2 6 9
The roots are complex: -1.500+1.500 i and -1.500-1.500 i
Enter a, b, c: 0 0 4
No solution: a & b both zero
**/
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float d, root1, root2;
    printf("Enter coefficient A, B and C of quardratic equation:\n");
    scanf("%d%d%d",&a,&b,&c);
    d = (b * b) - (4 * a * c);
    if (a==0)
    {
        if (b==0)
        {
            printf("No solution: a & b both zero\n");
        }
        else
        {
            root1 = -c/b;
            printf("Linear solution: root=%7.3f\n",root1);
        }
    }
    else
    {
        if (d>=0)
        {
            root1 = (-b+sqrt(d))/(2*a);
            root2 = (-b-sqrt(d))/(2*a);
            printf("The roots are real: %7.3f and %7.3f\n",root1,root2);
        }
        else if (d<0)
        {
            float e;
            root1 = -b/(2*a);
            e = -1*d;
            e = sqrt(e);
            root2 = e /(2*a);
            printf("The root are complex: %7.3f + %7.3fi and %7.3f - %7.3fi\n",root1,root2,root1,root2);
        }
    }
    return 0;
}
