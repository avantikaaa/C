#include <stdio.h>
int main ()
{
	int a[9];
	scanf ("%d", &a[0]); //Takes the first element of the array
	for (int i=1; i<10; i++)
	{
		scanf (", %d" , &a[i]); //Elements of the array shoul be separated by commas
	}

	printf ("%d", a[9]); //Prints the last element first
	for (int i=8; i>=0; i--)
	{
		printf (" %d", a[i]); //prints the rest of the elements with commas
	}
	printf ("\n");
	return 0;
}
