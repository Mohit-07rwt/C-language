//46. WAP in C deleite substring from main string .	i/p: char m[20]=”abc45 vectorabc”,s[10]=”abc”;	o/p: char m[20]=”45 vector”;
//47. WAP in C delete substring from main string .	i/p: char m[20]=”abc45 78abc”,s[10]=”abc”;	o/p: char m[20]=”45 78”;

#include<stdio.h>
int ckhstr(char *,char *);
void main()
{
	char s1[100],s2[100];
	printf("enter string: \n");
	scanf("%[^\n]",s1);

	printf("enter string: \n");
	scanf("%s",s2);
	
	ckhstr(s1,s2);
	//	printf("string found");

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
		
		if(*q==0)
		{
			while(*r!=0)
			{
				*p++=*r++;
			}

				*p='\0';	
				p=s1;
		}

		p++;

	}
	printf("%s",s1);
}
