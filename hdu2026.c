#include <stdio.h>
int main()
{
	int flag;
	char i,c,s[100];
	while(gets(s))
	{
		i=0;
		flag=0;
		while((c=s[i++])!='\0')
		{
			if(!flag)
			{
				printf("%c", c-32);
				flag=1;
				continue;
			}
			if(c==' ')
			{
				flag=0;
			}
			printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}