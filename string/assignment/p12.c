//WAP in C to delete desired char from string.	i/p:char s[20]=”acbcccab” , ch = ‘c	 o/p: abab

#include<stdio.h>
void main()
{
	char s[20],*p, *q,ch;
	printf("enter string");
	scanf("%[^\n]",s);

	printf("enter character: \n");
	scanf(" %c",&ch);
	
	p=s;
	q=s;
	int c=0;

	while(*p)
	{
		if(*p!=ch)
		{
			*q++=*p;
		}	
		p++;
	}	
	
	*q='\0';

	printf("string= %s",s);
		
}
