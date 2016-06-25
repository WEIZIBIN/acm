#include <stdio.h>

int main()
{
	double a;
	while(scanf("%lf", &a) != EOF)
	{
		if(a > 0)
			printf("%.2lf\n", a);
		if(a < 0)
			printf("%.2lf\n", a * -1);
	}
	return 0;
}