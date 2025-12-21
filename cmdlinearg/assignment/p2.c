//WAP in C using CLA to print digit of num.		i/p: ./a.out 123		 o/p : 1
#include<stdio.h>
int my_atoi(const char *);
void main(int argc,char **argv)
{
	int num;
	num=my_atoi(argv[1]);
	printf("fisrt digit of a given num is=%d\n",num);
}

int my_atoi(const char *p)
{
	int num;
	num=num*10+p[0]-48;
	return num;
}
