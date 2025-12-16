//21.WAP in C to count words in given string using goto.	i/p:char s[20]=”hi 5 #$2 cs”;		o/p: word count= 4

//23.WAP in C to print all word lenght in string .	i/p: char s[20]= ”vector india pvt ” 	o/p: 6 5 3

#include<stdio.h>

void count_words(char *);
void main()
{
	char s[100];
	printf("enter character:");
	scanf("%[^\n]",s);
	
	count_words(s);
}



void count_words(char *s)
{
	int i,c=0,w=0;
l:
	c=0;
l1:
		printf("%c",s[i]);
		c++;
		i++;	

	if(s[i]!=' ' && s[i]!='\0')
goto l1;

	w++;
	printf(" : %d",c);
	printf("\n");

i++;	
if(s[i])
goto l;

printf("total words = %d",w);






/*	int i,c=0,w=0;
	for(i=0;s[i];i++)
	{
		c=0;
		while(s[i]!=' ' &&  s[i]!='\0')
		{
			printf("%c",s[i]);
			c++;
			i++;
		}
		w++;
		printf(" : %d",c);
		printf("\n");
	}
	printf("total words=%d",w);
*/
}
