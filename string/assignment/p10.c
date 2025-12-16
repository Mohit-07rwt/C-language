//WAP in C to reverse string using while loop .	i/p: char s[10]=”gnidoc 321”;	 o/p: 123 coding

#include<stdio.h>
void main()
{
	char s[20],*p, *q;
	printf("enter string");
	scanf("%[^\n]",s);
	
	printf("%s\n",s);

	p=s;
	q=p;
	
	while(*q)
	{
		q++;
	}
	q--;
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
