#include <stdio.h>
int main()
{
	int i,n,b,x;
	while(scanf("%d", &n)!=EOF)
	{
		if(n==0)
			break;
		x=0;
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&b);
			if (b>=100)
			{
				x+=b/100;
				b=b%100;
			}
			if(b>=50)
			{
				x+=b/50;
				b=b%50;
			}
			if(b>=10)
			{
				x+=b/10;
				b=b%10;
			}
			if(b>=5)
			{
				x+=b/5;
				b=b%5;
			}
			if(b>=2)
			{
				x+=b/2;
				b=b%2;
			}
			if(b)
			{
				x+=b;
			}
			
		}
		printf("%d\n",x);
	}
	return 0;
}