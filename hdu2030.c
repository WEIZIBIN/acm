#include <stdio.h>
int main()
{
	int i,n,a;
	char c;
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		for (i = 0; i < n; ++i)
		{
			a=0;
			while((c=getchar())!='\n')
			{
				if (c<0)
				{
					a++;
				}
			}
			printf("%d\n", a/2);
		}
	}
	return 0;
}