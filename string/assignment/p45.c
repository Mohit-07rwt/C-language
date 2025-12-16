//45. WAP in C to count substring in main string .	i/p: char m[20]=”abcd cd 12cd”, s[5]=”cd”	o/p: count = 3 times
#include<stdio.h>
int ckhstr(char *,char *);
void main()
{
	int c;
	char s1[100],s2[100];
	printf("enter string: \n");
	scanf("%[^\n]",s1);

	printf("enter string: \n");
	scanf("%s",s2);
	
	c=ckhstr(s1,s2);
	printf("string found  count= %d",c);

}
int ckhstr(char *s1,char *s2)
{
	char *p,*q,*r;
	p=s1;
	q=s2;
	int c=0;	

	while(*p)
	{
		q=s2;
		r=p;
		
		while(*r!='\0' && *q!='\0')
		{
			if(*q!=*r)
				break;
			q++;
			r++;
		}
		if(*q=='\0')
			c++;		
		p++;
	}
	return c;
}
