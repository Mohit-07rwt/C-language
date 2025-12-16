//40. WAP in C to count each char in string .		i/p: char s[20]=”1213ac1c”;		o/p: 1 --> 3 , 2--> 1,3-->1 ,a-->1 ,c-->2

#include<stdio.h>
void count_chr(char *);
void main()
{
	char s[100];
	printf("enter string");
	scanf("%[^\n]",s);

	count_chr(s);

}

void count_chr(char *s)
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
