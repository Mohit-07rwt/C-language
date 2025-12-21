#include<stdio.h>
#include<stdlib.h>
double my_atod(char *);
int main(int argc,char **argv)
{
	double num;
	num=my_atod(argv[1]);
	printf("\nfloat= %f\n",num);
}

double my_atod(char *p)
{
	int i,c=0;
	double num=0.0,num2=0.0;
	if(p[0]=='-' || p[0]=='+')
		i=1;
	else
		i=0;

	for(;p[i];i++)
	{

		if(p[i]>='0' && p[i]<='9')
			num=num*10+p[i]-48;
		else
			break;
	}
	i++;

	for(;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
		{
			num2=num2*10+p[i]-48;
			c++;
		}
		else
			break;
	}		


	c=6-c;
	for(i=0;i<c;i++)
	{
		num2=num2*10;

	}

	num2=num2/1000000.0;
	//printf("num=%f  num2=%f",num,num2);
	
	
	num=num+num2;	
	
	//printf("\nnum2=    %f\n",num2);
	//printf("num=    %f",num);

	return num;

}	
