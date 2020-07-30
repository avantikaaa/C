#include <stdio.h>
void quick(int a[],int left, int right)
{
	if (left<right)
	{
		int pivot = right;
		int i = left-1;
		int tmp;
		for(int j=left; j<=right; j++)
		{
			if(a[pivot]>a[j])
			{
				i++;
				tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
		pivot = i+1;
		tmp = a[right];
		a[right] = a[pivot];
		a[pivot] = tmp;

		quick(a, left, pivot-1);
		quick(a, pivot+1, right);
	}
}
int main()
{
	int n, i;
	scanf("%d", &n);
	int a[n];
	scanf("%d", &a[0]);
	for (i=1; i<n; i++)
		scanf(",%d", &a[i]);
	quick(a,0,n-1);
	for (i=0; i<n; i++)
		printf ("%d ", a[i]);
	printf ("\n");
	return 0;
}
