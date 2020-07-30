#include <stdio.h>
//#include "all.h"

void copyfile(FILE *main, FILE *copy)
{
	char ch;
	for(ch = fgetc(main); ch!=EOF; ch = fgetc(main))
		fprintf(copy, "%c", ch);
}

void printfile(FILE *file)
{
	char ch = fgetc(file);
	while(ch!=EOF)
	{
		putchar(ch);
		ch = fgetc(file);
	}
}


/*
void writefile(FILE *file)
{
	char ch[100];
	while(strlen(gets(ch))>0)
	{
		fputs(ch, file);
		fputs("\n", file);
	}
}
*/

int main()
{
	FILE *main, *copy;
	copy = fopen("copy","r");

	main = fopen("main", "r");

//	copyfile(main,copy);

	char ch;
	for(ch = fgetc(main); ch!=EOF; ch = fgetc(main))
		fprintf(copy, "%c", ch);

	fclose(copy);
printf("weff\n");

	printfile(main);

	fclose(main);

	return 0;
}
