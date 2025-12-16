//WAP to C to insert 10 on sorted place in sorted array      i/p: int a[7]={2,3,5,7,11,13 }, num= 10;        o/p: int a[7]={2,3,5,7, 10, 11,13};

#include<stdio.h>
void insert(int a[],int size)
{	
	int i,c=0;
	for(i=size-1;i>=0 && a[i]>10 ;i--)
	{
		a[i]=a[i-1];
		c=i;
	}
	a[c]=10;
}




void main()
{
	int n,size,i;
	printf("enter number of elements");
	scanf("%d",&n);
	n=n+1;
	int a[n];
	size=sizeof(a)/sizeof(a[0]);
	
	for(i=0;i<size-1;i++)
		scanf("%d",&a[i]);


	printf("before inserting nuber at its sorted place:");
	for(i=0;i<size-1;i++)
		printf("%d  ",a[i]);

	
	insert(a,size);

	printf("after inserting nuber at its sorted place:");
	for(i=0;i<size;i++)
		printf("%d  ",a[i]);

}

