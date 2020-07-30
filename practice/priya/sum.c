#include <stdio.h>

int main()
{
	int n, i, j, output;
	scanf("%d", &n);
	int a[n];
	scanf("%d", &a[0]);
	for (i=1; i<n; i++)
		scanf(" %d", &a[i]);
//	output = 0;
	for(i=0; i<n-1; i++)
		for (j=i+1; j<n; j++)
			if((a[i]*a[j])<0)
			{
				output = (a[i]*a[j]);
				break;
			}
	if(&output == NULL)
	{
		printf("0");
		return 0;
	}

	for(i=0; i<n-1; i++)
		for(j=i+1; j<n; j++)
			if((a[i]*a[j])<0)
				if(output<(a[i]+a[j]))
					output = a[i]+a[j];


	printf("%d\n", output);
	return 0;
}
