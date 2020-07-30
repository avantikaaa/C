#include <stdio.h>
int main()
{
    int n, k, q, i;
    scanf("%d %d %d", &n, &k, &q);
    int ar[n];
    scanf("%d", &ar[0]);
    for(i=1; i<n; i++)
        scanf(" %d", &ar[i]);
    k = k%n;
    if(k!=0)
    {
        int b[k];
        for(i=0; i<k; i++)
            b[i] = ar[n-k+i];
        for(i=n-1; i>=k; i--)
            ar[i] = ar[i-k];
        for(i=0; i<k; i++)
            ar[i] =b[i];/*
			    for(i=0; i<n; i++)
			        printf("%d ", ar[i]);
			    printf("\n");*/
    }
    
    for(i=0; i<q; i++)
    {
        int m;
        scanf("%d", &m);
        printf("%d\n", ar[m]);
    }
    return 0;
}
