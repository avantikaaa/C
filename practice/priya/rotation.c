#include <stdio.h>

int main()
{
	int n, d, i;
	scanf("%d %d", &n, &d);
	int a[n+d];
	scanf("%d", &a[0]);
	for (i=1; i<n; i++)
		scanf(" %d", &a[i]);
	for(i=0; i<d; i++)
		a[n+i] = a[i];
	printf("%d", a[d]);
	for(i=d+1; i<n+d; i++)
		printf(" %d", a[i]);
	return 0;
}
