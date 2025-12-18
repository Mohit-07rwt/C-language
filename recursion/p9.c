//WAP in C using Recursive function to count array element less than 99 more than 39.	i/p: int a[6]={71,53,145,21,49,153}	o/p: count = 3


#include<stdio.h>
int rec_fun_count_arr( int *, int);
void main()
{
	int a[6],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("enter elements: ");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	printf("count = %d",rec_fun_count_arr(a,ele));
}


int rec_fun_count_arr(int *a,int ele )
{
	static int i=0,c=0;
	
	if(i<ele)
	{
		if(a[i]>39 && a[i]<99)
			c++;
		i++;
		
		rec_fun_count_arr(a,ele);
	}
	return c;

}
