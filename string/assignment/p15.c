//15.WAP in C to delete first 3 char from string.		i/p: char s[10]=”armstrong num”		o/p: strong num

#include<stdio.h>
void deleteupto(char [], int index);
void main()
{
	char s[20];
	int index;
	printf("enter string: ");
	scanf("%[^\n]",s);

	printf("enter index numbr= ");
	scanf("%d",&index);

	deleteupto(s,index);

	
	printf("after = %s",s);
}




void deleteupto(char s[], int index)
{
	char *p;
	p=s;
	int i=index;
	while(s[i]) 
	{
		*p++=s[i]; 
		i++;
	}
	*p = '\0'; 
}
