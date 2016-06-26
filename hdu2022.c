#include <stdio.h>
int main()
{
	int i,j,x,y,z,a,b,n,m,max;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		max=0;
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < m; ++j)
			{
				scanf("%d",&a);
				if (a<0)
					b=a*-1;
				else
					b=a;
				if(b>max)
				{
					max=b;
					x=i;
					y=j;
					z=a;
				}
			}
		}
		printf("%d %d %d\n", x+1,y+1,z);
	}
	return 0;
}