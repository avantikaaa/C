#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
  char S[100];   /*Creates an array to store the input*/
  scanf ("%s", S);  /*Input of the array*/
  int len, L, row, col;
  scanf ("%d", &L);  /*Input of the length of the sub-string*/
  len = strlen(S); /*Length of the string given by the user*/
  row = len - L + 1;
  col = L;
  char str[100][100];  /*Creating a 2-D array so to store the substrings*/

  if (L > len)
  {
	printf ("0");
  }
  else
  {
	for (int i=0; i < row; i++)
	{
		for(int j=i; j<i+L; j++)
		{
			str[i][j-i] = S[j];   /*Assigning elements of the 2-D array values from the initial array*/
		}
	}
	int count = 0;
	for (int m = 0; m < row-1; m++)
	{
		for (int n=m+1; n < row; n++)
		{
			if ((strcmp(str[m],str[n]))==0)  /*To remove repeating cases*/
			{
				count++;
				break;  /*To not consider extra cases*/
			}
		}
	}
	printf ("%d\n", row - count);
  }
  return 0;
}
