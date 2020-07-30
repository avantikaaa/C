#include <stdio.h>
#include<stdlib.h>

int main()
{
	FILE *file1, *file2, *file3;
	file1 = fopen("file1", "r");
	file2 = fopen("file2", "r");
	file3 = fopen("file3", "w");

	system("cat file1 file2>file3");

	fclose(file1);
	fclose(file2);
	fclose(file3);

	return 0;
}
