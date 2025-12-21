//"123+23=135"
#include<stdio.h>
#include<stdlib.h>
char my_itos(char *);
int main(int argc,char **argv)
{
	my_itos(argv[1]);

}


char my_itos(char *p)
{
	
	int num1,num2,i,j=0,sum=0;
	char s[20],op;
	

	num1=atoi(p);

	for(;p[i];i++)
	{
		if(p[i]=='+' || p[i]=='-' || p[i]=='*' ||p[i]=='/')
		{
			op=p[i];
			i++;
			break;
		}
	}
	
	for(;p[i];i++)
	{
		s[j]=p[i];
		j++;
	}

	p[j]='\0';
		

	num2=atoi(s);

	//printf("%s",s);
	printf("num1 = %d  num2=%d ",num1,num2);
	
	sum=num1+num2;
	printf("%d",sum);
}
