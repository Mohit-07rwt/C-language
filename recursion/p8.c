//WAP in C using Recursive function to check  given num is prime or not .	i/p: n= 17 o/p: yes prime	

#include<stdio.h>
int rec_fun_prime (int);
void main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
		

	if(rec_fun_prime (num))
		printf("prime number");

	else
		printf("not prime");
	
}


int rec_fun_prime (int num)
{

	static int i=1,c=0;
	if(i<num)
	{
		if(num%i==0)
			c++;
		i++;
		rec_fun_prime(num);
	}
	if(c==1)
		return 1;

	else
		return 0;
}
