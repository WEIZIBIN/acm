#include <stdio.h>
#include <math.h>

#define PI 3.1415927

int main()
{
	double radius;
	while(scanf("%lf", &radius) != EOF)
	{
		printf("%.3lf\n", ((4.0/3)*PI*(pow(radius,3))) );
	}
	return 0;
}