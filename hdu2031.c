#include <stdio.h>
#include <math.h>
int main()
{
	char a[1000];
	int i,j,m;
	long long n;
	while(scanf("%lld%d",&n,&m)!=EOF)
	{
		i=0;
		if(n<0)
		{
			printf("-");
			n*=-1;
		}
		while(n!=0)
		{
			if(n%m<=9)
				a[i]='0'+n%m;
			else
				a[i]='A'+n%m-10;
			n=n/m;
			i++;
		}
		if(i==0)
			printf("0");
		else
			for (j = 0; j < i; ++j)
			{
				printf("%c", a[i-j-1]);
			}
		printf("\n");
	}
	return 0;
}