#include<string.h>
#include <stdio.h>
void writefile(FILE *file)
{
	char ch[100];
	while(strlen(gets(ch))>0)
	{
		fputs(ch, file);
		fputs("\n", file);
	}
}
