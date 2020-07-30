#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *fp, *fc;
	char s;
	fp = fopen("main", "r");
	fc = fopen("copy", "w");
	for(s=fgetc(fp); s!=EOF; s=fgetc(fp))
		fprintf(fc, "%c", s);
	fclose(fp);
	fclose(fc);
	fc = fopen("copy", "r");
	for(s=fgetc(fc); s!=EOF; s=fgetc(fc))
		putchar(s);
	
	return 0;
}
