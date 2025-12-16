//13. WAP in C to delete desired char only 2 times	from right side of given string using while loop.	i/p: char s[20]=”abcccababc” , ch= ‘c’	o/p: abccabab
#include<stdio.h>
void main()
{
	char s[20],ch,*p,*q;
	printf("enrter string: ");
	scanf("%[^\n]",s);

	printf("enter character: ");
	scanf(" %c",&ch);
	int c=0;
	
	
	p=s;
	while(*p)
	{
		p++;
	}

	p--;

	q=p;
	while(*p)
	{
		if(*p==ch && c<2)
		{
			c++;
			q=p;
			while(*(q+1))
			{
				*q=*(q+1);	
				q++;

			}
			*q='\0';

		}
		p--;
	}
	printf("%s",s);
}
