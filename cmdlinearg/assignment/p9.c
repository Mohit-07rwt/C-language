//WAP in C using CLA to insert one char in string at given postion .	 i/p : ./a.out ABCDEF 2 P	o/p : ABPCDi
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc,char **argv)
{
	char *p,chh,s[20];
	
	p=argv[1];
	strcpy(s,p);
	printf("%s\n",s);
	
	int pos;
	

	pos=atoi(argv[2]);
	
	printf("%d\n",pos);

	chh=argv[3][0];
	printf("%c\n",chh);

	int len=strlen(s);
	
	for(int i=strlen;i>=pos;i--)
	{
		s[i+1]=s[i];
	}

	s[pos]=chh;

	printf("\n%s",s);
}
