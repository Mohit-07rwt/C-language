// WAP to insert one extra char in string.

//  i/p:   "ebedded"   ,  'm'   , index:1
//  o/p:   "embedded"

#include<stdio.h>
void main()
{
	char s[20],ch;
	int indx;
	printf("enter string:\n");
	scanf("%s",s);


	printf("enter char:\n");
	scanf(" %c",&ch);



	printf("enter pos:\n");
	scanf("%d",&indx);

	int i;
	for(i=sizeof(s);i>indx;i--)
		s[i]=s[i-1];
	s[i]=ch;

printf("after: %s",s);

}
