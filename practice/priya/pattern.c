#include <stdio.h>
#include<stdlib.h>
int main(int argc, char*argv[])
{
	FILE *target, *source;

	target = fopen(argv[1], "w");
	source = fopen(argv[2], "r");

	char c = fgetc(source);
	while(c!=EOF)
	{
		fputc(c, target);
		fgetc(source);
	}
	fclose(target);
	target = fopen(argv[1], "r");
	printf(" The contents of the copied file are :\n ");
	c=fgetc(target);
	while(c!=EOF)
	{
		printf("%c",c);
		c=fgetc(target);
	}
		
	fclose(target);
	fclose(source);


	return 0;
}
