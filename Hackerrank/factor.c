#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int out=0, count, i, j, a[n], b[m];
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(j=0; j<m; j++)
    {
        scanf("%d", &b[j]);
        count = 0;
        for(i=0; i<n; i++)
        {
            if(b[j]%a[i]==0)
                count++;
            else
                break;
        }
        if(count==n)
            out++;
    }
    printf("%d", out);
    
}
