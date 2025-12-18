//WAP in C using Recursive function to sum of half of array element.	i/p: int a[6]={10,20,30,44,55,66};	o/p: sum = 60

#include<stdio.h>
int rec_fun_sum_arr( int *a, int ele );
void main()
{
	int a[6],ele;
	ele=sizeof(a)/sizeof(a[0]);

	printf("enter elements: ");
	for(int i=0;i<ele;i++)
		scanf("%d",&a[i]);

	
	printf("sum of half array = %d ",rec_fun_sum_arr(a,ele));
}

int rec_fun_sum_arr(int *a,int ele )
{
	static int i,sum=0;
	if(i<(ele/2))
	{

		sum=sum+a[i];
		i++;

		
		rec_fun_sum_arr(a,ele );
	}
	return sum;
}


