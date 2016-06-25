#include <stdio.h>
#include <math.h>
int main()
{
	int i,a,b,c,j,flag;
	while(scanf("%d%d",&a,&b))
	{
		flag=0;
		if(a==0&&b==0)
			break;
		for (i = a; i <= b; ++i)
		{
			c=(i*i+i+41);
			for (j = 2; j <= sqrt(i*i+i+41); ++j)
			{
				if((i*i+i+41)%j==0)
				{
					flag++;
					break;
				}
			}
			if(flag)
			{
				break;
			}
		}
		if(flag)
		{
			printf("Sorry\n", flag);
		}
		else
		{
			printf("OK\n");
		}
	}
	return 0;
}