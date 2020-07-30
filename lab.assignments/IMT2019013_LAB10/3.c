//INPUT : No input required
//OUTPUT: Writes the current date and time to file1 and file2, with a difference of 5 seconds
#include <stdio.h>
#include<unistd.h>			//For executing unix commands from terminal
#include<stdlib.h>			//For the "sleep" function

int main()
{
	FILE *file1, *file2;
	file1 = fopen("file1", "w");	//Opens file1 in 'write' mode
	file2 = fopen("file2", "w");	//Opens file2 in 'write' mode

	system("date>file1");		//Unix command to write to a file
	sleep(5);			//Waits for '5' seconds before executing the next commands
	system("date>file2");

	fclose(file1);
	fclose(file2);

	file1 = fopen("file1", "r");
	file2 = fopen("file2", "r");

	system("cat file1 file2");

	fclose(file1);
	fclose(file2);		

	return 0;
}
