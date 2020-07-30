#include <stdio.h>
int count=0;
void merge(int a[], int left, int middle, int right)
{
	count++;
	int l1 = middle-left + 1;
	int l2 = right - middle;
	int arr1[l1];
	int arr2[l2];
	int i, j=0, k=0;
	for (i=0; i<l1; i++)
		arr1[i]  = a[left+i];
	for (i=0; i<l2; i++)
		arr2[i] = a[middle+ 1 +i];
	i = left;
	while(j<l1 && k<l2)
	{
		if (arr1[j] <= arr2[k])
		{
			a[i] = arr1[j];
			j++;
		}
		else
		{
			a[i] = arr2[k];
			k++;
		}
		i++;
	}
	while (j<l1)
	{
		a[i] = arr1[j];
		i++;
		j++;
	}
	while(k<l2)
	{
		a[i] = arr2[k];
		i++;
		k++;
	}
}
void MergeSort(int a[], int left, int right)
{
	if(right-left>0)
	{
		int middle = (right+left)/2;
		MergeSort(a, left, middle);
		MergeSort(a, middle+1, right);
		merge(a, left, middle, right);
	}
}

int main()
{
	int n, i;
	scanf ("%d", &n);
	int a[n];
	for (i=0; i<n; i++)
		scanf("%d", &a[i]);
	MergeSort(a, 0, n-1);
	printf("Merge Sort: ");
	for (i=0; i<n; i++)
		printf ("%d ", a[i]);
	printf("\n%d\n", count);
	return 0;
}

