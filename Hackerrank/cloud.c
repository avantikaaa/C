#include <stdio.h>

int main()
{
    int n, k, e=100;
    scanf("%d %d", &n, &k);
    int a[n];
    scanf("%d", &a[0]);
    for(int i=1; i<n; i++)
        scanf(" %d", &a[i]);
    int i=k%n;
    while(i!=0)
    {
        e--;
        printf("%d ", i);
        if(a[i]==1)
            e -= 2;
        i = (i+k)%n;
    }
    e--;
    if(a[0]==1)
        e -= 2;
    printf("\n%d\n", e);
}
