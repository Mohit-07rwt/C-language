//WAP in C using CLA to print strong number b/w  1 to 199 . 	i/p: ./a.out 1 199 
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

	int r,temp=0,f=1;
	

	for(i=num1;i<num2;i++)
	{
		temp=i,sum=0;
		for(;temp;temp=temp/10)
		{
			f=1;
			r=temp%10;
			for(j=1;j<=r;j++)
			{
				f=f*j;	
			}
			sum=sum+f;
		}
		if(sum==i)
			printf("%d  ",i);
	}
}

