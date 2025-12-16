//17. WAP in C to delete prime digit from string.		i/p: char s[20]=”abc3456 567a"

#include<stdio.h>

void delete_primedigit(char []);
void main()
{
	char s[20];
	printf("enter string : ");
	scanf("%[^\n]",s);


	delete_primedigit(s);
	printf("after=   %s ",s);
}


void delete_primedigit(char s[])
{
	char *p,*q;
	p=s;
	q=s;
	int n,i;
	
	while(*p)
	{
		if(*p>='0' && *p<='9' )
		{
			n=*(p)-'0';
			for(i=2;i<n;i++)
				if(n%i==0)
					break;

			if(i==n)
				p++;
			else
				*q++=*p++;


		}

		else
		{
			*q++=*p++;

		}


	}
	*q='\0';
}
