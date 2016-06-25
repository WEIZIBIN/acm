#include <stdio.h>

int main()
{
	int a,b,c,x,i,j,flag,flag2;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		c=2;
		
		if(b>0)
		{
			flag=a%b;
			flag2=a/b;
		}
		else
		{
			flag=a;
			flag2=0;
		}
		for (i = 0; i < flag2; ++i)
		{
			x=0;
			for (j = 0; j < b; ++j)
			{
				x+=c;
				c+=2;
			}
			if(i==(flag2-1)&&flag==0)
				printf("%d",x/b);
			else
				printf("%d ", x/b);

		}
		if (flag)
		{
			x=0;
			for (i = 0; i < flag; ++i)
			{
				x+=c;
				c+=2;
			}
			printf("%d", x/flag);
		}
		printf("\n");
		
	}
	return 0;
}