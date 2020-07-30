#include <stdio.h>

int main()
{
	int l1, m1, l2, m2, i, j, k;
	scanf("%d %d", &l1, &m1);
	int mat1[l1][m1];
	for(i=0; i<l1; i++)
	{
		for(j=0; j<m1; j++)
			scanf("%d", &mat1[i][j]);
	}
	scanf("%d %d", &l2, &m2);
	if(m1!=l2)
	{
		printf("Invalid input");
		return 0;
	}
	int mat2[l2][m2];
	for(i=0; i<l2; i++)
	{
		for(j=0; j<m2; j++)
			scanf("%d", &mat2[i][j]);
	}
	int out[l1][m2];
	for(i=0; i<l1; i++)
		for(j=0; j<m2; j++)
		{
			int sum = 0;
			for(k=0; k<l2; k++)
				sum+= mat1[i][k]*mat2[k][j];
			out[i][j] = sum;
		}
	for(i=0; i<l1; i++)
	{
		for(j=0; j<m2; j++)
			printf("%d ", out[i][j]);
		printf("\n");
	}
	return 0;
}
