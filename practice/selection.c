#include <stdio.h>
int count = 0;
int selection(int a[], int n, int count)
{
	int i, j, tmp, min;
	for (i=0; i<n-1; i++)
	{
		min = i;
		for (j=i+1; j<n; j++)
			if (a[j] < a[min])
				min = j;
		tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
		count++;
	}
	return count;
}

int main ()
{
	int i, n, count;
	scanf ("%d", &n);
	int a[n];
	for (i=0; i<n; i++)
		scanf ("%d", &a[i]);
	count = selection(a, n, 0);
	printf ("Selection sort: ");
	for (i=0; i<n; i++)
		printf ("%d ", a[i]);
	printf ("\ncount: %d\n", count);
	return 0;
}
