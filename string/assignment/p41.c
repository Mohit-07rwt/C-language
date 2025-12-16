//WAP in C to check 2 strings are anagram or not.	i/p: char s1[10]=”2h#p”, s2[10]=”&p2h”;		o/p: Yes both string Anagram
#include<stdio.h>
void chk_anagram(char *,char *);
void main()
{
	char s[100],s2[100];
	printf("enter string : ");
	scanf("%s",s);

	printf("enter string : ");
	scanf("%s",s2);

	chk_anagram(s,s2);
}

void chk_anagram(char *s,char *s2)
{
	char *p=s;
	char *q=s2;
	int c=0;

	while(*p)
	{
		q=s2;
		while(*q)
		{
			if(*p==*q)
			{
				c=1;
				break;
			}
			else
			{
				c=0;
				q++;
			}
		}
	if(c==1)
		p++;
	else
		break;
		
	}
	if(c==1)
		printf("amarong");

	else
		printf("not");
}
