#include <stdio.h>
int main()
{
	int i,n;
	char c,a;
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		for (i = 0; i < n; ++i)
		{
			a=0;
			while((c=getchar())!='\n')
			{
				if(c<='9'&&c>='0')
					a++;
			}
			printf("%d\n", a);
		}
	}
	return 0;
}