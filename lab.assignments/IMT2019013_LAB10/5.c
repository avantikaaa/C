//INPUT : degrees of 2 polynomials and their co-efficients(highest degree first)
//product: Sum and product of the 2 polynomials
#include <stdio.h>
#include<string.h>
int main()
{
	int i, j;
	int deg1, deg2;
	scanf("%d", &deg1);			//INPUT: Degree of the first polynomial
	double poly1[deg1+1];
	for (i=deg1; i>=0; i--)			//INPUT: Co-efficients of the first polynomial
		scanf("%lf", &poly1[i]);

	scanf("%d", &deg2);			//INPUT: Degree of the second polynomial
	double poly2[deg2+1];
	for (i=deg2; i>=0; i--)			//INPUT: Co-efficients of the second polynomial
		scanf("%lf", &poly2[i]);

//ADDITION
	if(deg1>deg2)
	{
		double sum[deg1+1];
		for(i=0; i<=deg2; i++)		//Adds the co-efficients of 'i'th degree term
			sum[i] = poly1[i] + poly2[i];
		for(i=deg1; i>deg2; i--)
			sum[i] = poly1[i];

		printf("%d ", deg1);		//OUTPUT: Degree of the polynomial obtained upon addition of the 2 given polynomials
		for(i=deg1; i>0; i--)		//OUTPUT: Array is printed in reverse as the co-efficient of the highest order should be printed first
			printf("%lf ", sum[i]);
		printf("%lf\n", sum[0]);
	}
	else
	{
		double sum[deg2+1];
		for(i=0; i<=deg1; i++)		//Adds the co-efficients of 'i'th degree term
			sum[i] = poly2[i] + poly1[i];
		for(i=deg2; i>deg1; i--)
			sum[i] = poly2[i];

		printf("%d ", deg2);		//OUTPUT: Degree of the polynomial obtained upon addition of the 2 given polynomials
		for(i=deg2; i>0; i--)		//OUTPUT: Array is printed in reverse as the co-efficient of the highest order should be printed first
			printf("%.2lf ", sum[i]);
		printf("%.2lf\n", sum[0]);
	}

//MULTIPLICATION
	double product[deg1+deg2+1];		//An array to store the co-efficients of the product polynomial
	memset(product+0, 0, (deg1+deg2+1)*sizeof(double));	//To initialise all the elements of the array to 0

	for(i=0; i<=deg1; i++)
		for(j=0; j<=deg2; j++)		//Storing the value of the co-efficients
			product[i+j] += poly1[i]*poly2[j];

//Printing of the product
	printf("%d ", deg1+deg2);		//OUTPUT: Degree of the polynomial obtained upon multiplication of the 2 given polynomials
	for (i= deg1+deg2; i>0; i--)		//OUTPUT: Array is printed in reverse as the co-efficient of the highest order should be printed first
		printf("%.2lf ", product[i]);
	printf("%.2lf\n", product[0]);

	return 0;
}

