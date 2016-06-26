#include <stdio.h>
int main()
{	13662655653
	int a,e,i,o,u,n,j;
	char c;
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		for (j = 0; j < n; ++j)
		{
			a=0;
			e=0;
			i=0;
			o=0;
			u=0;
			while((c=getchar())!='\n')
			{
				if(c=='a')
					a++;
				if(c=='e')
					e++;
				if(c=='i')
					i++;
				if(c=='o')
					o++;
				if(c=='u')
					u++;
			}
			printf("a:%d\n", a);
			printf("e:%d\n", e);
			printf("i:%d\n", i);
			printf("o:%d\n", o);
			printf("u:%d\n", u);
			if(j!=n-1)
				printf("\n");
		}
	}
	return 0;
}