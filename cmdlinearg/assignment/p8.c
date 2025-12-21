//WAP in C using CLA to reverse string .	i/p : ./a.out “123 789 CBA"	 o/p: ABC 987 321 
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	char *p;
	p=argv[1];
	
	while(*p)
	{
		printf("%c",*p);
		p++;
	}

	p--;
	printf("\n---in reverse\n");
	while(p>=argv[1])
	{
		printf("%c",*p);
		p--;
	}

}
