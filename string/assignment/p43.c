//44.WAP n C to reverse word lenght > 4 in string.	i/p: char s[20]=“ias abcde mkdir ”;		o/p:char s[20= “ias edcba irdkm ”;
//44.WAP in C to reverse word lenght > 4 in string.	i/p: char s[20]=“ias abcde mkdir ”;		o/p:char s[20= “ias edcba irdkm ”;

#include<stdio.h>
void rev4(char *);
void main()
{
	char s[20];
	printf("enter string: ");
	scanf("%[^/n]",s);


	rev4(s);
}

void rev4(char *s)
{
	char *p,*q,*r;
	p=s;
	r=p;
	q=p;

	while(*p)
	{
		int c=0;
		while(*p!=' ' && *p!='\0')
		{
			c++;
			p++;
		}

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
			r=p+1;
			q=p+1;

		p++;
	}
	printf("%s",s);
}
