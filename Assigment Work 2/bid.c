#include <stdio.h>

int main()
{
    int n1, n,p=1,s=0,i=1,j,d;
	printf("Input a binary number:\n");
	scanf("%d",&n);
	n1=n;
	for (j=n;j!=0;j=j/10)
	{
          d = j % 10;
            if(i==1)
                  p=p*1;
            else
                 p=p*2;

	   s=s+(d*p);
	   i++;
	}
        printf("The Binary Number : %d\nThe equivalent Decimal  Number : %d \n\n",n1,s);
        return 0;
}

