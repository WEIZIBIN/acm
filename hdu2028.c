#include <stdio.h>
int gcd(int a,int b)
{
	return b==0?a:gcd(b,a%b);
}
int main()
{
	int i,x,y,n;
	while(scanf("%d",&n)!=EOF)
	{
		scanf("%d",&x);
		for (i = 1; i < n; ++i)
		{
			scanf("%d",&y);
			x=x/gcd(x,y)*y;
		}
		printf("%d\n", x);
	}

	return 0;
}