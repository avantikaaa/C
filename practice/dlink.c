#include <stdio.h>
#include<stdlib.h>

struct number
{
	int num;
	struct number *next;
	struct number *prev;
}*start, *end;

void scanlist(int n)
{
	struct number *ptr2, *tmp;
	int input;
	start = (struct number *)malloc(sizeof(struct number));
	end = (struct number *)malloc(sizeof(struct number));

	if(start != NULL)
	{
		scanf("%d", &input);			//INPUT
		start->num = input;      
		start->next = NULL;			//links the address field to NULL
		tmp = start;
		for(int i=1; i<n-1; i++)
		{
			ptr2 = (struct number *)malloc(sizeof(struct number));
			if(ptr2!=NULL)
			{
				scanf(" %d", &input);
 
				ptr2->num = input;	
				ptr2->next = NULL;	
 
				tmp->next = ptr2;	
				ptr2->prev = tmp;
				tmp = tmp->next;
			}
		}
		scanf("%d", &input);
		end->num = input;
		end->prev = ptr2;
		tmp->next = end;
	}
}

void printlist(struct number *pointer, char n)
{
	struct number *tmp;
	tmp = (struct number *)malloc(sizeof(struct number));
	tmp = pointer;
	while(tmp!=NULL)
	{
		printf("%d->", tmp->num);
		if(n=='s')
			tmp = tmp->next;
		else
			tmp = tmp->prev;
	}
	printf("NULL\n");
}

int main()
{
	int n;
	printf("Number of elements: ");
	scanf("%d", &n);
	scanlist(n);
	printlist(start, 's');
	printlist(end, 'r');
	return 0;
}
