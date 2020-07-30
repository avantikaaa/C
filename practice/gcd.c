#include <stdio.h>
int gcd(int x, int y)
{
	if(x%y==0)
		return y;
	return (gcd(y, x%y));
}

int main ()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a==0 && b==0)
		printf ("Invalid input\n");
	else if (a==0)
		printf ("%d\n", b);
	else if (b==0)
		printf ("%d\n", a);
	else if (a>b)
		printf ("%d\n", gcd(a,b));
	else
		printf ("%d\n", gcd(b,a));
	return 0;
}
