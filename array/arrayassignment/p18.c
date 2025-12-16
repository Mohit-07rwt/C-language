//WAP to C to insert 99 on 0th index in same array .	i/p: int a[7]={2,3,5,7,11,13 }, in=0, num=99;		o/p: int a[7]={99, 2,3,5,7,11,13};
#include<stdio.h>
void insert(int a[],int size)
{
	for(int i=size;i>0;i--)
	{
		a[i]=a[i-1];

	}
	a[0]=99;
}





void main()
{
	int size,n,i;
	printf("enter number");
	scanf("%d",&n);
	n=n+1;
	
	int a[n];

	size=sizeof(a)/sizeof(a[0]);

	printf("enter elments:");
	for(i=0;i<size-1;i++)
		scanf("%d",&a[i]);
		

	printf("before insert 99 on 0th index:");
	for(i=0;i<size-1;i++)
		printf("%d ",a[i]);

	printf("\n");
	insert(a,size);

	printf("after inserting 99th element:");
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
	
	
	
}
