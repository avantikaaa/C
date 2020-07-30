#include<stdio.h>
void copyfile(FILE *main, FILE *copy)
{
	char ch;
	for(ch = fgetc(main); ch!=EOF; ch = fgetc(main))
		fprintf(copy, "%c", ch);
}
