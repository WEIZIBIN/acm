#include <stdio.h>
//4天剩下一个，过程 1 4 10 22
//after= before - (before/2)-1;
//before = 2*after+2
int main()
{
	int a,b,i;
	while(scanf("%d",&a)!=EOF)
	{
		b=1;
		for (i = 1; i < a; ++i)
		{
			b=2*b+2;
		}
		printf("%d\n", b);
	}
	return 0;
}