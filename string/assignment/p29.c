//WAP in C to count vowels in string using do-while .	i/p: s[20]=”abc pqr aeio”	o/p: vowels count= 5

#include<stdio.h>
void count_vowels(char *);
void main()
{
	char s[100];
	printf("enter string: ");
	scanf("%[^\n]",s);

	printf("vowels=");
	count_vowels(s);
}



void count_vowels(char *s)
{
	int i,c=0;
	for(i=0;s[i];i++)
	{
		if(s[i]=='a' ||s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
			c++;

	}

	printf("%d",c);
}
