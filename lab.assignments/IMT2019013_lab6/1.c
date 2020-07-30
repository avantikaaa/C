//INPUT  : Integer 'n', followed by n integers
//OUTPUT : The n integers taken as input
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i;
	scanf ("%d", &n);

	int *ptr;
	ptr= (int*)malloc(n*sizeof(int));	//Declaring the size of the pointer

	scanf ("%d", ptr);			//Scanning the first number
	for(i=1; i<n; i++)
		scanf(" %d", (ptr+i));		//Scanning the other numbers separated by space

	printf ("%d", *ptr);			
	for (i=1; i<n; i++)			//OUTPUT
		printf (" %d", *(ptr+i));

	printf("\n");

	free(ptr);				//De-allocation of the memory

	return 0;
}
