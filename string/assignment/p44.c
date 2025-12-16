//44.WAP in C to check substring is present in a main string or not using nested while loop.	i/p: char m[20]=”123 abc”, s[10]=”abc”;		o/p: yes

#include<stdio.h>
int ckhstr(char *,char *);
void main()
{
	char s1[100],s2[100];
	printf("enter string: \n");
	scanf("%[^\n]",s1);

	printf("enter string: \n");
	scanf("%s",s2);
	
	if(ckhstr(s1,s2))
		printf("string found");

}
int ckhstr(char *s1,char *s2)
{
	char *p,*q,*r;
	p=s1;
	q=s2;
	

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
			return 1;		
		p++;
	}
}
