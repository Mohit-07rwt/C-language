//WAP in C to print first word from string using goto.		i/p: char s[20]=”vector india pvt”;		o/p: vector
//WAP in C to print last word from string using goto.		i/p: char s[20]=”vector india coding ”;		o/p: coding

#include<stdio.h>
void firstword(char *);
void lastword(char *);
void main()
{
	char s[20];
	printf("enter string:");
	scanf("%[^\n]",s);

	firstword(s);
	lastword(s);
}




void firstword(char *s)
{
	int i=0;

	l:
	printf("%c",s[i]);	
	i++;
	
	if(s[i]!=' ')
		goto l;

	printf("\n");
}

void lastword(char *s)
{
	int i=0,l=0,j=0;
	for(i=0;s[i];i++)
		l++;

	i=l-1;
	
l:
	i--;
	if(s[i]!='\0' && s[i]!=' ')
		goto l;

i++;
l1:
	printf("%c",s[i]);
	i++;

	if(s[i]!='\0')
		goto l1;

}
