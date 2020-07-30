#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    scanf("%[^\n]", s);
    int l = strlen(s);
    for(int i=0; i<l; i++)
    {
        char *ch;
	ch = (s+i);
        if( ch ==" ")
            printf("\n");
        else
            printf("%c", *ch);
    }
    return 0;
}
