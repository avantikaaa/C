//INPUT  : 2 strings
//OUTPUT : 0, if the srings are identical. Otherwise, 1.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(char *ptr1, char *ptr2)			//Function
{
	for(int j=0; j<255; j++)			//Comparing 'i'th character
		if(*(ptr1+j) != *(ptr2+j))
			return 1;			//Output is 1 when the 2 strings are different
	return 0;					//Output is 0 when the 2 strings are identical
}

int main()
{
	char *ptr1, *ptr2;

	ptr1 = (char*)malloc(255*sizeof(char));		//Allocating memory for the pointers
	ptr2 = (char*)malloc(255*sizeof(char));

	int output=0;

	scanf("%s", ptr1);				//INPUT
	scanf("%s", ptr2);

	printf("%d\n", compare(ptr1, ptr2));		//OUTPUT

	free(ptr1);					//De-allocation
	free(ptr2);
	return 0;
}
