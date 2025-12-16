//21. WAP to C to insert 99 on 0th , 88 on 1st index in same array .      i/p: int a[9]={30,11,45,34,14,8 ,50 },num=99 ;         o/p: int a[9]={99,88, 30,11,45,34,14,8, 50}
#include<stdio.h>
void insert(int a[],int size)
{
	int i;
	for(i=size-1;i>=2;i--)
	{
		a[i]=a[i-2];
	}
	a[0]=99;
	a[1]=88;
}

void main()
{
	int i,size,n;
	printf("enter number of elements you want to enter:");
	scanf("%d",&n);
	
	n=n+2;
	int a[n];
	
	size=sizeof(a)/sizeof(a[0]);

	for(i=0;i<size-2;i++)
		scanf("%d",&a[i]);

	printf("before:");
	for(i=0;i<size-2;i++)
		printf("%d  ",a[i]);

	insert(a,size);

	printf("after:");
	for(i=0;i<size;i++)
		printf("%d  ",a[i]);

}
