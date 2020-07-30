#include <stdio.h>
 
int main()
{
	int count, first, last, middle, n, search, array[10];	//Declaration of the variables
	scanf ("%d", &array[0]);			//Takes the first element of the array
	for (int i=1; i<10; i++)
		scanf(",%d", &array[i]);		//Elements of the array should be separated by commas
	scanf("%d", &search);				//Taking the input of the number that has to be searched in the array using binary operation
	first = 0;					//Index of the first element
	last = 9;					//Index of the last element
	middle = (first+last)/2;
 	count = 0;					//Counter to track the number of times the loop is being executed
	while (first <= last)
	{
		count ++;
		if (array[middle] < search)		//Eliminates the left half of the array
			first = middle + 1;    
		else if (array[middle] == search) 	//Required element
		{
			break;
		}
		else
			last = middle - 1;			//Eliminates the right half of the array
		middle = (first + last)/2;
	}
	if (first > last)
		printf("0 %d\n", count);		//Output
	else
		printf("1 %d\n", count);		//Output
 
   return 0;  
}

