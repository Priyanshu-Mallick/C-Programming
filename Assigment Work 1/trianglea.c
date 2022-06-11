#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float s, area;
    printf("Enter length of three sides one by one:\n");
    scanf("%d%d%d",&a,&b,&c);
    s = (a+b+c)/2;
    if (a==b && b==c)
    {
        printf("It can not form a triangle !");
    }
    else
    {
        if (a>b)
        {
            if (a>c)
            {
                if (b+c>a)
                {
                    area = sqrt(s*(s-a)*(s-b)*(s-c));
                    printf("The area of triangle having given side length is : %7.2f\n",area);
                }
                else
                {
                    printf("Can't form a triangle, Enter valid side length !\n");
                }
            }
            else
            {
                if (a+b>c)
                {
                    area = sqrt(s*(s-a)*(s-b)*(s-c));
                    printf("The area of triangle having given side length is : %7.2f\n",area);
                }
                else
                {
                    printf("Can't form a triangle, Enter valid side length !\n");
                }
            }
        }
        else
        {
            if (b>c)
            {
                if (a+c>b)
                {
                    area = sqrt(s*(s-a)*(s-b)*(s-c));
                    printf("The area of triangle having given side length is : %7.2f\n",area);
                }
                else
                {
                    printf("Can't form a triangle, Enter valid side length !\n");
                }
            }
            else
            {
                if (a+b>c)
                {
                    area = sqrt(s*(s-a)*(s-b)*(s-c));
                    printf("The area of triangle having given side length is : %7.2f\n",area);
                }
                else
                {
                    printf("Can't form a triangle, Enter valid side length !\n");
                }
            }
        }
    }
    return 0;
}
