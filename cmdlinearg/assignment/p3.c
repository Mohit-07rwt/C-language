//WAP in C using CLA to prime number b/w 11 to 66 .	 i/p: ./a.out 11 66
#include<stdio.h>
#include<stdlib.h>
char my_itos(char *);
void main(int argc,char **argv)
{
	my_itos(argv[1]);
}

char my_itos(char *p)
{
	int num1,num2,i=0,j=0,sum=0;
	char s[20],op;

	num1=atoi(p);

	while(p[i]!=' ' &&  p[i]!='\0')
		i++;

	i++;
	
	for(;p[i];i++)
	{
		s[j]=p[i];
		j++;
	}
	p[j]='\0';

	num2=atoi(s);

	printf("num1=%d     num2= %d\n",num1,num2);


	for(i=num1;i<num2;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;

		}
		if(i==j)
			printf("%d  ",j);
	}
}

