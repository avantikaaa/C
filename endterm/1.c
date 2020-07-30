#include <stdio.h>
#include <math.h>
struct point
{
	float x;
	float y;
	float z;
};
double Euclidean_distance(struct point p1, struct point p2)
{
	double sum;
	sum += (p1.x-p2.x)*(p1.x-p2.x);
	sum += (p1.y-p2.y)*(p1.y-p2.y);
	sum += (p1.z-p2.z)*(p1.z-p2.z);
	return sqrt(sum);
}

double Chebyshev_distance(struct point p1, struct point p2)
{
	double x = fabs(p1.x-p2.x);	//Takes the absolute difference
	double y = fabs(p1.y-p2.y);
	double z = fabs(p1.z-p2.z);
	int max = x;
	if(y>max)
		max = y;
	if(z>max)
		max = z;
	return max;
}

double Manhattan_distance(struct point p1, struct point p2)
{
	double x = fabs(p1.x-p2.x);	//Takes the absolute difference
        double y = fabs(p1.y-p2.y);
        double z = fabs(p1.z-p2.z);
	return (x+y+z);
}
int main()
{
	struct point p1, p2;
	scanf("%f %f %f", &p1.x, &p1.y, &p1.z);
	scanf("%f %f %f", &p2.x, &p2.y, &p2.z);
	int n;
	scanf("%d", &n);
	double output;
	if(n==1)		//The distance to be calculated
		output = Euclidean_distance(p1, p2);
	else if(n==2)
		output = Chebyshev_distance(p1, p2);
	else if(n==3)
		output = Manhattan_distance(p1, p2);
	printf("%.2lf\n", output);
	return 0;
}
