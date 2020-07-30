//INPUT  : 2 strings
//OUTPUT : '0' if the 2nd string is not the last characters of the first string. Else the 2nd string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int strend(char *s, char *t)			//Function
{
	int l1 = strlen(s);
	int l2 = strlen(t);
	int count=0;
	for(int i=0; i<l2; i++)			//If even 1 character doesn't match, the loop breaks while returning '0'
		if(*(s+l1-l2+i)!=*(t+i))
			return 0;
	return 1;				//Else, it returns 1
}

int main()
{
	char *s, *t;
	s=(char*)malloc(256*sizeof(char));
	t=(char*)malloc(256*sizeof(char));
	scanf("%s", s);				//INPUT
	scanf("%s", t);
	if(strend(s, t)==1)			//OUTPUT
		printf("%s\n", t);
	else
		printf("0\n");
	return 0;
}
