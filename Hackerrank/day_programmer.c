//If leap year: 12.09.yyyy
//else: 13.09.yyyy
#include<stdio.h>
int main()
{
    int leap;
    int y;
    scanf("%d", &y);
    if(y==1918)
    {
        printf("26.09.1918");
        return 0;
    }
    if(y%4==0)
    {
        if(y<1918)
            printf("12.09.%d", y);
        else if(y%100!=0)
            printf("12.09.%d", y);
        else if(y%400==0)
            printf("12.09.%d", y);
	else
		printf("13.09.%d", y);
        return 0;
    }
    printf("13.09.%d", y);
    return 0;
}
