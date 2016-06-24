#include <stdio.h>
int main()
{
	int i, result, a, b, j;
	long n;
	int f[50] = {0};
	f[1] = 1;
	f[2] = 1;
	while(scanf("%d%d%d", &a, &b, &n) != EOF)
	{
		for (j = 3; j < 50; ++j)
		{
			f[j] = (a * f[j - 1] + b * f[j - 2]) % 7;
			if (f[j] == 0 && f[j - 1] == 0)
				break;
		}

		if(n == 0)
			break;
		else
			printf("%d\n", f[n % 49]);
	}
	return 0;
}