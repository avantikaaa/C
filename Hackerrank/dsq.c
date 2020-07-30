#include<stdio.h>
#include <math.h>

int main()
{
    int k, a, b, s1, s2;
    scanf("%d", &k);
    for(int ii=0; ii<k; ii++)
    {
        scanf("%d %d", &a, &b);
        s1 = sqrt(a+1);
        s2 = sqrt(b);
//printf("%d %d %d\n", a, s1, s1*s1);
        if(s1*s1>=a)
        {
        	s1--;
        }
 //       if(s2==sqrt(
        printf("%d\n", s2-s1);
    }
    return 0;
}
