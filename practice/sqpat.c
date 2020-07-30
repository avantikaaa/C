#include <stdio.h>
#include<string.h>

int main()
{
	int n, i=1;
	printf("Enter number: ");
	scanf("%d", &n);
	int max = 2*n-1;
	int out[max][max];
	int n1=n, n2=n;
	while(1)
	{
		if(n1<0 || n2>max)
			break;
		for(int j=0; j<max; j++)
		{
			out[n1-1][j] = i;
			out[n2-1][j] = i;
			out[j][n1-1] = i;
			out[j][n2-1] = i;
		}
		i++;
		n1--;
		n2++;
	}
	for(int k=0; k<max; k++)
	{
		for(int l=0; l<max; l++)
			printf("%d ", out[k][l]);
		printf("\n");
	}
	return 0;
}
