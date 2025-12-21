#include<stdio.h>
#include<stdlib.h>
char my_itos(int);
int main(int argc,char **argv)
{
        int num;
        num=atoi(argv[1]);

//	char n;
	my_itos(num);
  //     	printf("%d",n);
}

char my_itos(int num)
{
	char n[10];
	int temp=0,i=0,r;
	
	for(;num;num=num/10)
	{
		r=num%10;
		temp=temp*10+r;
	}
//	printf("%d",temp);
	
	
	for(;temp;temp=temp/10)
	{
		r=temp%10;
		n[i]=r+'0';
		i++;
	}
	n[i]='\0';
	printf("%s",n);
//	return n;
}
