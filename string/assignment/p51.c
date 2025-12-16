//51.WAP in C to delete largest word from string.	i/p: char s[20]=”c vector ds coder”	o/p: char s[20]=”c ds coder”

#include<stdio.h>
char* largest(char *s);
void del_largest(char *);
void main()
{
	char s[100];
	//int r;
	printf("enter string\n");
	scanf("%[^\n]",s);
	
	char *r;
	//r=largest(s);
	//printf("%c",*r);
	del_largest(s);
	printf("%s",s);
	
}

void del_largest(char *s)
{
	char *p;
	p=s;
	
	char *r;
	r=largest(s);
	p=r;
	
	while(*p!=' ' && *p!=0)
		p++;

	if(*p==' ')
	{
		p++;
	}
	else
		p=p+0;
	
	while(*p)
	{
		*r++=*p++;
	}
	*r='\0';
}

char* largest(char *s)
{
	char *p,*a,*r;
	p=s;
	int c=0,max=0;
	while(*p)
	{	
		c=0;
		a = p;
		while(*p!=' ' && *p!=0)
		{
			c++;
			p++;
		}
		if(c>max)
		{
			max=c;
			r=a;
		}

		p++;
	}
	return r;	
}
