
#include <stdio.h>
#include <math.h>
int main()
{
	float x, Q, sum = 0;
	int i, j, a, fact, limit;

	printf("Enter the value of x of sinx series: ");
	scanf("%f", &x);

	printf("Enter the limit upto which you want to expand the series: ");
	scanf("%d", &limit);

	Q = x;
	x = (x * 3.1415) / 180;

	for (i = 1, a = 1; i <= limit; i++, a = a + 2)
	{
		fact = 1;
		for (j = 1; j <= a; j++)
		{
			fact = fact * j;
		}
		if (i % 2 == 0)
		{
			sum = sum - (pow(x, a)) / fact;
		}
		else
		{
			sum = sum + (pow(x, a)) / fact;
		}
	}

	printf("Sin(%0.1f): %0.2f", Q, sum);

	return 0;
}
