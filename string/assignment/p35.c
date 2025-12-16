35.WAP in C to reverse all words in string.		i/p: char s[20]=“coding sirji vector”		o/p:char s[20]= “gnidoc ijris rotcev”

#include<stdio.h>
void rev_str(char *);
void main()
{
	char s[200];
	printf("enter string:");
	scanf("%[^\n]",s);


	rev_str(s);

	printf("%s",s);
}

void rev_str(char *s)
{
	char *p,*q,*r;
	p=s;
	q=s;
	r=s;
	while(*p)
	{
		


		if(*p==' ' || *(p)=='\0')
		{
			if(*(p)=='\0')
				r=p;
			else
				r=(p-1);
			while(q<r)
			{
				char t=*q;
				*q=*r;
				*r=t;
				q++;
				r--;
			}
			q=(p+1);
		}

		p++;

	}
}
