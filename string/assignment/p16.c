//WAP in c to delete digits from string .	i/p: char s[20]=”covid19 a12b”;		o/p: covid ab

#include<stdio.h>

void delete_digit(char []);
void main()
{
	char s[20];
	printf("enter string");
	scanf("%[^\n]",s);


	delete_digit(s);
	printf("after= %s",s);
}


void delete_digit(char s[])
{
	char *p,*q;
	p=s;
	q=s;
	
	while(*p)
	{
		if(*p>='0' && *p<='9' )
			p++;
		else
		{
			*q++=*p++;

		}


	}
	*q='\0';
}
