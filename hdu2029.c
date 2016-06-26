#include <stdio.h>
int main()
{
	int i,j,n,m,flag;
	char s[100];
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		for (i = 0; i < n; ++i)
		{
			flag=0;
			gets(s);
			m=strlen(s);
			for (j = 0; j < m/2; ++j)
			{
				if(s[j]!=s[m-j-1])
				{
					flag=1;
					break;
				}
			}
			if(flag)
				printf("no\n");
			else
				printf("yes\n");
		}
	}
	return 0;
}