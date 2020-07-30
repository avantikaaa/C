#include <stdio.h>
#include <math.h>
int main()
{
int x1, y1, r1, x2, y2, r2, ab, sum;
float dist, sqr;
scanf (" %d", &x1);
scanf (" %d", &y1);
scanf (" %d", &x2);
scanf (" %d", &y2);
scanf (" %d", &r1);
scanf (" %d", &r2);
ab = fabs(r1 - r2);
sum = r1 + r2;
sqr= (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
dist = sqrt (sqr);
if ( r1 < 0 | r2 < 0)
  {
	printf ("Invalid input\n");
  }
else 
{
	if ( x1==x2 && y1==y2 && r1!=r2)
	{
		printf ("NO\n");
	}     
	else if (ab <= dist && dist <= sum)
	{
		printf ("YES\n");
	}
	else 
        {
		printf ("NO\n");
	}

}
return 0;
}
