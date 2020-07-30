#include <stdio.h>
#include<stdlib.h>

struct number
{
	int num;
	struct number *next;
	struct number *prev;
}*head, *end;

void printlist(struct number *ptr, int k)
{
	struct number *tmp;
	tmp = ptr;
	while(tmp!=NULL)
	{
		printf("%d->", tmp->num);
		if(k==1)
			tmp = tmp->next;
		else
			tmp = tmp->prev;
	}
	printf("NULL\n");
}

void scanlist(int n)
{
	struct number *tmp1, *tmp2;
	int input;
	printf("enter 1 : ");
	scanf("%d", &input);
	head = (struct number *)malloc(sizeof(struct number));
	head->num = input;
	tmp1 = (struct number *)malloc(sizeof(struct number));
	tmp1 = head;
	for(int i=1; i<n-1; i++)
	{
		printf("enter %d : ", (i+1));
		tmp2 = (struct number *)malloc(sizeof(struct number));
		scanf("%d", &input);
		tmp2->num = input;
		tmp2->next = NULL;
		tmp1->next = tmp2;
		tmp2->prev = tmp1;
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}
	end = (struct number *)malloc(sizeof(struct number));
	printf("enter %d : ", n);
	scanf("%d", &end->num);
	end->prev = tmp1;
	tmp1->next = end;
//	free(tmp1);
	free(tmp2);
}
int main()
{
	int n;
	printf("Number of nodes: ");
	scanf("%d", &n);
	scanlist(n);
	printlist(head, 1);
	printlist(end, 2);
	free(end);
	free(head);
	return 0;
}
