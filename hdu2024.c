#include <stdio.h>
int main()
{
	int i,n,flag,first;
	char a;
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		for (i = 0; i < n; ++i)
		{
			flag=0;
			first=1;
			while((a=getchar())!='\n')
			{
				if(flag==0)
				{
					if(first)
					{
						if(!((a>='a' && a<='z') || (a>='A' && a<='Z') || a == '_'))
						{
							flag=1;
						}
						first=0;
					}
					if(!first)
						if(!((a>='a' && a<='z') || (a>='A' && a<='Z') || a == '_' || a<='9'&&a>='0'))
						{
							flag=1;
						}

				}
				
			}
			if(flag==1)
				printf("no\n");
			else
				printf("yes\n");
		}
	}
	return 0;
}