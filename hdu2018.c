#include <stdio.h>

int main()
{
	int i,n,a[55]={0};
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			break;
		a[1]=1;
		for (i = 1; i <= n; ++i)
		{
			if (i>=4)
			{
				a[i]=a[i-1]+a[i-3];
			}
			else{
				a[i]=a[i-1]+1;
			}
		}
		printf("%d\n", a[n]);
	}
	return 0;
}