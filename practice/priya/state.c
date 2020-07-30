#include <stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct state
{
	char name[50];
	int population;
	float lit;
	float income;
}State;


void display(State arr[], int max)
{
	printf("\t\tName of the state: ");
	for (int i=0; i<strlen(arr[max].name); i++)
		printf("%c", arr[max].name[i]);
	printf("\n");
	printf("\t\tPopulation: %d\n", arr[max].population);
	printf("\t\tLiteracy rate: %.2f\n", arr[max].lit);
	printf("\t\tIncome: %.2f\n", arr[max].income);
}



int main()
{
	int n;
	printf("Number of states: ");
	scanf("%d", &n);
	State arr[n];
	for (int i=0; i<n; i++)
	{
		printf("Name of the State: ");
		scanf("%s", arr[i].name);
		printf("Population: ");
		scanf("%d", &arr[i].population);
		printf("Literacy rate: ");
		scanf("%f", &arr[i].lit);
		printf("Income: ");
		scanf("%f", &arr[i].income);
	}
	int max_pop=0, max_lit=0, max_inc=0;
	for(int i=0; i<n; i++)
	{
		if(arr[max_pop].population<arr[i].population)
			max_pop = i;
		if(arr[max_lit].lit<arr[i].lit)
			max_lit = i;
		if(arr[max_inc].income<arr[i].income)
			max_inc = i;
	}

	printf("Details of the state with maximum population:\n");
	display(arr, max_pop);

	printf("Details of the state with maximum literacy rate:\n");
	display(arr, max_lit);

	printf("Details of the state with maximum income:\n");
	display(arr, max_inc);
	return 0;
}
