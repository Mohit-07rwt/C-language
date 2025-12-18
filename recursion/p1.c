//WAP in C using Recursive function to sum of even digits of given any int number .	i/p: n= 2345  o/p: sum=6	int rec_fun_sum( int num );

#include<stdio.h>
int rec_fun_sum( int);

void main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);

	int sum;
	sum=rec_fun_sum(num);
	printf("sum=%d :",sum);
	

}

int rec_fun_sum(int num)
{
	int r;
	static int sum=0;
	
	if(num)
	{
		r=num%10;
		if(r%2==0)
			sum=sum+r;
		
		rec_fun_sum(num/10);	
		
	}
	return sum;
}
