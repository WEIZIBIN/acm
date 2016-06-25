#include <stdio.h>
int main()
{
	int i,j,a,b[100],c;
	double d;
	while(scanf("%d",&a)!=EOF)
	{
		d=0.0;
		for (i = 0; i < a; ++i)
		{
			scanf("%d",&b[i]);
		}
		for (i = 0; i < a; ++i)
		{
			for (j = 0; j < a-1-i; ++j)
			{
				if(b[j]>b[j+1])
				{
					c=b[j];
					b[j]=b[j+1];
					b[j+1]=c;
				}
			}
		}
		for (i = 1; i < a-1; ++i)
		{
			d+=b[i];
		}
		printf("%.2lf\n", d/(a-2));
	}
	return 0;
}