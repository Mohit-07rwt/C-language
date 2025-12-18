//WAP in C using Recursive function to count char in given any string .		i/p: char s[20]=”123 aacc tata ”; , ch= ‘a’	o/p: count = 4

#include<stdio.h>
int rec_fun_count_string( char *, char);
void main()
{
	char s[20],ch;
	printf("enter string:");
	scanf("%[^\n]",s);
	
	printf("enter character: ");
	scanf(" %c",&ch);
	

	printf("count= %d",rec_fun_count_string(s,ch));
}

int rec_fun_count_string( char *p, char ch )
{
	
	static int c=0;
	if(*p)
	{
		if(*p==ch)
			c++;

		p++;	
		rec_fun_count_string(p,ch );
	}
	return c;
}
