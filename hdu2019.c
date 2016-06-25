#include <stdio.h>
int main()
{
	int i,a,b,c,n,flag;
	while(scanf("%d%d",&n,&a))
	{
		if(n==0&&a==0)
			break;
		flag=0;
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&c);
			if(flag==0)
				if(i==0&&a<=c)
				{
					flag=1;
					printf("%d ", a);
				}
				else if((a>=b&&a<=c))
				{
					flag=1;
					printf("%d ", a);
				}
			b=c;
			if(flag&&i==(n-1))
				printf("%d", b);
			else
				printf("%d ", b);
		}
		if(flag==0)
			printf("%d", a);
		printf("\n");
	}
	return 0;
}