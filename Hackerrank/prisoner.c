#include <stdio.h>
#include<stdlib.h>

struct people
{
    int number;
    struct people *next;
}*head;

int main()
{
    int m;
    scanf("%d", &m);
    for(int mn=0; mn<m; mn++)
    {
        int n, sweets, chair;
        scanf("%d %d %d", &n, &sweets, &chair);
        head = (struct people *)malloc(sizeof(struct people));
        struct people *tmp1, *tmp2;
        tmp1 = (struct people *)malloc(sizeof(struct people));
        head->number = 0;
        head->next = NULL;
        tmp1 = head;
	for(int i=1; i<=n; i++)
	{
		tmp2 = (struct people *)malloc(sizeof(struct people));
		tmp2->number = i;
		tmp2->next = NULL;
		tmp1->next = tmp2;
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}
        tmp1->next = head->next;
        for(int i=1; i<chair; i++)
        {
            head = head->next;
        }
        for(int i=0; i<sweets; i++)
            head = head->next;
        printf("%d", head->number);
    }
}
