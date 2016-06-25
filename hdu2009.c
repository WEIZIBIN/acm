#include <stdio.h>
#include <math.h>
int main()
{
	int i,a,b;
	double c;
	double d;
	while(scanf("%d%d",&a,&b) != EOF)
	{
		d=0.0;
		c=a;
		for (i = 0; i < b; ++i)
		{	
			d += c;
			c = sqrt(c);
		}
		printf("%.2lf\n", d);
	}
	return 0;
}