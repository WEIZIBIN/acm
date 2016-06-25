#include <stdio.h>

int main()
{
	int i,n,a[100],temp,min,minIndex;
	while(scanf("%d",&n)!=EOF)
	{
		if (n<=0)
		{
			break;
		}
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
			if (i==0)
			{
				min=a[i];
				minIndex=i;
			}
			if(a[i]<min)
			{
				min=a[i];
				minIndex=i;
			}
		}
		temp=a[0];
		a[0]=a[minIndex];
		a[minIndex]=temp;
		for (i = 0; i < n; ++i)
		{
			if (i==(n-1))
			{
				printf("%d", a[i]);
				break;
			}
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}