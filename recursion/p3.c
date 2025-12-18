//WAP in C using Recursive function to product	of digit factor of 3 given any int number .	i/p: n= 345638 o/p: product= 54		int rec_fun_product( int num );

#include<stdio.h>
int rec_fun_product(int num );
void main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);

	int p;

	p=rec_fun_product( num);
	printf("product of factor of 3  =%d",p);
}


int rec_fun_product(int num )
{
	int r;
	static int f=1;
	if(num)
	{
		r=num%10;
		if(r%3==0)
			f=f*r;
		rec_fun_product(num/10);
	}
	return f;
	
}
