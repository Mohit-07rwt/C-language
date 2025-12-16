//WAP to C to insert 51 on 3rd index in same array .	i/p: int a[7]={2,3,5,7,11,13 },in=3 ,num=51;		o/p: int a[7]={2,3,5,51,7,11,13};

#include<stdio.h>
void insert(int a[],int size)
{
	for(int i=size;i>2;i--)
	{
		a[i]=a[i-1];
	}
	a[3]=51;

}

void main()
{
	int size,i,n;
	printf("enter number of elements you want to enter:");
	scanf("%d",&n);

	n=n+1;
	int a[n];
	
	size=sizeof(a)/sizeof(a[0]);

	printf("enter elemetns::");
	
	for(i=0;i<size-1;i++)
		scanf("%d",&a[i]);

	
	printf("before inserting 51 on 3rd index: ");
	for(i=0;i<size-1;i++)
		printf("%d ",a[i]);
	
	
	insert(a,size);

	printf("after inserting 51 on 3rd index: ");
	for(i=0;i<size;i++)
		printf("%d ",a[i]);

}
