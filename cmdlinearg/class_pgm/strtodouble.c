#include<stdio.h>
#include<stdlib.h>
int my_atod(char *);
void main(int argc,char **argv)
{
	int num;
	my_atod(argv[1]);
	//printf("double= %d\n",num);
}

int my_atod(char *p)
{
	char *q=p;
	while(*q)
		q++;
	q--;

	int i,num=0,num2=0,c=1;
	if(p[0]=='-' || p[0]=='+')
		i=1;
	else
		i=0;

	while(*p)
	{
		if(*p>='0' && *p<='9')
			num=num*10+*p-48;

		else
			break;

		p++;
	}
	
	while(*q)
	{
		if(*q>='0' && *q<='9')
		{
			num2=num2+(*q-48)*c;
			c=c*10;
		}
		else
			break;
		q--;
	}
	
	
	printf("c=%d",c);
	printf("num=%d   num2=%d",num,num2);
	
}
