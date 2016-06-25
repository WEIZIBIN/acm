#include <stdio.h>

int main()
{
	int i, a;
	double b;
	int x,y,z;
	while(scanf("%d", &a) != EOF)
	{
		if(a==0)
			break;
		x=0;
		y=0;
		z=0;
		for (i = 0; i < a; ++i)
		{
			scanf("%lf",&b);
			if(b>0)
				x++;
			if(b<0)
				y++;
			if(b==0)
				z++;
		}
		printf("%d %d %d\n",y,z,x);
	}
	return 0;
}