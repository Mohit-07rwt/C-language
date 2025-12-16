#include<stdio.h>
void printstring(const char *);
void my_strcpy(const char *,char *);
const char *my_strchr(const char *p,char ch);

//main function to delete character from string 
void main()
{
	char s[20] ,ch,*p,*q;
	printf("enter string ");
	scanf("%[^\n]",s);

	printf("enter a chara");
	scanf(" %c",&ch);

	printstring(s);
	p=s;//holding starting address of a string

	while(q=my_strchr(p,ch))//to search a char
		my_strcpy(q+1,q);

	printstring(s);
}



/* void main()
{
	char s[20] ,d[20],ch;
	printf("enter string");
	scanf("%[^\n]",s);

	printstring(d);

	mystrcpy(s,d);

	printstring(d);
}
*/

const char *my_strchr(const char *p,char ch)
{
	int i;
	while(*p)
	{
		if(*p==ch)
			return p;
		p++;
	}
	return 0;
}

void my_strcpy(const char *s,char *d)
{
	while(*s)
	{
		*d++=*s++;	
	}
	*d='\0';

}

void printstring(const char *p)
{
	//int i;
	//for(i=0;p[i],i++)
	//	printf("%c",p[i]);
	while(*p)
		printf("%c",*p++);
	printf("\n");

}
