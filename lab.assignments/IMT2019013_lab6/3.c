//INPUT  : 2 strings
//OUTPUT : The 2 strings concatenated
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int concatenate(char *ptr1, char *ptr2, char *output)	//Function
{
	int a = strlen(ptr1);
	int b = strlen(ptr2);

	for(int i=0; i<a; i++)				//Adding the first string
		*(output+i) = *(ptr1+i);
	for(int i=0; i<b; i++)				//Concatenation of the second string
		*(output+a+i) = *(ptr2+i);
	return *output;
}

int main()
{
	char *ptr1, *ptr2, *output;

	ptr1 = (char*)malloc(255*sizeof(char));		//Allocating memory for the pointers
	ptr2 = (char*)malloc(255*sizeof(char));

	scanf("%s", ptr1);				//INPUT
	scanf("%s", ptr2);

	int a = strlen(ptr1);				//Length of the strings taken as input
	int b = strlen(ptr2);

	output = (char*)malloc((a+b)*sizeof(char));

	concatenate(ptr1, ptr2, output);

	for(int i=0; i<a+b; i++)			//OUTPUT
		printf("%c", *(output+i));

	free(ptr1);					//De-allocation
	free(ptr2);
	free(output);

	return 0;
}
