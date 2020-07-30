//INPUT : 2 numbers and the operation to be performed.
//OUTPUT: The operation performed on the 2 numbers.
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]) 
{ 
	if(argc==4)						//Evaluates only when 4 inputs are given in the terminal
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		printf("%d\n", argc);
		if(argv[3][0]=='+')				//Operation is addition.
			printf("%d\n", num1+num2);
	
		else if(argv[3][0]=='-')			//Operation is subtraction.
			printf("%d\n", num1-num2);
	
		else if(argv[3][0]=='/')			//Operation is division.
		{
			if(num2!=0)
				printf("%d\n", num1/num2);
		}
	
		else						////Operation is multiplication.
			printf("%d\n", num1*num2);
	}
    return 0; 
} 
