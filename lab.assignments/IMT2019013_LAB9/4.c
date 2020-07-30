//INPUT : An integer 'n' and a linked list containing 'n' integers.
//OUTPUT: The inputed list and a linked list containing only the even inputs of the list.
#include <stdio.h>
#include <stdlib.h>
struct number
{
	int num;
	struct number *next;				//Pointer of the next element
}*ptr1;

void printlist()					//Function to print the list
{
	struct number *tmp;
	tmp = ptr1;
        while(tmp!=NULL)				//Prints the list until the last element is "NULL".
        {
            printf("%d-->", tmp->num);
            tmp = tmp->next;
        }
	free(tmp);
	printf("NULL\n");
}

void scanlist(int n)
{
	struct number *ptr2, *tmp;
	int input;
	ptr1 = (struct number *)malloc(sizeof(struct number));

	if(ptr1 != NULL)
	{
		scanf("%d", &input);			//INPUT
		ptr1->num = input;      
		ptr1->next = NULL;			//links the address field to NULL
		tmp = ptr1;
		for(int i=1; i<n; i++)
		{
			ptr2 = (struct number *)malloc(sizeof(struct number));
			if(ptr2!=NULL)
			{
				scanf(" %d", &input);
 
				ptr2->num = input;	//Links value stored in ptr2 to input
				ptr2->next = NULL;	//Links the next value to 'NULL'
 
				tmp->next = ptr2;	//Links tmp to ptr2
				tmp = tmp->next;	//Moves tmp variable to the next value
			}
		}
	}
}

void checkeven(struct number* tmp)			//De-links the odd numbers
{
	struct number *del;
	del = tmp->next;
	tmp->next = del->next;
	free(del);
}
	

void even()						//Function to de-link the odd numbers
{
	struct number *tmp;

	while(ptr1!=NULL)				//Ensures ptr1(1st element) is even.
	{
		if(ptr1->num%2!=0)
			ptr1=ptr1->next;
		else
			break;
	}
	tmp = ptr1;
	while (tmp!=NULL&&tmp->next!=NULL)		//Repeats until the end of the linked list
	{
		if(tmp->next->num%2==0)
			tmp=tmp->next;
		else
			checkeven(tmp);			//Function call
	}
}	


int main()
{
	int n;
	scanf("%d", &n);				//INPUT:Number of elements in the linked list
	scanlist(n);
	printlist();					//OUTPUT: The even numbers present in the linked list.

	even();						//Function call
	printlist();					//OUTPUT: All the even elements of the list


	return 0;
}
