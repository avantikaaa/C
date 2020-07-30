#include <stdio.h>
#include<stdlib.h>

struct people
{
	int number;
	struct people *next;
}*head;

int main()
{
	int n, k, i;
	scanf("%d %d", &n, &k);
	struct people *tmp1, *tmp2;
	head = (struct people *)malloc(sizeof(struct people));
	tmp1 = (struct people *)malloc(sizeof(struct people));
	head->number = 0;
	tmp1 = head;
	for(i=1; i<=n; i++)
	{
		tmp2 = (struct people *)malloc(sizeof(struct people));
		tmp2->number = i;
		tmp2->next = NULL;
		tmp1->next = tmp2;
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}
	tmp1->next = head->next;
	while(n>1)
	{
		for(i=0; i<k-1; i++)
			head = head->next;
		tmp1 = head->next;
		head->next = tmp1->next;
		n--;
	}
	printf("%d\n", head->next->number);
}
