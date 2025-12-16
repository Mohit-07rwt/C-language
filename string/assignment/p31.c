//31. WAP in C to check string is Palindrome or not.	i/p: s[20]= “radar”	o/p: yes

#include<stdio.h>
void pallindrome(char *);
void main()
{
	char s[100];
	printf("enter string:");
	scanf("%s",s);

	pallindrome(s);

}


void pallindrome(char *s)
{
	int i,l=0,j;
	char s1[100];
	for(i=0;s[i];i++,l++);
	
	for(i=l-1,j=0;i>=0;i--,j++)
		s1[j]=s[i];

	s1[j]='\0';
		
	int f=1;
	for(i=l-1,j=0;s1[j];i--,j++)
	{
		if(s[i]!=s[j])
		{
			 f=0;
			printf("not pallindrome");
			break;
		}
	}	
	if(f==1)
		printf("pallindrome");
}
