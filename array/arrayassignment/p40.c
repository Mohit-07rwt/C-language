//WAP in C to left rotate array 1 times in same array.	i/p: int a[7]={11,21,31,41,51,61,71};	o/p: int a[7]={21,31,41,51,61,71,11}

#include<stdio.h>
void leftrotate(int *,int);

void main()
{
	int n,i;
	printf("enter number of elements:");
	scanf("%d",&n);

	int a[n];

	printf("enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	leftrotate(a,n);

	printf("after rotate: ");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	
}


void leftrotate(int *a,int n)
{
	int i,j,b;
	b=a[0];
	for(i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=b;
}
