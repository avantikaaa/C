#include <stdio.h>
int main()
{
    int h,m,s;
    char t[2];
    scanf("%d:%d:%d%c%c", &h, &m, &s, &t[0], &t[1]);
    if (t[0]=='p' || t[0]=='P')
    {
        h += 12;
    	if (h==24)
        	h = 12;
    }
    if(t[0]=='A' && h==12)
    	h=0;
    if(h<10)
        printf("0");
    printf("%d:", h);
    if(m<10)
        printf("0");
    printf("%d:", m);
    if(s<10)
        printf("0");
    printf("%d\n", s);
}

