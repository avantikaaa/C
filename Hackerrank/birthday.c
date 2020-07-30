#include <stdio.h>

int main()
{
    int d, m, n, i, j, out=0;
    scanf("%d", &n);
    int choco[n];
    for(i=0; i<n; i++)
        scanf("%d", &choco[i]);
    scanf("%d %d", &d, &m);
 //   out = n-m+1;
    for(i=0; i<=n-m; i++)
    {
        int sum=0;
//        printf("%d %d ", sum, i);
        for(j=i; j<i+m; j++)
        {
            sum += choco[j];
        }
        if(sum==d)
//	        printf("%d\n", sum);
	        out++;
        
        
/*
        if(sum==d);
        {
            out++;
            printf("%d %d %d\n", d, sum, i);
        }
*/


    }
    
    printf("%d", out);
}
