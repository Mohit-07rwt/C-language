//14.WAP in C to delete 0th index char from string.	i/p: char s[20]=”coding sirji”;		o/p: oding sirji

#include<stdio.h>
void main()
{
	char s[20],*p;
	printf("enter string: ");
	scanf("%[^\n]",s);

	p=s;
	while(*p)
	{
		*p=*(p+1);
		p++;
	}

	*p='\0';

printf("%s",s);

}
