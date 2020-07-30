#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);
    int a[10];
    memset(a+0, 0, 10*sizeof(int));
    for (int i=0; i<strlen(s); i++)
    {
        if( (int)s[i]>47 && (int)s[i]<58)
        {
            int num = atoi(s[i]);
            a[num]++;
        }
    }
    for(int i=0; i<10; i++)
        printf("%d ", a[i]);
    return 0;
}

