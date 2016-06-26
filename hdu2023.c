#include <stdio.h>
int main()
{
	int i,j,n,m,d;
	double a,b,c[5];
	int x[50][5];
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < m; ++j)
			{
				scanf("%d",&x[i][j]);
			}
		}
		for (i = 0; i < n; ++i)
		{
			a=0;
			for (j = 0; j < m; ++j)
			{
				a+=x[i][j];
			}
			a=a/m;
			printf("%.2lf", a);
			if(i!=n-1)
				printf(" ");
		}
		printf("\n");
		for (i = 0; i < m; ++i)
		{
			b=0;
			for (j = 0; j < n; ++j)
			{
				b+=x[j][i];
			}
			b=b/n;
			c[i]=b;
			printf("%.2lf", b);
			if(i!=m-1)
				printf(" ");
		}
		printf("\n");
		d=0;
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < m; ++j)
			{
				if(x[i][j]<c[j])
					break;
				if(j==m-1)
					d++;
			}
		}
		printf("%d\n", d);
		printf("\n");
	}
	return 0;
}