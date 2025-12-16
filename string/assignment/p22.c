//WAP in C to Capitalize first letter of word in string.	i/p: char s[30]= “pawan coding sirji ”		o/p: Pawan Coding Sirji

#include<stdio.h>
void capword(char *);
void main()
{
	char s[20];
	printf("enter string:");
	scanf("%[^\n]",s);

	capword(s);
	printf("string= %s",s);
}


void capword(char *s)
{
	int i=0;
	s[0]=s[0]-32;
	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
		{	
			s[i+1]=s[i+1]-32;
		}
	}
}
