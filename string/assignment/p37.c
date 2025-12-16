//WAP in C to merge 2 string to another string.		i/p: s1[10]=”12” s2[10]=”ABCD”		o/p : s3[20]=”1A2BCD”
#include<stdio.h>
#include<string.h>
void merge(char *,char *,char *);
void main()
{
	char s[200],s2[200],s3[200];
	printf("enter string");
	scanf("%s",s);

	printf("enter string");
	scanf("%s",s2);

	merge(s,s2,s3);
	printf("%s",s3);
}
void merge(char *s,char *s2,char *s3)
{
	int l,l2;
	char *p,*q,*r;
	p=s;
	q=s2;
	r=s3;
	l=strlen(s);
	l2=strlen(s2);
	
	if(l>l2)
	{
		while(*p)
		{
			if(*q)
			{
				*r++=*p;
				*r++=*q;
			
				p++;
				q++;
			}
			else
				*r++=*p++;
		}
		*r='\0';
	}

	else if(l2>l)
	{
		while(*q)
		{
			if(*p)
			{
				*r++=*p;
				*r++=*q;
			
				p++;
				q++;
			}
			else
				*r++=*q++;
		}
		*r='\0';
	}
}

