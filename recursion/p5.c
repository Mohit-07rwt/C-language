//WAP in C using Recursive function to reverse the number of given any int number .	i/p: n= 23456 o/p: rev = 65432	

#include<stdio.h>
int rec_fun_rev( int );
void main()
{
	int num;
	printf("enter num: ");
	scanf("%d",&num);

	int rev;
	rev=rec_fun_rev(num);
	printf("rev == %d",rev);
}

int rec_fun_rev( int num )
{
	int r;
	static int rev=0;
	
	if(num)
	{
		r=num%10;
		rev=rev*10+r;

		rec_fun_rev(num/10);
	}
	return rev;
}
