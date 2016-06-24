#include <stdio.h>
#include <string.h>
int main()
{
	int i, n, j;
	char s[1005][15];
	int count[1005] = {0};
	while(scanf("%d", &n) != EOF && n != 0)
	{
		int max = -1;
		int maxIndex = -1;
		memset(count,0,sizeof(count));
		for (i = 0; i < n; ++i)
		{
			scanf("%s", s[i]);
		}

		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n; ++j)
			{
				if(s[i][0] != '\0')
				{
					if (i != j)
					{
						if (s[j][0] != '\0')
						{
							if (strcmp(s[i], s[j]) == 0)
							{
								count[i]++;
								s[j][0] = '\0';
							}
						}
					}
				}
				else
					i++;
			}
		}
		for (i = 0; i < n; ++i)
		{
			if(count[i] > max)
			{
				max = count[i];
				maxIndex = i;
			}
		}
		printf("%s\n", s[maxIndex]);
	}
	return 0;
}