#include<stdio.h>

int main()
{
    float x,rad,n,t=1,sum=0;
    int i,j,f,c;
    printf("\nEnter the degree value : ");
    scanf("%f",&x);
    printf("\n");
    printf("\nEnter the number of term  of expansion : ");
    scanf("%f",&n);
    rad=(x*(3.141))/180;
    for(i=1,j=2; i<=n; i+=2,j++)
    {
        for(c=i,f=(c-1); f!=0; f--)
        {
            c=c*f;
        }
        t=pow(rad,i)/c;
        sum=sum+pow(-1,j)*t;
    }
    printf("\nSin(%.1f) = %f",x,sum);
    return 0;
}