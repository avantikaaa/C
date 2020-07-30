#include <stdio.h>
#include<stdlib.h>

struct list
{
	int num;
	struct list *next;
}*head, *end;



void printlist(struct list * head) 
{

	struct list * temp ;
	temp = head ;
	while(temp!=NULL)
	{
		printf("%d-->" , temp->num );
		temp = temp->next ;
	}
	
	printf("NULL\n") ;



}


void scanlist(int n)
{
	struct list *tmp, *ptr;
//	int input;
	head = (struct list *)malloc(sizeof(struct list));
	scanf("%d", &head->num);
//		scanf("%d", &input);
//		head->num = input;
		tmp = head;

		for(int i=1; i<n; i++)
		{
			ptr = (struct list *)malloc(sizeof(struct list));
			if(ptr!=NULL)
			{
				scanf(" %d", &ptr->num);
			//	ptr->num = input;
				ptr->next = NULL;
				tmp->next = ptr;
				tmp = tmp->next;
			}
		}

}


void scanlist2(int n)
{




}






























/*
struct list *end;
end = (struct list *)malloc(sizeof(struct list));
*/

int reverselist(int n)
{
	struct list *tmp1, *tmp2;
	if(n<3)
	{
		if(n<2)
		{
			end = head;
			return 0;
		}
		end = head->next;
		end->next->num = head->num;
		return 0;
	}
	tmp1 = head;
	while(tmp1->next!=NULL)
		tmp1 = tmp1->next;
	end = tmp1;
	tmp2 = end;
	while(head->next!=NULL)
	{
		tmp1 = head;
		while(tmp1->next->next!=NULL)
			tmp1 = tmp1->next;
		tmp2->next = tmp1->next;
		tmp1->next = NULL;
		tmp2 = tmp2->next;
	}
	tmp2->next->num = head->num;	
}

int main()
{
	int n;
	scanf("%d", &n);
	scanlist(n);

	printf("The entered list is:\t");
	printlist(head);

//	reverselist(n); 
//	printf("Reversed list: \t");
//	printlist(head);
	return 0;
}
