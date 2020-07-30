#include<stdio.h>

void comma(long int n)
{
	if(n==0)
		return;
	comma(n/100);
	printf("%ld,", n%10);
}

int main ()
{
	long long int n;
	printf("Enter number: ");
	scanf("%lld", &n);
	comma(n/1000);
	printf("%lld\n", n%1000);
	return 0;
}
	
