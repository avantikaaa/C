#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    //scanf("%*[^\n]%*c", &str);
    scanf ("%s", str);
    int l = strlen(str);
    printf ("%s\n", str);
	printf ("%d\n", l);
    int i, a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, m=0, j=0;
    for (i = 0; i<l; i++)
    {
        if (str[i]=='0')
            {
		a++;
	    }
        else if (str[i]='1')
	{            
		b++;
	}        
	else if (str[i]='2')
            c++;
        else if (str[i]='3')
            d++;
        else if (str[i]='4')
            e++;
        else if (str[i]='5')
            f++;
        else if (str[i]='6')
            g++;
        else if (str[i]='7')
            h++;
        else if (str[i]='8')
            m++;
        else if (str[i]='9')
            j++;
    }
    printf ("%d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h, m, j);
    return 0;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

