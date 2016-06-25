#include <stdio.h>
#include <math.h>

int main()
{
	float x1, x2;
	float y1, y2;
	while(scanf("%f %f %f %f", &x1, &y1, &x2, &y2) != EOF)
	{
		printf("%.2f\n", sqrt(pow((x1 - x2),2) + pow((y1 - y2),2)) );
	}
	return 0;
}