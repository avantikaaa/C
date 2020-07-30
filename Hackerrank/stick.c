#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	scanf("%d", &a[0]);
	int min = a[0];
	for (int i=1; i<n; i++)
	{
		scanf(" %d", &a[i]);
		if(a[i]<min)
		min = a[i];
	}
	int i;
	int k=0;

	while(k<n)
	{
		printf("%d\n", n-k);
		k=0;
	//	printf("min= %d\n", min);
		for(i=0; i<n; i++)
		{
			if(a[i]>0)
				a[i]-=min;
			if(a[i]==0)
			{
				k++;
	//			printf("%d ", i);
			}
		}
		i=0;
		while(a[i]==0)
			i++;
		min = a[i++];
		while(i<n)
		{
			if(a[i]<min && a[i]!=0)
				min = a[i];
			i++;
		}
	//	printf("\n");
	}
}
