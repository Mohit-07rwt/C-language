//WAP in C using Recursive function to sum of  last 3 digits of given any int number .		i/p: n= 23456 o/p: sum= 15

#include<stdio.h>
int rec_fun_sum(int num,int c);

void main()
{
	int num,c;
	printf("enter number:");
	scanf("%d",&num);

	printf("enter sum of how many digit you want:");
	scanf("%d",&c);
	int sum;

	sum=rec_fun_sum(num,c);
	printf("sum of %d digit =%d",c,sum);
}


int rec_fun_sum(int num ,int c)
{
	int r;
	static int count=0,sum=0;
	if(num!=0 && count<c)
	{
		{	
			r=num%10;
			sum=sum+r;
			count++;
			rec_fun_sum(num/10,c);
		}
	}
	return sum;
	
}
