#include <stdio.h>
#include <math.h>
int main()
{
	int n, i, j, s, count=0;
	scanf ("%d", &n);
	int a[n];
	for (i=1; i<=n; i++)
		a[i-1] = i;
	s = sqrt(n);
	for (i=1; i<n; i++)
	{
		if(a[i]!=1)
		{
			for (j=i+1; j<n; j++)
				if (a[j]%a[i]==0)
					a[j] = 1;
		}
	}
	for (i=0; i<n; i++)
		if (a[i] != 1)
			count++;
	printf ("%d\n", count);
	return 0;
}
