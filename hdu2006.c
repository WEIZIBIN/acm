#include <stdio.h>

int main()
{
	int a;
	int result;
	int temp;
	int i;
	while(scanf("%d", &a) != EOF)
	{
		result = 1;
		for (i = 0; i < a; ++i)
		{
			scanf("%d",&temp);
			if(temp % 2 == 1)
				result = result * temp;
		}
		printf("%d\n", result);
	}
	return 0;
}