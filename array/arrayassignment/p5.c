//wap to find sum of first digit of all array elements
#include<stdio.h>
int sum(int a[],int size)
{
	int sum=0,r;
	for(int i=0;i<size;i++)
	{
		int num=a[i];
		for(;num;num=num/10)
		{
			if(num>10)
				r=num%10;
			else
				r=num;
		}
		
		sum=sum+r;
	}
	
	return sum;
	
}


void main()
{
	int a[5],size,i;
	size=sizeof(a)/sizeof(a[0]);
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);

	int add=sum(a,size);
	printf("sum of  1 digit of all elments from an array:%d",add);
}

