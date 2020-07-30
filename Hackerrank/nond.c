#include <stdio.h>
#include<string.h>

int max(int a, int b)
{
	if(a>b)
		return a;
	return b;
}

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	if(k==1)
	{
		printf("1\n");
		return 0;
	}
	int rem[k];
	memset(rem+0, 0, k*sizeof(int));

	int a[n];
	scanf("%d", &a[0]);
	int m = a[0]%k;
	rem[m] = 1;
	for(int i=1; i<n; i++)
	{
		scanf(" %d", &a[i]);
		m= a[i]%k;
		rem[m]++;
//		printf("%d %d %d\n", m, rem[m], i);
	}
	int out = 0;
	for(int i=1; i<=(k)/2; i++)
	{
		out += max(rem[i], rem[k-i]);
//		printf("a   i-%d out-%d i-%d n-i-%d\n", i, out, rem[i], rem[k-i]);
	}
	if(k%2==0)
	{
		out-= rem[k/2];
		out++;
	}
	else if(k==3)
		out= max(rem[1], rem[2]);
	if(rem[0]>0)
		out++;
	printf("%d\n", out);
}
