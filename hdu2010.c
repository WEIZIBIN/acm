#include <stdio.h>

int main()
{
	int i,a,b,x,y,z;
	int flag;
	while(scanf("%d%d",&a,&b) != EOF)
	{
		flag=0;
		for (i = a; i <= b; ++i)
		{
			z=i%10;
			y=(i%100 - z)/10;
			x=i/100;
			if(i ==(z*z*z+y*y*y+x*x*x))
			{
				if(flag==1)
					printf(" %d", i);
				else
					printf("%d", i);
				flag=1;
			}
		}
		if(flag==0)
		{
			printf("no\n");
		}
		else
			printf("\n");
	}
	return 0;
}