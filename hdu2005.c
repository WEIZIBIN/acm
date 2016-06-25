#include <stdio.h>

int main()
{
	int a,b,c;
	int flag;
	while(scanf("%d/%d/%d",&a,&b,&c)!=EOF)
	{
		flag = 0;
		if(a%4==0)
		{
			if(a%100==0)
			{
				if(a%400==0)
				{
					flag = 1;
				}
			}
			else
			{
				flag = 1;
			}
		}
		if(flag == 0)
		{
			if(b==1)
			{
				printf("%d\n", c);
			}
			if(b==2)
			{
				printf("%d\n", c+31);
			}
			if(b==3)
			{
				printf("%d\n", c+31+28);
			}
			if(b==4)
			{
				printf("%d\n", c+31+28+31);
			}
			if(b==5)
			{
				printf("%d\n", c+31+28+31+30);
			}
			if(b==6)
			{
				printf("%d\n", c+31+28+31+30+31);
			}
			if(b==7)
			{
				printf("%d\n", c+31+28+31+30+31+30);
			}
			if(b==8)
			{
				printf("%d\n", c+31+28+31+30+31+30+31);
			}
			if(b==9)
			{
				printf("%d\n", c+31+28+31+30+31+30+31+31);
			}
			if(b==10)
			{
				printf("%d\n", c+31+28+31+30+31+30+31+31+30);
			}
			if(b==11)
			{
				printf("%d\n", c+31+28+31+30+31+30+31+31+30+31);
			}
			if(b==12)
			{
				printf("%d\n", c+31+28+31+30+31+30+31+31+30+31+30);
			}
		}
		if(flag == 1)
		{
			if(b==1)
			{
				printf("%d\n", c);
			}
			if(b==2)
			{
				printf("%d\n", c+31);
			}
			if(b==3)
			{
				printf("%d\n", c+31+29);
			}
			if(b==4)
			{
				printf("%d\n", c+31+29+31);
			}
			if(b==5)
			{
				printf("%d\n", c+31+29+31+30);
			}
			if(b==6)
			{
				printf("%d\n", c+31+29+31+30+31);
			}
			if(b==7)
			{
				printf("%d\n", c+31+29+31+30+31+30);
			}
			if(b==8)
			{
				printf("%d\n", c+31+29+31+30+31+30+31);
			}
			if(b==9)
			{
				printf("%d\n", c+31+29+31+30+31+30+31+31);
			}
			if(b==10)
			{
				printf("%d\n", c+31+29+31+30+31+30+31+31+30);
			}
			if(b==11)
			{
				printf("%d\n", c+31+29+31+30+31+30+31+31+30+31);
			}
			if(b==12)
			{
				printf("%d\n", c+31+29+31+30+31+30+31+31+30+31+30);
			}
		}
	}
	return 0;
}