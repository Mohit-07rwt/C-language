//18. WAP in C to insert a char at 2nd index in string .	i/p: char s[10]=”abcdef” , in=2 , ch=’9’;	o/p: ab9cdef

//19. WAP in C to insert ‘p’ at 0th pos in same string .	i/p: char s[10]=”123456”, ch=’p’;	o/p: p123456

//20. WAP in C to insert ‘p’ at 0th index , ‘q’ at 1st		index in same string using goto .	i/p: char s[10]=”123456”	o/p: pq123456

#include<stdio.h>
void insertch(char [],char,int);
void main()
{
	char s[20],ch,ans;
	int index;

	printf("enter string:  ");
	scanf("%[^\n]",s);
l:
	printf("enter character:  ");
	scanf(" %c",&ch);

	printf("enter index  ");
	scanf("%d",&index);
		
	insertch(s,ch,index);
	printf("after= %s\n",s);

	printf("want to insert more elements: 'y'  or 'n'");
	scanf(" %c",&ans);

	if(ans=='y')
	goto l;

}


void insertch(char s[],char ch,int index)
{

	int i=0,l=0;
	for(i=0;s[i];i++)
		l++;

	for(i=l+1;i>index;i--)
	{
		s[i]=s[i-1];
	}
	s[index]=ch;

}
