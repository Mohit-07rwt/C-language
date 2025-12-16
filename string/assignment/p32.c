//32.WAP in C to remove conjucutive spaces in string.	i/p: s[20]=”abc   coding   sirji”		o/p: abc coding sirji	

#include<stdio.h>
#include<string.h>
void rem_extra_spaces(char *);
void main()
{
	char s[50];
	printf("enter string");
	scanf("%[^\n]",s);

	rem_extra_spaces(s);
}


void rem_extra_spaces(char *s)
{
	int i,j;
	for(i=0;s[i];i++)
	{
		if(s[i]==' ' && s[i+1]==' ')
		{
			
			for(j=i;j<(strlen(s)-1);j++)
			{
				s[j]=s[j+1];

			}	
			i--;
			
			s[j]='\0';	
		}

	}

	printf("%s",s);

}
