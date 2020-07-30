#include <stdio.h>
int main()
{
	int list[10];
	scanf ("%d", &list[0]); //Takes the first element of the array
	for (int i=1; i<10; i++)
		scanf(",%d", &list[i]);  //Elements of the array should be separated by commas
	int x, y=0, count=0;
	scanf("%d", &x);
	for (int i=0; i<10; i++)
	{
		count = i+1;
		if (list[i] == x) // Checks whether the input is present in the unsorted array
		{
			y = 1; //Variable stores "1" if the input is present in the array
			break;
		}
	}


	if ( y == 1)
	{
		printf ("1 %d\n", count); //Input is present in the array
	}
	else
	{
		printf ("0 %d\n", count);  //Input is not present in the array
	}

	return 0;
}
