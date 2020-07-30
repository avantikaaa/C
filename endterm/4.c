#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char n[100], m[100], out[102];
	scanf("%s", n);
	scanf("%s", m);
	int l1 = strlen(n);
	int l2 = strlen(m);
	int i, sum, carry=0;
	for(i=1; i<=l1 && i<=l2; i++)
	{
		sum = n[l1-i]+m[l2-i]-96+carry;
		carry = sum/10;
		sum = sum%10;
		out[i-1] = '0'+sum;			//Type-casting the integer to a character
	}
	if(i==l2)
	{
		for(i=l2+1; i<=l1; i++)
		{
			sum = n[l1-i]-48+carry;
			carry = sum/10;
			sum = sum%10;
			out[i] = '0'+sum;		//Type-casting the integer to a character
		}
	}
	else
	{
                for(i=l1+1; i<=l2; i++)
                {
                        sum = m[l2-i]-48+carry;
                        carry = sum/10;
                        sum = sum%10;
                        out[i] = '0'+sum;		//Type-casting the integer to a character
                }
        }
	if(l1>l2)
		l2 = l1;

	while(i>=0)					//Printing the output
	{
		int d = out[i]-48;
		if(d>0)
			printf("%d", d);
		else
			printf("0");
		i--;
	}
	printf("\n");
	return 0;
}
