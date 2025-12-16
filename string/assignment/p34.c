//34.WAP in C to count duplicate char from string.	i/p: s[20]=”aaababcdeb”		o/p: a-->4 times b-->3 times

#include<stdio.h>
void count_dublicate(char *);
void main()
{
	char s[200];
	printf("enter string");
	scanf("%[^\n]",s);

	count_dublicate(s);

}

void count_dublicate(char *s)
{
	int c=0,chk=0;
	char *p,*q,*k;
	p=s;
	while(*p)
	{
		c=0;
		q=s;
		while(q<p)
		{
			if(*p==*q)
			{
				chk=1;
				break;
			}
			q++;
		}	
	
		if(chk==1)
		{
			p++;
			continue;
		}
		

		k=p;
		while(*k)
		{
			if(*k==*p)
				c++;
			k++;
		}

		


		printf("%c-->%d",*p,c);
		printf("\n");
		p++;
	}

}



