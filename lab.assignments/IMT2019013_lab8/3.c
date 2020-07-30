//INPUT  : 2 numbers and an operator
//OUTPUT : num1 (operation) num2
#include <stdio.h>

float add(float num1, float num2)			//Addition
	{
	return (num1+num2);
	}
float sub(float num1, float num2)			//Subtraction
	{
	return (num1-num2);
	}
float multiply(float num1, float num2)			//Multiplication
	{
	return (num1*num2);
	}
float divide(float num1, float num2)			//Division
	{
	return (num1/num2);
	}


int main()
{
	float num1, num2;
	char operation;

	scanf("%f %f %c", &num1, &num2, &operation);	//INPUT

	float output;
	if(operation=='+')				//If operation is addition
	{
		float (*ptr)(float, float) = add;
		output = ptr(num1, num2);
	}
	else if(operation=='-')				//If operation is subtraction
	{
		float (*ptr)(float, float) = sub;
		output = ptr(num1, num2);
	}
	else if(operation=='*')				//If operation is multiplication
	{
		float (*ptr)(float, float) = multiply;
		output = ptr(num1, num2);
	}
	else						//If operation is division
	{	
		float (*ptr)(float, float) = divide;
		output = ptr(num1, num2);
	}
	printf("%.4f\n", output);			//OUTPUT
	return 0;
}
