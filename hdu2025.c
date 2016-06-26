#include <stdio.h>
int main()
{
	char s[100];
	char c,max;
	int i;
	while(scanf("%s",s)!=EOF)
	{
		i=0;
		max='a';
		while((c=s[i++])!='\0')
		{
			if(c>max)
			{
				max=c;
			}
		}
		i=0;
		while((c=s[i++])!='\0')
		{
			if(c==max)
				printf("%c(max)", c);
			else
				printf("%c", c);
		}

		printf("\n");
	}
	return 0;
}