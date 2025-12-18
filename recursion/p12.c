//WAP in C using Recursive fun to reverse string .	i/p: char s[20]=”123 abc 789”;		o/p: 987 cba 321

#include<stdio.h>
#include<string.h>
void rev(char *,char *);
void main()
{
	char s[20],*p;
	printf("enter string: ");
	scanf("%[^\n]",s);
	
	int len = strlen(s);
	p = s + (len-1);

	rev(s,p);
	printf("%s",s);
}

void rev(char *p,char *q)
{
	if(p<q)
	{
		char t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
		rev(p,q);
	}
}

