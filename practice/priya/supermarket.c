#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>
int tax(int upperlimit)
{
	srand(time(NULL));
	int randomnum=-1;
	randomnum=rand()%upperlimit;
	return randomnum;
}
void items(int bill_no)
{
	int no_of_items;
	printf(" \n Enter numbers of items : ");
	scanf("%d",&no_of_items);
	char item_name[100];
	char item_code[5];
	char type;
	int i=1,n,dis,j=0;
	float unitcost,discountpercent,discount,base;
	long long int finalprice;
	int arr[no_of_items];
	while(no_of_items!=0)
	{
		printf(" \nEnter item name and item code-%d : ",i);
		scanf("%[^\n]%*c", item_name);			//gets may give segmentation fault
		scanf("%[^\n]%*c", item_code);
		printf("\n Enter E if the product is an eatable \n Enter N if its a non-eatable ");
		scanf(" %c",&type);
		printf(" Enter quantity : ");
		scanf("%d",&n);
		printf(" \nEnter cost of one unit : ");
		scanf("%f",&unitcost);
		base=unitcost*n;
		printf("\n BASE PRICE = %f ",(unitcost*n));
		printf("\n Enter 1 if discount is applicaple else enter 0 : ");
		scanf("%d",&dis);
		if(dis==1)
		{
			printf(" enter discount percentage = ");
			scanf("%f",&discountpercent);
			printf(" price after discount =%f ",(unitcost*n)*(1-(discountpercent/100)));
			 discount=(unitcost*n)*(1-(discountpercent/100));
		}
		else if(dis==0)
		{	printf("discount not applicable");
			discount=unitcost*n;
		}
		int taxpercent=tax(13);			//total GST -> 10% (cgst+sgst)
		printf(" \n tax percent = %d",taxpercent);
		finalprice=discount+(discount*(taxpercent/100));
		printf("\n net price : %lld ",finalprice);
		arr[j]=finalprice;
		j++;
		i++;
		no_of_items--;

	}
	float net=0;
	for(j=0;j<n;j++)
	{
		net=net+arr[j];
	}
	printf("\n GRAND TOTAL = %f ",net);
}

int main()
{
	int dd,mm,yyyy;
	printf("  Enter today's date in dd-mm-yyyy format : ");
	scanf("%d-%d-%d",&dd,&mm,&yyyy);
	printf("\n\t\t\t\t WELCOME TO VASAVI SUPERMARKET \t\t\t\n");
	int bill_no=0,i=1,next;
	typedef struct
	{
		char name[30];
		int phone_no;
	}details[100];
	details customer;
	do
	{
		printf("\t\t BILL NUMBER - %d\n\n ",i++);
		printf(" Enter customer's name : \n");
		scanf("%s",customer[bill_no].name);
		printf("\n Enter their phone number : ");
		scanf("%d",&customer[bill_no].phone_no);
		items(bill_no);
		printf("\n to visit the next customer enter 1\n or enter 0");
		scanf("%d",&next);
	}while(next==1);
	return 0;
}
