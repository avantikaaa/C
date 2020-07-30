#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *fileptr;
	fileptr = fopen("patients.txt", "r");	//Name of the file might have to be changed.
	char c;
	c = fgetc(fileptr); 
	while (c != EOF) 
	{
		printf ("%c", c); 
		c = fgetc(fileptr); 
	} 
  
	fclose(fileptr);

	return 0;
}
