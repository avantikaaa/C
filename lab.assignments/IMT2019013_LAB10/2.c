//INPUT : A set of characters and strings to execute a "minprint function"
//OUTPUT: The entered characters and integers displaed on the terminal
#include<stdarg.h>
#include <stdio.h>

void minprint (char *fmt, ...)				//The main function
{
	va_list ap;					//Variable 'ap' will be used to traverse the list
	char *p, *str;
	int integer;
	va_start(ap, fmt);				//To make 'ap' point to the first argument
	for(p=fmt; *p; p++)
	{
		if(*p!='%')
		{
			putchar(*p);
			continue;
		}
		switch (*++p)
		{
			case 'd':			//If the argument is of type "int"
				integer = va_arg(ap, int);
				char *tmp;
				*tmp = 'a';
				while(integer>0)	//To convert the integer to a character
				{
					tmp++;
					*tmp = ('0'+integer%10);
					integer  = integer/10;
				}
				while (*tmp!='a')
				{
					putchar(*tmp);
					tmp--;		//Since the digits of the integer are stored in the reverse order
				}
				break;
			case 's':			//If the argument is of type "string"
				for(str=va_arg(ap, char *); *str; str++)
					putchar(*str);
				break;

			default:			//If the argument is of type "char"
				putchar(*p);
				break;
		}
	}
	putchar("\n");
	va_end(ap);
}

int main()
{
	minprint("%d %d %s", 2, 14, "abcd");		//Calling of the function-> In that format.
	return 0;
}
