//WAP in C to reverse word having digit in string.		i/p: char s[20]=“coding 123abc vector ptr1”		o/p: char s[20 =”coding cba321 vector 1rtp”
#include<stdio.h>
void rev_digit(char *);
void main()
{
	char s[100];
	printf("enter string");
	scanf("%[^\n]",s);

	rev_digit(s);
	printf("%s",s);
}



void rev_digit(char *s)
{
	char *p,*q,*r,*a;
	p=s;
	q=s;
	int c=0;
	while(*p)
	{
		if(*p==' ' || *p=='\0')
		{
			a=p;
			r=p-1;
			p=q;
			while(*p!=' ')
			{
				c=0;
				if(*p>='0' &&  *p<='9')
				{
					c=1;
					break;
				}
		
				p++;
			}	
		}

		if(c)
		{
			while(q<r)
			{
				char t=*r;
				*r=*q;
				*q=t;
				r++;
				q--;	
			}
			q=a+1;
			r=a+1;	
	}
		p=a+1;
		q=a+1;
		r=a+1;	

	}
}
