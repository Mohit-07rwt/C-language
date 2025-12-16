//49.WAP in C to replace one word with another word	i/p: char s[20]=”ab123 ab78”, s1[10]=”ab”,s2[10]=’cs’		o/p: char s[20]=”cs123 cs78”;

#include<stdio.h>
void replace(char *,char *,char *);
void main()
{
	char s1[200],s2[200],s3[200];
	printf("enter string: ");
	scanf("%[^\n]",s1);


	printf("enter replace substring: ");
	scanf("%[^\n]",s2);

	printf("enter substring: ");
	scanf("%[^\n]",s3);
	replace(s1,s2,s3);

}


void replace(char *s1,char *s2,char *s3)
{
	







}
