#include <stdio.h>
int  binary(int a[], int left, int right, int n, int count)
{
	count++;
	if (left<right)
	{
		int middle = (right+left)/2;
		if (a[middle]==n)
			return 1;
		else if(a[middle]>n)
			return (binary(a, left, middle-1, n, count));
		else
			return (binary(a, middle+1, right, n, count));
	}
	return count;
}
int main()
{
	int n, k, count=0, out=0;
	scanf ("%d", &n);
	scanf ("%d", &k);
	int a[k];
	int left = 0;
	int right = k-1;
	for (int i=0; i<k; i++)
		scanf("%d", &a[i]);
	while (left<=right)
	{
		count++;
		int middle = (right+left)/2;
		if (a[middle]==n)
		{
			out = 1;
			break;
		}
		else if(a[middle]>n)
			right = middle-1;
	
		else
			left = middle+1;
	}


	if (out==0)
		printf("no\n");
	else
		printf ("yes\n");
	printf ("%d\n", count);
	return 0;
}
