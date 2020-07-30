#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int l, sub, i, j, count, c;
	scanf("%d", &sub);
	char s[100];
	scanf ("%s", s);
	l = strlen(s);
	int col = sub;
	int row = l-sub+1;
	char a[100][100];
	count = 0;
	for (i=0; i<row; i++)
	{
		for(j=i; j<col+i; j++)
			{
			a[i][j-i] = s[j];
			}
	}
	for(i=0; i<row-1; i++)
	{
		for(j=i+1; j<row; j++)
		{
			if ((strcmp(a[i],a[j]))==0)
			{
				count++;
				printf("%d %d\n", i, j);
				break;
			}
		}
	}




	printf ("%d l %d sub %d count %d\n", row-count, l, sub, count);
	return 0;
}
