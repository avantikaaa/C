#include<stdio.h>
int main()
{
    int a[5] = {0,0,0,0,0};
    int n;
    scanf("%d", &n);
    int b[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
        a[b[i]-1]++;
    }
    int max = 4;
    for(int i=4; i>=0; i--)
    {
        if(a[max]<=a[i])
            max = i;
    }
    printf("%d", max+1);
}
