//INPUT : Real and imaginary parts of 2 complex numbers separated by space.
//OUTPUT: Sum, difference and product of the 2 complex numbers.
#include <stdio.h>
struct complex						//Structure of the complex number
{
	float re;
	float im;
};

int main()
{
	struct complex num1;
	struct complex num2;

	//INPUT:
	scanf("%f %f", &num1.re, &num1.im);		//1st number
	scanf("%f %f", &num2.re, &num2.im);		//2nd number

	struct complex add = {.re=num1.re+num2.re, num1.im+num2.im, .im=num1.im+num2.im};
	struct complex sub = {.re = num1.re-num2.re, .im = num1.im-num2.im};
	struct complex pro = {.re = ((num1.re*num2.re)-(num1.im*num2.im)), .im = ((num1.re*num2.im)+(num2.re*num1.im))};

	//OUTPUT:
	printf("%.2f + %.2fi\n", add.re, add.im);	//Prints sum of the 2 numbers
	printf("%.2f + %.2fi\n", sub.re, sub.im);	//Prints difference of the 2 numbers
	printf("%.2f + %.2fi\n", pro.re, pro.im);	//Prints product of the 2 numbers
	return 0;
}

