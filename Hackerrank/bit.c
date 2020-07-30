#include <stdio.h>

int main()
{
    int i, j, max1=0, max2=0, max3=0, k, n;
    scanf("%d %d", &n, &k);
    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            printf("%d %d %d %d %d\n", i, j, i&j, i|j, i^j);
            if(i&j > max1 && i&j < k)
                max1 = i&j;
            if(i|j > max2 && i|j < k)
                max2 = i|j;
            if(i^j>max3 && i^j < k)
                max3 = i^j;
            printf("%d %d %d\n", max1, max2, max3);
        }
    }
    printf("%d\n%d\n%d\n", max1, max2, max3);
    return 0;
}

