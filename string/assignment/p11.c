//wAP in C to reverse first 3 letter from string .	i/p: char s[10]=”gnidoc coding ”;	 o/p: ingdoc codingi

#include<stdio.h>
void main()
{
	char s[20],*p, *q;
	printf("enter string");
	scanf("%[^\n]",s);
	
	printf("%s\n",s);

	p=s;
	q=p;
	q=q+2;

	char t;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		
		p++;
		q--;
	
	}

	printf("%s",s);
	
	
}

