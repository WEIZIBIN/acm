#include <stdio.h>
int main()
{
	int i,j,n,a[100],b,c,temp;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			break;
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n-1-i; ++j)
			{
				b=a[j];
				c=a[j+1];
				if (b<0)
				{
					b=b*-1;
				}
				if(c<0)
				{
					c=c*-1;
				}
				if (b<c)
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		for (i = 0; i < n; ++i)
		{
			if(i==n-1)
				printf("%d", a[i]);
			else
				printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}