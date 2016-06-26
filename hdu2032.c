#include <stdio.h>
int main()
{
	int i,j,n;
	while(scanf("%d",&n)!=EOF)
	{
		int a[30][30]={0};
		for (i = 0; i < n; ++i)
		{
			a[i][0]=1;
		}
		for (i = 0; i < n; ++i)
		{
			for (j = 1; j < i+1; ++j)
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < i+1; ++j)
			{
				printf("%d", a[i][j]);
				if(j!=i)
					printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}