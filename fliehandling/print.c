#include<stdio.h>
void printfile(FILE *file)
{
	char ch = fgetc(file);
	while(ch!=EOF)
	{
		putchar(ch);
		ch = fgetc(file);
	}
}
