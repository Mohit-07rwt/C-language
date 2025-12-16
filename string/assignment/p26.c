//26. WAP in C to print word ending with letter ‘g’.		i/p: char s[20]=”c ds coding doing”;		o/p: coding doing
#include<stdio.h>
void ltr_g(char *);
void main()
{
	char s[100];
	printf("enter string : ");
	scanf("%[^\n]",s);


	ltr_g(s);
}



void ltr_g(char *s)
{
	int i,j=0;
	for(i=0;s[i];i++)
	{
		if(s[i]=='g' && s[i+1]=='\0')
		{
			for(j;j<=i;j++)
			{
				printf("%c",s[j]);
			
			}
			printf("  \n");
			j=i+1;
		}		

		else if(s[i]==' ' && s[i-1]=='g')
		{
			for(j;j<i;j++)
			{
				printf("%c",s[j]);
			
			}
			printf("  ");
			j=i+1;
		}
		else if(s[i]==' ' && s[i-1]!='g')
			j=i+1;
	}
}

