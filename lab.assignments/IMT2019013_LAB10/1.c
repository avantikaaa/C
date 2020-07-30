//INPUT : 'n' integers on the command line
/*OUTPUT: 1. 'n' - the number of aurguments entered
	  2.  Sum of the 'n' integers	*/
#include <stdio.h>
#include <stdlib.h>
int main( int argc, char* argv[])	//INPUT: Taken from the command line
{
	printf("%d ", argc);		//OUTPUT(1): Prints number of arguments entered in the command line
	int sum = 0;
	for (int i=0 ; i<argc; i++)
		sum += atoi(argv[i]);	//Adds the value if the 'i'th integer to the sum of the previous 
	printf("%d\n", sum);		//OUTPUT(2): Prints the sum of the integers
	return 0;
}
