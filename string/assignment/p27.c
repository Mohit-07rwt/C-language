//WAP in C to reverse 1st word in string using pointer.		i/p: char s[20]=”vector india pvt”;		o/p: rotcev india pvt
//28. WAP in C to reverse last word in string 		i/p: char s[30]=”vector india coding 123”;		o/p: vecor india coding 321

#include<stdio.h>
void last_wrd_rev(char *);
void first_wrd_rev(char *);
void main()
{
	char s[100];
	printf("enter string:");
	scanf("%[^\n]",s);
	printf("lastwrd rev:\n:");
	last_wrd_rev(s);
	printf("\n");
	printf("fisrt rev:\n");
	first_wrd_rev(s);
}


void last_wrd_rev(char *s)
{
	int i=0,l=0;
	for(i=0;s[i];i++,l++);


	for(i=l-1;s[i]!=' ';i--)
		printf("%c",s[i]);
		

}
void first_wrd_rev(char *s)
{
	int i=0,l=0;
	for(i=0;s[i]!=' ';i++,l++);

	for(i=l-1;s[i]>0;i--)
		printf("%c",s[i]);
		
}



