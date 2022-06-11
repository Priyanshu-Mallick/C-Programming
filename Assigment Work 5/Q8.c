#include <stdio.h>
float sum(float, float);
float difference(float, float);
float product(float, float);
float division(float, float);
int main()
{
    float n1, n2;
    int o;
    printf("Enter two number\n");
    scanf("%f%f", &n1, &n2);
    printf("Select the operation u want to apply on these numbers:\n");
    printf("1. Add\t2. Subtract\t3. Multiply\t4. Divide\n");
    scanf("%d", &o);
    switch (o)
    {
    case 1:
        printf("Sumation: %.2f\n",sum(n1, n2));
        break;
    case 2:
        printf("Substraction: %.2f\n",difference(n1, n2));
        break;
    case 3:
        printf("Multiplication: %.2f\n",product(n1, n2));
        break;
    case 4:
        printf("Division: %.2f\n",division(n1, n2));
        break;
    default:
        printf("Invalid operator Input!");
        break;
    }
    return 0;
}
float sum(float n1, float n2)
{
    return n1+n2;
}
float difference(float n1, float n2)
{
    return n1-n2;
}
float product(float n1, float n2)
{
    return n1*n2;
}
float division(float n1, float n2)
{
    return n1/n2;
}