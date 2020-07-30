#include <stdio.h>

int main()
{
	char a[10][17] = {"greater than nine", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int n;
	scanf("%d", &n);
	if(n>9)
		printf("greater than 9\n");
	else
		printf("%s\n", a[n]);
	return 0;
}
