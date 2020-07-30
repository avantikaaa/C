#include <stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], max=0, min=0;
    scanf("%d", &a[0]);
    min=a[0];
    max=a[0];
    for(int i=1; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]<min)
            min = a[i];
        else if(a[i]>max)
            max = a[i];
    }
    int b[max-min+1];
    memset(b, 0, (max-min+1)*sizeof(int));
    int m=0;
//printf("%d %d\n ", min, max);
    for(int i=0; i<n; i++)
    {   
        b[a[i]-min]++;
        if(b[a[i]-min]>m)
            m = b[a[i]-min];
    }
 /*/   for(int i=0; i<max-min+1; i++)
    	printf("%d ", b[i]);
    printf("\n");*/
    printf(" %d", n-m);
}
