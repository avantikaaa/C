#include <stdio.h>

int main()
{
	int n, l, r, i;
	scanf("%d %d %d",&n, &l ,&r);
	if(l==r)
	{
		int a[n];
		for (i=0; i<n; i++)
			scanf("%d", &a[i]);
		printf("%d", a[0]);
		for(i=1; i<n; i++)
			printf(" %d", a[i]);
		printf("\n");
	}

	else if(l>r)
	{
		int a[n+l-r];
		scanf("%d", &a[0]);
		for (i=1; i<n; i++)
			scanf(" %d", &a[i]);
		for(i=0; i<l-r; i++)
			a[n+i] = a[i];
		printf("%d", a[l-r]);
		for(i=l-r+1; i<n+l-r; i++)
			printf(" %d", a[i]);
		printf("\n");
	}

	else
	{
		int a[n-l+r];
		scanf("%d", &a[r-l]);
		for(i=1; i<n; i++)
			scanf(" %d", &a[r-l+i]);
		for(i=0; i<r-l; i++)
			a[i] = a[n+i];
		printf("%d", a[0]);
		for(i=1; i<n; i++)
			printf(" %d", a[i]);
		printf("\n");
	}
	return 0;
}
