//WAP in C using CLA to count digit in string.		i/p: ./a.out gd53gd82js		o/p: count= 4 
#include<stdio.h>
#include<string.h>
void main(int argc,char ** argv)
{
	char *s;
	s=argv[1];

	printf("%s",s);
	int c=0;

	while(*s)
	{
		if((*s)>='0' && (*s)<='9')
			c++;
		s++;
	}
	printf("\n%d",c);

}
