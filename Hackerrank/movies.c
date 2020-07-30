#include<stdio.h>
#include <math.h>

int rev(int k)
{
    int sum=0;
    while(k>0)
    {
    	sum *= 10;
    	sum += k%10;
    	k = k/10;
    }
    return sum;
}

int main()
{
    int i, j, k;
    int out=0;
    scanf("%d %d %d", &i, &j, &    k);
    for (int m=i; m<=j; m++)
    {
        int f = fabs(m-rev(m));
  //      printf("%d %d %d\n", f, f%k, rev(m));
        if(f%k==0)
        {
 //           printf("%d\n", m);
            out++;
        }
    }
    printf("%d", out);
    return 0;
}
