#include <stdio.h>

void bubble(int a[], int n)
{
	int i, j, min, tmp;
	for (i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
			if(a[i]>a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
	}
}

int main()
{
	int n,i;
	scanf ("%d", &n);
	int a[n];
	for (i=0; i<n; i++)
		scanf ("%d", &a[i]);
	bubble(a,n);
	printf ("Bubble sort: ");
	for (i=0; i<n; i++)
		printf ("%d ", a[i]);
	printf ("\n");
	return 0;
}
