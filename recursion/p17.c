//locate character in string

#include<stdio.h>
int * my_strchr (char *, char);
void main()
{
	char s[20],ch;
	printf("enter string:");
	scanf("%[^\n]",s);
		
	printf("enter character you want to search: ");
	scanf(" %c",&ch);

	int i;	
	i=(my_strchr(s,ch));
	if(i)
		printf("character fount at %d",i);
	else
		printf("not found");

}


int *my_strchr ( char *p, char ch )
{
	static int i;
	if(p[i]!=0)
	{
		if(p[i]==ch)
		{
			return i;
		}
		i++;	
		my_strchr (p,ch);
	}
	else
		return 0;
}
