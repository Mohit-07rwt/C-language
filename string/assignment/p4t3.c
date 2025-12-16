//44.WAP n C to reverse word lenght > 4 in string.	i/p: char s[20]=“ias abcde mkdir ”;		o/p:char s[20= “ias edcba irdkm ”;
#include<stdio.h>
void rev(char *);
void main()
{
	char s[100];
	printf("enter string: ");
	scanf("%[^/n]",s);


	rev(s);
}

void rev(char *s)
{
	char *p=s;
	char *r=s;
	char *q=s;
	int c=0;
	while(*p)
	{
		q = p;
		while(*p !=' ' &&  *p != '\0')
		{
			c++;
			p++;
		}
		printf("%d",c);
		printf("%c",*(p-1));
		if(c>3)
		{
			r=p-1;
			while(q<r)
			{
				char t=*q;
				*q=*r;
				*r=t;

				q++;
				r--;
			}
		}	
		c=0;
		p++;
	}
	printf("%s",s);
}
