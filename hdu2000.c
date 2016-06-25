#include <stdio.h>

void sort(char a[3])
{
	char temp;
	int i, j;
	for (i = 0; i < 2; ++i)
	{
		for (j = 0; j < 2; ++j)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main()
{
	char a[3];
	while(scanf("%s", a) != EOF)
	{
		sort(a);
		printf("%c %c %c\n", a[0], a[1], a[2]);
	}
	return 0;
}

