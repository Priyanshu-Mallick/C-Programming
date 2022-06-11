#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float d, root1, root2;
    printf("Enter coefficient A, B and C of quardratic equation:\n");
    scanf("%d%d%d",&a,&b,&c);
    d = (b * b) - (4 * a * c);
    root1 = (-b+sqrt(d))/2*a;
    root2 = (-b-sqrt(d))/2*a;
    printf("Root 1 is: %7.2f and Root 2 is : %7.2f",root1,root2);
    return 0;
}
