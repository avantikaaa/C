#include <stdio.h>
int tower(int n)
{
	if (n=1)
		return 1;
	return (2*(tower(n-1))+1);
}
int main ()
{
	int n;
	scanf ("%d", &n);
	printf ("%d\n", tower(n));
	return 0;
}
