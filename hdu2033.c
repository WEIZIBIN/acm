#include <stdio.h>
int main()
{
	int i,a[3],b[3],c,n;
	long long x,y,z,s,m,h;
	while(scanf("%d",&n)!=EOF)
	{
		for (i = 0; i < n; ++i)
		{
			scanf("%d%d%d%d%d%d",&a[0],&a[1],&a[2],&b[0],&b[1],&b[2]);
			s=a[2]+b[2];
			m=a[1]+b[1];
			h=a[0]+b[0];
			x=s%60;
			y=(m+s/60)%60;
			z=h+(m+s/60)/60;
			printf("%lld %lld %lld\n", z,y,x);
		}
	}
	return 0;
}