//WAP in C using Recursive function to count digit less than 6 of given any int number .	i/p: n= 2658942 o/p: count= 4	int rec_fun_count( int num );

#include<stdio.h>
int rec_fun_count( int num );
void main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);

	int count;

	count=rec_fun_count( num);
	printf("%d",count);

}


int rec_fun_count(int num )
{
	int r;
	static int c=0;
	if(num)
	{
		r=num%10;
		if(r<6)
			c++;
		rec_fun_count(num/10);
	}
	return c;
	
}
