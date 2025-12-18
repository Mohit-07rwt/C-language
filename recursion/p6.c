//WAP in C using Recursive function to check  given num is perfect or not .		i/p: n= 6 o/p: yes perfect

#include<stdio.h>
int rec_fun_perfect( int );
void main()
{
	int num;	
	printf("enter num");
	scanf("%d",&num);

	int sum;
	sum=rec_fun_perfect(num );
	if(sum==num)
		printf("  yes perfect");
	else
		printf("  not perfect");

}

int rec_fun_perfect( int num )
{
	int r;
	static int f=1,sum=0;
	if(f<num)
	{
		if(num%f==0)
			sum+=f;
		f++;	
		
		rec_fun_perfect(num);
	}	

	return sum;
}
