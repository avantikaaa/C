#include <stdio.h>
#include <stdio.h>

typedef struct item_sup
{
	char name[50];
	float price;	//base price of one item
	float discount;
	int num;		//number of items
	float one;		//for one item
	float total;	//final price
};

int random_num(int upperlimit)
{
	srand(time(NULL));
	int randomnum=-1;
	randomnum=rand()%upperlimit;
	return randomnum;
}

float discount_calculation(float price, float discount)
{
	int disc = random_num(discount);
	return ((100+disc)/100)*price;
}

int main()
{
	printf("\t\t\tWELCOME\n");			//welcome statement
	int i=1, no_items;
	while(i==1)
	{
		printf("Number of items: ");
		scanf("%d", &no_items);
		printf("Enter item name: ");
		
