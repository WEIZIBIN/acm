#include <stdio.h>

int main()
{
	int a,b,c,d,i,temp;
	while(scanf("%d%d",&a,&b) != EOF)
	{
		c = 0;
		d = 0;
		if(a>b)
		{
			temp=a;
			a=b;
			b=temp;
		}
		if(a%2==0)
		{
			for (i = a; i <= b; i+=2)
			{
				c += (i*i);
			}
			for (i = a + 1; i <= b; i+=2)
			{
				d += (i*i*i);
			}
		}
		if(a%2==1)
		{
			for (i = a; i <= b; i+=2)
			{
				d += (i*i*i);
			}
			for (i = a + 1; i <= b; i+=2)
			{
				c += (i*i);
			}
		}
		printf("%d %d\n", c,d);	
	}
	return 0;
}